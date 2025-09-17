//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float SI, CI, P, T, R;
    printf("Enter the principal amount P\n:");
scanf("%f", &P);
printf("Enter the rate of intrest R\n:");
scanf("%f", &R);
printf("Enter the Time period T\n");
scanf("%f", &T);
SI = P*R*T;
CI= P*pow((1+R),T)-P;
printf("Simple intrest is %f\n and compound intrest is %f\n", SI, CI);
return 0;
}