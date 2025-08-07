#include "uart.h"
#include <stdint.h>
#ifdef SIMULATE_ON_HOST
#include <stdio.h>
#endif

void uart_init() {}

void uart_write(const char *s) {
#ifdef SIMULATE_ON_HOST
    printf("%s", s);
#else
    while (*s) {
        // TODO: Implement UART TX for real hardware or QEMU semihosting
        s++;
    }
#endif
}