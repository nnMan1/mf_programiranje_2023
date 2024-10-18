#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float P;
    scanf("%f", &P);

    float r = sqrt(P / M_PI);
    float O = 2 * M_PI * r;

    printf("%f", O);

    return 0;
}
