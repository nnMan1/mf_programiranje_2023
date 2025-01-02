#include <stdio.h>
#include <stdlib.h>3

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void print_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

void add(int a) {
    a++;
}

void add_arr(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i]++;
}

void updateArray(int a, int b[], int n) {
    ///koji svaki element niza b
    ///mijenja po sljedeæim pravilima:
    /// ako je element veæi od 0, umanjuje ga za a,
    /// a u suprotnom ga uveæava za a.

    for(int i=0;i<n;i++)
        if(b[i] > 0)
            b[i] -= a;
        else
            b[i] += a;
}

int minArray(int a, int b[], int n) {
    ///vraæa minimalni element niza b
    ///koji je veæi od a. Ako takav element ne postoji
    ///vratiti a - 1/

    int m=a-1; //ako je m = a-1 jos nismo naisli na element veci od a
    for(int i=0;i<n;i++)
        if(b[i] > a && (m > b[i] || m==a-1)) //ako je trenutni element > a
            m = b[i];                        //i manji od m || jos ranije nije bilo elem vecih od a

    return m;
}

int minArrayIndex(int a, int b[], int n) {
    ///vraæa indeks minimalnog elementa niza b
    ///koji je veæi od a. Ako takav element ne postoji
    ///vratiti  -1/

    int m=a-1; //ako je m = a-1 jos nismo naisli na element veci od a
    int index=-1;
    for(int i=0;i<n;i++)
        if(b[i] > a && (m > b[i] || m==a-1)) { //ako je trenutni element > a
            m = b[i];                          //i manji od m || jos ranije nije bilo elem vecih od a
            index = i;
        }

    return index;
}

int zeroElem(int b[], int n) {
    ///koji vraæa broj parova uzastopnih elemenata
    ///niza b koji završavaju sa bar jednom nulom
    ///b = 100 120 15 150 160 170 94 356
    ///3

    int br = 0;

    for(int i=0;i<n-1;i++)
        if(b[i] % 10 == 0 && b[i+1] % 10 == 0)
            br ++;

    return br;
}

int changeSign(int b[], int n) {
    ///koji za dati niz nenultih cijelih brojeva b
    ///vraæa koliko se puta mijenja znak u nizu b
    ///posmatrajuæi elemente od poèetka.
    ///Na primjer, u nizu 10, -4, 12, 56, -8, -9,
    ///znak se mijenjao 3 puta.

    for(int i=0;i<n-1;i++)
//        if(b[i] < 0 && b[i+1] > 0 || b[i] > 0 && b[i+1] < 0)
        if(b[i] * b[i+1] < 0)
            br ++;
}

int oddSegments(int b[], int n) {
///     koji za dati niz cijelih brojeva b vraæa
///     dužinu najveæeg segmenta niza koji se sastoji
///     samo od neparnih brojeva. Segment niza
///     saèinjavaju uzastopni elementi niza.
}

int main()
{
    int n, a;
    scanf("%d", &n);
    int arr[n];

    read_array(arr, n);

    printf("%d", zeroElem(arr, n));

    /*
    updateArray(a, arr, n);
    print_array(arr, n);

    /*
    int x = 5;
    add(x);

    printf("%d", x);
    */

    /*

    ///ucitati duzinu niza n
    ///alocirati memoriju za niz duzine n
    ///ucitati elemente niza

    int n;
    scanf("%d", &n);

    int arr[n];
    read_array(arr, n);

    add(arr[0]);
    //add_arr(arr, n);

    print_array(arr, n);

    ///stampati elemente niza
    */
    return 0;
}
