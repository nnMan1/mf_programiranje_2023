#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, n, s;
    scanf("%f%f%f", &d, &n, &s);

    float dist = (d * 100 - n * s) / (n + 1);

    printf("%f", dist);

    return 0;
}
