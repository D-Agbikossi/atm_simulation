/*
This contains the implementation of functions declared in operation.h.
It includes function to:
- Check balance
- Deposit
- Withdraw
- Exit

Author: Denaton Agbikossi
*/
#include "operation.h"
#include <math.h>
#include <string.h>

double balance = 1000.0; // Example balance
double amountd = 0.0;
double amountw = 0.0;

double check_balance(void) {
    printf("Your current balance is: $%.2f\n", balance);

    return balance;
}

double deposit(void) {
    printf("Enter amount to deposit: ");
    scanf("%lf", &amountd);

    if (amountd <= 0) {
        printf("Invalid deposit amount.\n");
        return -1; // Indicate error
    } else{
        balance += amountd;
        printf("Successfully deposited $%.2f. New balance is $%.2f\n", amountd, balance);
        return balance;
    }
}

double withdraw(void) {
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amountw);

    if (amountw <= 0) {
        printf("Invalid withdrawal amount.\n");
        return -1; // Indicate error
    } else if (amountw > balance) {
        printf("Insufficient funds. Your balance is $%.2f\n", balance);
        return -1; // Indicate error
    } else {
        balance -= amountw;
        printf("Successfully withdrew $%.2f. New balance is $%.2f\n", amountw, balance);
        return balance;
    }
}

void exit_program(void) {
    printf("Thank you for using the ATM. Goodbye!\n");
    exit(0);
}