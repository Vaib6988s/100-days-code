#include <stdio.h>
#include <math.h>  

int main() {
    double a, b, c, discriminant, root1, root2, RE , IMZ;


    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

  
    discriminant = b * b - 4 * a * c;

  
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        
        RE = -b / (2 * a);
        IMZ = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary (complex).\n");
        printf("Root 1 = %.2lf + %.2lfi\n", RE, IMZ); //iota (i) is a complex number meaning square root of neagvtive 1 
        printf("Root 2 = %.2lf - %.2lfi\n", RE, IMZ);
    }

    return 0;
}
