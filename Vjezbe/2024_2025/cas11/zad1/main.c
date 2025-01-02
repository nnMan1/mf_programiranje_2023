#include <stdio.h>
#include <stdlib.h>

/**Napisati funkciju koja racuna zbir cifara predatog broja*/

int zbir_cifara(int n) {
    int s = 0;

    while(n != 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

/**Napisati rekurzivnu funkciju koja racuna zbir cif
predatog broja*/

int zbir_cifara_rec(int n) {
    if(n == 0)
        return 0;

    int c = n % 10;
    int s = zbir_cifara_rec(n / 10);

    return s + c;
}

/**Napisati funkciju koja nalazi maksimalnu cifr broja*/

int max_cifra(int n) {
    int m = 0; //cuva maksimalnu cifru

    while(n != 0) {
        if(n % 10 > m) //ako je nova cifra veca od maksimalne
            m = n % 10; //azuriramo maksimalnu cifru

        n /= 10;
    }

    return m;
}

/**Napisati rekurzivnu funkciju koja nalazi maksimalnu cifru boja*/

int max_cifara_rec(int n) {
    if(n == 0)
        return 0;

    int m = max_cifara_rec(n / 10); //nadjemo maksimalnu cifru broja bez posljednje cifre

    if(m > n % 10) //ako je posljedanja cifra manja od m
        return m;   //m je maksimalna cifra citavog broja
    else
        return n % 10; //posljedja cifra je maksimalna cifra citavog broja
}

/**Npisati rekurzivnu funkciju koja stampa cifre pozitivnog broja u obrnutom poretku*/

void stampaj_obrnuto_rec(int n) {

    if(n == 0)
        return;

    printf("%d", n % 10);
    stampaj_obrnuto_rec(n / 10);

}

/**Napisati funckiju int br_pojavlj(int a, int c).
   Funkcija treba da vrati broj pojavljivanja cifre c u broju a.*/

int br_pojavlj(int a, int c) {
    int br = 0;

    while(a != 0) {
        if(a % 10 == c) //ako je posljednja cifra jednaka c
            br ++;      //dodamo 1 na brojac

        a /= 10; //uklonimo posljednju cifru sa broja a
    }

    return br;
}

/**Napisati rekurzivnu funckiju int br_pojavlj_rec(int a, int c).
   Funkcija treba da vrati broj pojavljivanja cifre c u broju a.*/

int br_pojavlj_rec(int a, int c) {
    if(a == 0)
        return 0;

    int br = br_pojavlj_rec(a / 10, c); //nadjemo broj pojavljivanja cifre c u broju bez poslj cifre
    if(a % 10 == c) //ako je poslj cifra br a jednaka c
        br ++;    // dodamo jos jedno pojavljivanje

    return br;
}

/**Napisati rekrzivnu funkciju int oddDigits(int n), koja
   iza svake neparne cifre broja n dodaje 0* 12356 -> 10230506 */

int oddDigits(int n) {
    if(n == 0)
        return 0;

    int tmp = oddDigits(n / 10); //na broj bez posljednje cifre dodamo 0 iza svake neparne cifre

    tmp = tmp * 10 + n % 10; //dodamo posljednju cifru na broj koji zelimo da vratimo

    if(n % 2 == 1) // ako je posljednja cifra neparna
        tmp *= 10; //dodamo jos jednu 0 na kraj

    return tmp;
}

int main()
{
    int x, c;
    scanf("%d", &x);

    printf("%d", oddDigits(x));
    return 0;
}
