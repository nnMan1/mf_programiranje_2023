#include <stdio.h>
#include <stdlib.h>

int zbir_cifara(int n) {
    int zbir = 0;

    while(n != 0) {
        int c = n % 10;
        zbir += c;
        n /= 10;
    }

    return zbir;
}

int prost(int n) {
    ///vraca 1 ako je broj prost
    ///inace vraca 0.

    for(int i=2;i<n;i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

void stampaj_proste_1(int a, int b) {
    ///stampa sve proste brojeve manje od 1000

    for(int i=a;i<=b;i++) {
        if(prost(i))
            printf("%d ", i);
    }
}

///napisati funckiju koja nalazi najvecu cifru boja
int najveca_cifra(int n) {

    int m = 0;

    while(n != 0) {
        if(m < n % 10)
            m = n % 10;

        n /= 10;
    }

    return m;
}

///vraca drugu najvecu cifru broja n
int druga_najveca(int n) {
    int m1 = 0, m2 = 0;

    while(n != 0) {
        if(n % 10 >= m1) {
            m2 = m1;
            m1 = n % 10;
        } else if(n % 10 > m2)
            m2 = n % 10;

        n /= 10;

    }

    return m2;
}

int max_rastojanje(int n) {
    ///nalazi maksimalno rastojanje izmedju susjednih cifara broja n

}

int main()
{
    int n;
    scanf("%d", &n);

    printf("zbir_cifara(%d) = %d\n", n, zbir_cifara(n));
    printf("prost(%d) = %d\n", n, prost(n));
    printf("najveca_cifra(%d) = %d\n", n, najveca_cifra(n));
    printf("druga_najveca(%d) = %d\n", n, druga_najveca(n));


    /*int a, b;
    scanf("%d%d", &a, &b);

    stampaj_proste_1(a, b);*/

    return 0;
}
