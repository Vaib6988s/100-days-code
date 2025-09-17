//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
    float a, b, sum;
    printf("Enter your value a\n");
    scanf("%f", &a);
    printf("Enter the value of b\n");
    scanf("%f", &b);
    sum= a + b;
    printf("The sum of the numbers are %f\n" ,sum);
    return 0;
}