#include "scheduler.h"

#define MAX_TASKS 4

static task_t tasks[MAX_TASKS];
static int task_count = 0;
static int current_task = 0;

void scheduler_add_task(void (*fn)()) {
    if (task_count < MAX_TASKS) {
        tasks[task_count++].fn = fn;
    }
}

void scheduler_run() {
    if (task_count == 0) return;
    tasks[current_task].fn();
    current_task = (current_task + 1) % task_count;
}
