#include <stdio.h>
#include <stdlib.h>

///provjeriri da li je unijeti broj n prost

int main()
{
    int n;
    scanf("%d", &n);

    int p = 1;
    int i = 2;

    while(i <= n-1) {
        if(n % i == 0)
            p = 0;

        i++;
    }

    if(p == 1)
        printf("Broj je prost");
    else
        printf("Broj nije prost");
    return 0;
}
