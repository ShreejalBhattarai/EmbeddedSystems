#include "uart.h"

#define uart_cr *(volatile uint32_t *) 0xE0001000
#define uart_md *(volatile uint32_t *) 0xE0001004
#define uart_bundgen *(volatile uint32_t *) 0xE0001018
#define uart_baundrate *(volatile uint32_t *) 0xE0001034
#define uart_sr  *(volatile uint32_t *) 0xE000102C
#define uart_data *(volatile uint32_t *) 0xE0001030

#define BAUNDGEN 0x7c
#define BAUNDRATE 6

void uart_init(void) {
    uart_cr = 0x3;  // Enable UART
    while (uart_cr & 0x1); // Wait for UART reset
    while (uart_cr & 0x2);

    uart_bundgen = BAUNDGEN;
    uart_baundrate = BAUNDRATE;
    uart_md = 0x20;
    uart_cr |= 0x14; // Enable TX and RX
}

void uart_putchar(char c) {
    while (uart_sr & (1 << 4)); // Wait until TX buffer is empty
    uart_data = c;
}

char uart_getchar(void) {
    while (uart_sr & (1 << 1)); // Wait until RX buffer has data
    return uart_data;
}

void uart_print(const char *str) {
    while (*str) {
        uart_putchar(*str++);
    }
}

void uart_println(const char *str) {
    uart_print(str);
    uart_print("\r\n");
}
