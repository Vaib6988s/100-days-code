//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    float r, AC, Circumference;
    printf("Enter the value of radius\n");
    scanf("%f", &r);
        AC  =  3.142 * r * r;
        Circumference = 2 * 3.142 * r;
    printf("Area of Circle is %f\n and circumference is %f\n", AC, Circumference);
    return 0;
}
