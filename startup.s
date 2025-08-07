.syntax unified
.cpu cortex-m4
.thumb

.global _start
.global Reset_Handler
.global _estack

.section .isr_vector, "a", %progbits
.type _start, %object
_start:
    .word _estack
    .word Reset_Handler

.section .text.Reset_Handler
.type Reset_Handler, %function
Reset_Handler:
    bl main
    b .