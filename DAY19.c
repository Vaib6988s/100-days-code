//Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

   
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

   
    lcm = (num1 * num2) / hcf; // lcm*hcf=product of two given numbers

    printf("LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
