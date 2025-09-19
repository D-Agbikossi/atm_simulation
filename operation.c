/*
This contains the implementation of functions declared in operation.h.
It includes function to:
- Check balance: check_balance(), displays current balance
- Deposit: deposit(), handles deposit transactions with validation
- Withdraw: withdraw(), handles withdrawal transactions with validation
- Exit: exit_program(), program termination

Author: Denaton Agbikossi
*/

#include "operation.h"
#include <stdio.h>
#include <stdlib.h>

static double balance = 1000.0; // Example balance

double check_balance(void) {
    printf("Your current balance is: %.2f RWF\n", balance);
    return balance;
}

double deposit(void) {
    double amountd = 0.0;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amountd);

    if (amountd <= 0) {
        printf("Invalid deposit amount. The amount must be positive.\n");
        return -1; // Indicate error
    } else {
        balance += amountd;
        printf("Successfully deposited %.2f RWF. New balance is %.2f RWF\n", amountd, balance);
        return balance;
    }
}

double withdraw(void) {
    double amountw = 0.0;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amountw);

    if (amountw <= 0) {
        printf("Invalid withdrawal amount. The amount must be positive.\n");
        return -1; // Indicate error
    } else if (amountw > balance) {
        printf("Insufficient funds. Your balance is %.2f RWF\n", balance);
        return -1; // Indicate error
    } else {
        balance -= amountw;
        printf("Successfully withdrew %.2f RWF. New balance is %.2f RWF\n", amountw, balance);
        return balance;
    }
}

void exit_program(void) {
    printf("Thank you for using the ATM. Goodbye!\n");
    exit(0);
}
