//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main()
{
    float c, F;
    printf("Enter the value in Degree Celcius\n");
    scanf("%f", &c);
    F = (c * 9/5) + 32;
    printf("The temprature in degree Fahrenheit is %f\n", F);
    return 0;
}
