# UART Library for Blackboard  
This repository provides a **lightweight UART library** for the **Blackboard microcontroller**, allowing students to use simple `println`-style functions without worrying about low-level UART implementation.

## 📌 Overview  
The goal of this project is to make UART communication **simpler and more intuitive** for students. Instead of dealing with low-level register manipulation, users can call **high-level functions** like `uart_println("Hello, world!")` to send data over UART.

## 🔧 Features  
- **Simple and easy-to-use functions** (`uart_print`, `uart_println`, etc.)  
- **Abstracts away register-level operations**  
- **Compatible with Blackboard microcontroller**  
- **Provides a foundation for students to focus on higher-level applications**  

## 📂 File Structure  
- **`uart.h`** – Header file with UART function prototypes  
- **`uart.c`** – UART function implementations  
- **`main.c`** – Demonstration program  

## 🚀 Usage  
### **1. Include the UART Library**  
In your code, include the UART library:  
```c
#include "uart.h"
