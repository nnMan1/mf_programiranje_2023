#include <stdio.h>
#include <stdlib.h>

/**
Ucitava se prirodan broj n i dva indeksa i i j.
Stampati broj koji se dobije kad cifre na pozicijama i i j zamijene mjesta.
Cifra jedinica ima indeks 0.

123574986 6 2
129574386
*/

int main()
{
    int n, l, r; //pretpostavicemo da je l > r
    scanf("%d%d%d", &n, &l, &r);

    int or = 0;
    int i = 0;

    while(i < r) {
        or = or * 10 + n % 10;
        n /= 10;
        i++;
    }

    int vr = n % 10;
    n /= 10;
    i++;

    int c = 0;
    while(i < l) {
        c = c * 10 + n % 10;
        n /= 10;
        i++;
    }

    int vl = n % 10;
    n /= 10;
    i++;

    printf("%d %d %d %d %d\n", n, vl, c, vr, or);

    n = n * 10 + vr;

    while(c != 0) {
        n = n * 10 + c % 10;
        c /= 10;
    }

    n = n * 10 + vl;

    while(or != 0) {
        n = n * 10 + or % 10;
        or /= 10;
    }

    printf("%d", n);


    return 0;
}
