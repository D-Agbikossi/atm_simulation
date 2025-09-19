A C program that simulates the basic functions of an ATM machine for a single user, demonstrating core programming concepts in C.

# Features
- Check Balance: View current account balance
- Deposit Money: Add funds to the account (positive amounts only)
- Withdraw Money: Remove funds from the account (with validation, positive amount only)
- Exit Program: Terminate the application

# Key Programming Concepts Demonstrated
- Variables and Data Types: Proper use of double for monetary values
- Control Structures: while loops, switch statements, if-else - conditions
- Functions: Modular design with separate functions for each operation
- Input/Output Operations: User interaction via scanf() and printf()
- Conditional Logic: Validation of user inputs and transaction rules
- Modular Programming: Separation of concerns across multiple files

# How to Compile and Run
1. Prerequisites
GCC compiler installed
Basic command line knowledge

2. Compilation Instructions
- Navigate to the project directory:
```bash
cd /path/to/atm_simulation
```

- Compile the program:
```bash
gcc -o atm main.c operation.c
```
- Run the executable:
```bash
./atm
```
** Alternative Compilation Methods
Separate compilation:
```bash
gcc -c operation.c
gcc -c main.c
gcc -o atm main.o operation.o
```
With warnings enabled (recommended for learning):
```bash
gcc -Wall -o atm main.c operation.c
```

# Validation Rules
- Deposits: Must be positive amounts (> 0)
- Withdrawals: Must be positive amounts and not exceed available balance
- Menu Options: Only accepts integers 1-4

# Troubleshooting
** Common Issues:
- Compilation errors: Ensure all files are in the same directory
- Input issues: The program handles invalid menu choices by clearing the input buffer
- Math precision: Uses double data type for accurate monetary calculations

** If you encounter issues:
- Check that all files are present in the same directory
- Verify the compilation command syntax
- Ensure you have GCC installed (gcc --version)