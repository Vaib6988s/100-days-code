//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int k = 1; k <= n; k++)
     {
        sum += (2.0 * k) / (4.0 * k - 1.0);
    }

    printf("Sum = %lf\n", sum);
    return 0;
}
