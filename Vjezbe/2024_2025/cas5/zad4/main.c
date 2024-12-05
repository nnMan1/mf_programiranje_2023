#include <stdio.h>
#include <stdlib.h>

/**
Napisati program koji stampa broj koji se dobije okretajnem cifara unesenog broja.
Primjer:
Za ulaz 123
Stamapati izlaz 321
*/

int main()
{
    int n;
    scanf("%d", &n);

    int x = 0;

    while(n != 0) {
        x = x * 10 + n % 10;
        n /= 10;
    }

    printf("%d", x);

    return 0;
}
