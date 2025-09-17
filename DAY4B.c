//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{
    int x, sum;
printf("Enter the number of terms x\n:");
scanf("%d", &x);
sum=x*(x+1)/2;
printf("The sum of first %d natural number is %d", x, sum);
return 0;
}