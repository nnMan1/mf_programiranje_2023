#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
    prosjek ocjena za 10 predmeta
    ocjene se unose sa tastature
    */

    float s = 0;
    int i = 1;
    int o;

    while(i <= 10) {
        printf("Unesite ocjenu za predmet %d: ", i);
        scanf("%d", &o);
        s = s  + o;

        i = i + 1;
    }

    printf("Prosjek je : %f", s / 10);

    /*
    int n;
    scanf("%d", &n);

    if ( n >= 60 ) {
        printf( "Polozio.\n" );
        printf("Mozete na more u avgustu :D");
    } else {
        printf( "Pao.\n" );
        printf( "Morate polagati cio ispit.\n" );
    }

    /*if(n >= 85)
        printf("10");
    else {
        if(n >= 75)
            printf("9");
        else {
            if(n >=65)
                printf("8");
            else {
                if(n >= 55)
                    printf("7");
                else {
                    if(n > 45)
                        printf("6");
                    else
                        printf("5");
                }
            }
        }
    }
    */
    return 0;
}
