#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///1. Napisati program koji stampa zbir cifara unijetog broja

    int n;
    scanf("%d", &n);

    int s = 0;///promjenljiva koja cuva sumu cifara

    while(n > 0) {
        s = s + n % 10;
        n = n / 10;
    }

    printf("%d", s);

    return 0;
}
