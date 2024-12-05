#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, g;
    scanf("%d%d%d", &d, &m, &g);

    int p = g % 4 == 0 && g % 100 != 0 || g % 400 == 1;


    d += 1;

    int D;

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        D = 31;
    else
        if(m != 2)
            D = 30;
        else
            D = 28 + p;

    if(d > D) {
        m++;
        d = 1;
    }

    if(m > 12) {
        m = 1;
        g++;
    }

    printf("%d %d %d", d, m, g);

    return 0;
}
