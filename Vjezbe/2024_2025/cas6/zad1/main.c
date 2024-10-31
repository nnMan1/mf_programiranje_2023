#include <stdio.h>
#include <stdlib.h>

/**
Provjeriti da li je unijeti broj n prost
Koristiti for petlju.
*/

int main() {

    int n;
    scanf("%d", &n);

    int p = 1;

    for(int i=2;i<n;i++)
        if(n % i == 0) {
            p = 0;
            break;
        }

    if(p == 1)
        printf("Broj je prost");
    else
        printf("Broj nije prost");


    return 0;
}
