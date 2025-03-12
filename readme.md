# UART Communication on Blackboard  
This repository provides a simple **UART communication implementation** for the **Blackboard microcontroller**, designed to help students understand UART-based input and output without getting too deep into the code.

## 📌 Overview  
This project demonstrates how to:  
- Initialize UART communication  
- Send and receive characters via UART  
- Implement a simple interactive program that takes user input and finds the **largest prime number ≤ input**  

## 🔧 How It Works  
1. The program initializes the UART module.  
2. It prompts the user to enter a number via UART.  
3. It finds the **largest prime number** less than or equal to the input.  
4. The result is displayed via UART.  

## 📂 File Structure  
- **`uart.h`** – UART function prototypes  
- **`uart.c`** – UART function definitions  
- **`main.c`** – Implements UART communication and prime number calculation  

## 🚀 Usage  
### **1. Compile & Load the Code**  
Ensure your development environment (Vitis, SDK, etc.) is set up for the **Blackboard microcontroller**. Then, compile and flash the code to the board.  

### **2. Run the Program**  
- Open a **serial monitor** (e.g., Linux `screen`, PuTTY, or Minicom).  
- Set the **baud rate** to match the UART configuration.  
- Enter a number when prompted.  
- The program will return the **largest prime number** ≤ input.  

## 🛠️ Key Functions  
### **UART Communication**  
- `uart_init()` – Initializes UART  
- `uart_putchar(char c)` – Sends a character via UART  
- `uart_getchar()` – Receives a character from UART  
- `uart_print(const char *str)` – Sends a string via UART  
- `uart_println(const char *str)` – Sends a string with a newline  

### **Prime Number Calculation**  
The program uses a simple loop to find the largest prime ≤ input.

## 🎯 Why This Project?  
This repository is designed to help students **understand Blackboard’s UART capabilities** without diving too deep into the code. It focuses on **practical implementation** rather than theoretical details.

## 📜 License  
Feel free to use or modify this project for learning purposes.  

---

Let me know if you want any modifications! 🚀
