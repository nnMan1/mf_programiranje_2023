#include <stdio.h>
#include <stdlib.h>

void inc(int x) {
    x++;
}

void inc_arr(int arr[], int n){
    for(int i=0;i<n;i++)
        arr[i] ++;
}

void ucitaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void stampaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

int minimum(int arr[], int n) {
    ///nalazi minimalni element niza
    int m = arr[0]; ///najmanji element je prvi element
    for(int i=1;i<n;i++)
        if(m > arr[i])
            m = arr[i];

    return m;
}

void update_array(int a, int arr[], int n) {
    ///svaki element niza arr mijenja po sljedeæim pravilima:
        ///ako je element veæi od 0, umanjuje ga za a,
        /// u suprotnom ga uveæava za a.

    for(int i=0;i<n;i++)
        if(arr[i] > 0)
            arr[i] -= a;
        else
            arr[i] += a;

}

int main()
{
    /*
    int a = 5;
    inc(a);

    printf("%d", a);
    */
    int n;
    scanf("%d", &n);

    int arr[n];
    ucitaj_niz(arr, n);
    update_array(3, arr, n);
    stampaj_niz(arr, n); printf("\n");
    //printf("Minimum niza je %d", minimum(arr, n));


    /*
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);
    */

    return 0;
}
