// GangForCode
#include <stdio.h>

void main() {
    char operation;
    double num1, num2, result;

    // Displaying the menu of arithmetic operations
    printf("Choose an arithmetic operation (+, -, *, /, %%): ");
    scanf("%c", &operation);

    // Input two numbers for the arithmetic operation
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch-case statement to perform the selected arithmetic operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Sum: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Difference: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Product: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Modulus: %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operation selected.\n");
    }

}
