#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, g;

    scanf("%d%d%d", &d, &m, &g);

    d = d - 1;

    if(d == 0) {
        m = m - 1;

        if(m == 0) {
            g = g - 1;
            m = 12;
            d = 31;
        } else {
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
                    d = 31;
            else {
                if(m != 2)
                    d = 30;
                else {
                    if(g % 4 == 0 && g % 100 != 0 || g % 400 == 0)
                        d = 29;
                    else
                        d = 28;
                }
            }
        }
    }


    printf("%d %d %d", d, m, g);
    return 0;
}
