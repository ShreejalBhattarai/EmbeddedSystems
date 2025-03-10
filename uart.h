#ifndef UART_H
#define UART_H

#include <stdint.h>

void uart_init(void);
void uart_putchar(char c);
char uart_getchar(void);
void uart_print(const char *str);
void uart_println(const char *str);

#endif // UART_H
