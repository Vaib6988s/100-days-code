//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() 
{
    int n;
    float sum = 0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return 0;
    }

   
    sum = 1;

    
    for (int k = 2; k <= n; k++)
     {
        float numerator = 2*k - 1;
        float denominator = 2*k;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);


    return 0;
}
