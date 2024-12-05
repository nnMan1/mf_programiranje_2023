#include <stdio.h>
#include <stdlib.h>

/**
Npisati program koji stampa najvecu cifru unijetog broja
*/

int main() {

    int n;
    scanf("%d", &n);

    int m=0;

    while(n != 0) ///dok ima cifara u broju n
    {
        if(m < n % 10) ///ako je trenutna najveca cifra manja od cifre jednica
            m = n % 10;

        n /= 10; ///uklonimo cifru jednica. Isto kao da smo pisali n = n / 10;
    }

    printf("Najveca cifra je %d", m);


    return 0;
}
