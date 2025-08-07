# Bare-metal ARM Cortex-M OS (No Hardware Required)

## Features

- Custom startup code and linker
- Cooperative scheduler (round-robin)
- UART and GPIO driver stubs
- CLI welcome message
- Fully emulatable via QEMU (optional)
- Ready for real hardware (STM32F411)

## Build

```bash
sudo apt install gcc-arm-none-eabi
make
```

## Run (QEMU optional)

```bash
qemu-system-arm -M stm32-p103 -kernel firmware.bin -nographic
```

## Project Structure

- `startup.s`: Vector table and reset
- `linker.ld`: Memory layout
- `scheduler/`: Round-robin scheduler
- `drivers/`: GPIO and UART stubs
- `cli/`: Simulated UART command interface

---