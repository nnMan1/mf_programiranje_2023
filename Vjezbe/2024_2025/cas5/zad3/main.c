#include <stdio.h>
#include <stdlib.h>

/**
Npisati program koji stampa drugu najvecu cifru unijetog broja
*/

int main()
{
    int n;
    scanf("%d", &n);

    int m=0, d=0;

    while(n != 0) ///dok ima cifara u broju n
    {
        if(m < n % 10) { ///ako je trenutna najveca cifra manja od cifre jednica
            d = m;       ///cifra koja je do sada bila najveca postaje druga najveca
            m = n % 10;  ///nova najvea cifra je cifra koju smo sad pronasli
        } else              ///ako nova cifra nije veca od najvece cifre
            if(d < n % 10)  ///ali je veca od druge najvece
                d = n % 10; ///proglasimo novu cifru za drugu najvecu.

        n /= 10; ///uklonimo cifru jednica. Isto kao da smo pisali n = n / 10;
    }

    printf("Najveca cifra je %d.\n", m);
    printf("Druga najveca cifra je %d.\n", d);

    return 0;
}
