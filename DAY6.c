//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number a\n:");
    scanf("%d", &a);
if(a % 2 == 0)
{
    printf("Your number is even");
}
else
{
    printf("your number is odd");
}
return 0;
}
