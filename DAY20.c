//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);

    long product = 1;
    int if_odd = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 1)
         {     
            product *= digit;
            if_odd = 1;
        }
        num /= 10;
    }

    if (if_odd)
        printf("Product of odd digits: %ld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
