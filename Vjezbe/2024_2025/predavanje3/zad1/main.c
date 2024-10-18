#include <stdio.h>
#include <stdlib.h>

/**
*ucitava broj, ako je broj paran stampa ga
*ako broj nije paran stampa broj za jedan veci od unijetog broja
*/

int main()
{
    int n;
    //printf("Unesi broj: ");
    printf("%s", "Unesi broj: ");
    scanf("%d", &n);

    /*if(n%2 == 0)
        printf("%d", n);
    else {
        n = n + 1;
        printf("%d", n);
    }*/

    /**
    n = n % 2 == 0 ? n + 0 : n + 1;
    printf("%d", n);
    */

    //n % 2 == 0 ? printf("%d", n) : printf("%d", n + 1);

    n = 5;
    n = 5 + (n % 2 == 1 ? 2 : 1);

    printf("%d", n);


    return 0;
}
