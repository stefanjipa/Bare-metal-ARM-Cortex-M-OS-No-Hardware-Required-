#include "cli.h"
#include "drivers/uart.h"
#include <string.h>

void cli_print_banner() {
    uart_write("\nBare-metal ARM OS\nType 'help' for commands.\n");
}

void cli_process_command(const char *cmd) {
    if (strcmp(cmd, "help") == 0) {
        uart_write("Available commands:\nhelp - Show this help message\n");
    } else {
        uart_write("Unknown command.\n");
    }
}
