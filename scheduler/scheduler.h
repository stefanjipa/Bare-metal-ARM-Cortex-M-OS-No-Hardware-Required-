#ifndef SCHEDULER_H
#define SCHEDULER_H

typedef struct {
    void (*fn)();
} task_t;

void scheduler_add_task(void (*fn)());
void scheduler_run();

#endif