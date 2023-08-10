#include <stdio.h>
#include <math.h>

int main(){
        double A;
        double B;
        double C;

        printf("Enter Side A (cm): ");
        scanf("%lf", &A);

        printf("Enter Side B (cm): ");
        scanf("%lf", &B);

        C = sqrt(A*A + B*B);
        printf("Side C is: %lf cm", C);
        return 0;
}