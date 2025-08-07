#include "drivers/gpio.h"
#include "drivers/uart.h"
#include "scheduler/scheduler.h"
#include "cli/cli.h"

void task1() {
    uart_write("Running Task 1\n");
}

void task2() {
    uart_write("Running Task 2\n");
}

int main(void) {
    uart_init();
    gpio_init();
    cli_print_banner();

    scheduler_add_task(task1);
    scheduler_add_task(task2);

    while (1) {
        scheduler_run();
    }
}