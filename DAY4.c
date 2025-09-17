//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter your first number a\n:");
    scanf("%d", &a);
    printf("Enter your second number b\n:");
    scanf("%d", &b);
     a = a+b;
     a = a-b;
     printf("After swapping\n");
     printf("First number is %d and second number is %d", b, a);
     return 0;
}