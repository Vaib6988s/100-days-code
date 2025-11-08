//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int S, M, H;
    printf("Enter time S\n:");
    scanf("%d", &S);
    H=S/3600;
    M=H%60;
    S=S%60;
printf("Time is %d:Hours, %d:minutes, %d:seconds", H, M, S );
    return 0;


}
