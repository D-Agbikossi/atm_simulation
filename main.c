/*
This is the user interface for the program.

The program simulates an atm machine. A user can view his balance perform various operations such as deposit, withdraw, and check balance.
He can also exit the program. Uses a switch statement to route user choices to appropriate functions.

Author: Denaton Agbikossi
*/

#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

void displayMenu() {
    printf("\nWelcome to the ATM Machine\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Please select an option: ");
}

int main() {
    int choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                exit_program();
                break;
            default:
                printf("Invalid option. Please try again.\n");
                // Clear input buffer in case of non-integer input
                while (getchar() != '\n');
        }
    }

    return 0;
}
