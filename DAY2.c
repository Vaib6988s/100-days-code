//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    float length, breadth, A, P;
    printf("Enter length of the rectangle\n: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle\n:");
    scanf("%f", &breadth);
    A = length * breadth;
    P = 2 * length + 2 * breadth;
    printf("Area of the recatngle = %f\n and Perimeter = %f\n",A ,P);
    return 0;
}
