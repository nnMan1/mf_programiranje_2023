#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c; //64bit realan broj

    scanf("%lf%lf%lf", &a, &b, &c);

    double d = b * b - 4 * a * c;

    if(d > 0) {
        double x1 = (-b - sqrt(d)) / (2 * a);
        double x2 = (-b + sqrt(d)) / (2 * a);

        printf("%lf %lf", x1, x2);
    } else {

        if(d == 0) {
            double x = -b / (2 * a);

            printf("%lf", x);
        } else {
            printf("Nema rjesenja");
        }

    }

    return 0;
}
