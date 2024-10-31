#include <stdio.h>
#include <stdlib.h>

/**
Stampati sve proste brojeve izmedju a i b
*/

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int p;

    for(int n=a;n<=b;n++) {

        p = 1;

        for(int i=2;i<n;i++)
            if(n % i == 0) {
                p = 0;
                break;
            }

        if(p == 1)
            printf("%d ", n);
    }

    return 0;
}
