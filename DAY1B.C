//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    float a, b, sum, product, difference, quotient;
    printf("enter your first number a\n:");
    scanf("%f", &a);
    printf("enter your second number b\n:");
    scanf("%f", &b);
    sum= a + b;
    product= a * b;
    difference= a - b;
    printf("The sum of the number is %f\n, product is %f\n and diffrence is %f\n " ,sum ,product, difference);
    if( b != 0 )
    {
    quotient= a / b;
    printf("The quotient is %f\n",quotient);
    }else
    {
        printf("quotient = Undefined( division by zero )\n");
    }
    return 0;
}