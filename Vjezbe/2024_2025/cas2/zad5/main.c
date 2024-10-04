#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    float D = b * b - 4 * a *c;

    if(D > 0) {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);

        printf("%f %f", x1, x2);
    } else {
        if(D == 0) {
            float x = -b / (2 * a);
            printf("%f", x);
        } else {
            printf("Nema rjeseanja");
        }
    }

    return 0;
}
