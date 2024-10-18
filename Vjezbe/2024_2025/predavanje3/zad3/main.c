#include <stdio.h>
#include <stdlib.h>

/**
Racunamo prosjek za nepoznat broj studenata.
Unos ocjena se zavrsava kad se unese -1
*/

int main()
{
    float s = 0;
    int cnt = 0;
    int o = 0;

    scanf("%d", &o);

    while(o != -1) {
        s = s + o;
        cnt = cnt + 1;
        scanf("%d", &o);
    }

    if(cnt > 0)
        printf("Prosjek je : %f", s / cnt);
    else
        printf("Ni jedan student nije unesen");

    return 0;
}
