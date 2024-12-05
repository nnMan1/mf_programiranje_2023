#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, g;
    scanf("%d%d%d", &d, &m, &g);

    int p = g % 4 == 0 && g % 100 != 0 || g % 400 == 1;

    int br_dana = d;

    for(int i=1;i<m;i++) {
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i==12)
            br_dana += 31;
        else
            if(i != 2)
                br_dana += 30;
            else
                br_dana += 28 + p;
    }

    /*switch(m) {
        case 12:
            br_dana += 30; //ako je poceo decembar dodaj na bane citav nov
        case 11:
            br_dana += 31;
        case 10:
            br_dana += 30;
        case 9:
            br_dana += 31;
        case 8:
            br_dana += 31;
        case 7:
            br_dana += 30;
        case 6:
            br_dana += 31;
        case 5:
            br_dana += 30;
        case 4:
            br_dana += 31;
        case 3:
            br_dana += 28 + p;
        case 2:
            br_dana += 31;
    }*/

    printf("%d", br_dana);

    return 0;
}
