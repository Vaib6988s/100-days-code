//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    long  num;
    printf("Enter a number: ");
    if (scanf("%ld", &num) != 1)
     {
        printf("Invalid input.\n");
        return 1;
    }

    if (num == 0) {                 
        printf("Number after swapping first and last digit: 0\n");
        return 0;
    }

    int sign = 1;
    if (num < 0) {                  
        sign = -1;
        num = -num;
    }

    if (num < 10) {                 
        printf("Number after swapping first and last digit: %ld\n", sign * num);
        return 0;
    }

    long original = num;
    long last = num % 10;

    long factor = 1;
    long temp = num;
    while (temp >= 10) {            
        temp /= 10;
        factor *= 10;
    }
    long  first = temp;

    
    long middle = (original % factor) / 10;

    
    long swapped = last * factor + middle * 10 + first;
    swapped *= sign;

    printf("Number after swapping first and last digit: %ld\n", swapped);
    return 0;
}
