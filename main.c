#include "uart.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
    uart_init();

    while (1) {
        uart_print("Enter a number: ");
        char num[10];
        int i = 0;
        char c;

        while (1) {
            c = uart_getchar();
            uart_putchar(c); // Echo input

            if (c == '\n' || c == '\r') {
                num[i] = '\0';
                break;
            }
            num[i++] = c;
        }

        int num1 = atoi(num);
        i = 2;

        while (i < num1) {
            if (num1 % i == 0 && num1 != 2) {
                num1 -= 1;
                i = 2;
            } else if (i >= num1) {
                break;
            }
            i++;
        }

        char sum_str[30];
        sprintf(sum_str, "Prime number is: %d", num1);
        uart_println(sum_str);
    }

    return 0;
}
