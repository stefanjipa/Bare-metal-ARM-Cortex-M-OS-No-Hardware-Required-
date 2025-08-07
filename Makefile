CC = arm-none-eabi-gcc
OBJCOPY = arm-none-eabi-objcopy
CFLAGS = -Wall -O0 -g -mcpu=cortex-m4 -mthumb -nostdlib -nostartfiles
LDSCRIPT = linker.ld

SRC = startup.s main.c drivers/gpio.c drivers/uart.c scheduler/scheduler.c cli/cli.c

all: firmware.elf firmware.bin

firmware.elf: $(SRC) linker.ld
	$(CC) $(CFLAGS) -T$(LDSCRIPT) $(SRC) -o $@

firmware.bin: firmware.elf
	$(OBJCOPY) -O binary $< $@

clean:
	rm -f *.elf *.bin