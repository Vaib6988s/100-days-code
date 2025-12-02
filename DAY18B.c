//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 && num2 == 0) {
        printf("HCF is not defined for both numbers being zero.\n");
        return 0;
    }

    
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;

    printf("HCF (GCD) of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}
