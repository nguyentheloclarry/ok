#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();

int main() {
    printWelcomeMenu();

    int inputNum;
    while (1) {
        printOptions();
        printf("Enter operation number: ");
        if (scanf_s("%d", &inputNum) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        switch (inputNum) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        default:
            printf("Invalid operation number. Please try again.\n");
            continue;
        }
        break; // Exit the loop if a valid operation was performed
    }
    return 0;
}

void printWelcomeMenu() {
    printf(" **********************\n");
    printf("**   Welcome to the   **\n");
    printf("**   BCS Calculator   **\n");
    printf(" **********************\n");
}

void printOptions() {
    printf("1. Add\n");
    printf("2. Subtract\n");
}

void add() {
    double num1, num2, result;
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);
    printf("Enter the second value: ");
    scanf_s("%lf", &num2);
    result = num1 + num2;
    printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
    double num1, num2, result;
    printf("Enter the first value: ");
    scanf_s("%lf", &num1);
    printf("Enter the second value: ");
    scanf_s("%lf", &num2);
    result = num1 - num2;
    printf("%lf - %lf = %lf\n", num1, num2, result);
}
