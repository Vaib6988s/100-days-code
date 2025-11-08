//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

   
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 == 0)
                printf("Error! Division by zero is not allowed.\n");
            else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;

        case '%':
           
            if ((int)num2 == 0)
                printf("Error! Division by zero is not allowed.\n");
            else {
                int mod = (int)num1 % (int)num2;
                printf("Result = %d\n", mod);
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
