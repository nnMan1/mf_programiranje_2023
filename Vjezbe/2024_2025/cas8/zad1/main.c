#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, x;

    scanf("%f%f", &k, &x);

    int br = 0;

    while(k >= x) {
        br = br + 1;
        k = k - x;
        x = x * 1.1;
    }

    printf("%d", br);

    return 0;
}
