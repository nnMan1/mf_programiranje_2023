#include <stdio.h>
#include <stdlib.h>

/*Postoji li trougao sa zadatim duzinama stranica*/

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
/*
    if(a + b > c && a + c > b && b + c > a)
        printf("Trougao postoji");
    else
        printf("Trougao ne postoji");
*/

    if(a + b <= c || a + c <= b || b + c <= a)
        printf("Trougao ne postoji");
    else
        printf("Trougao postoji");

    return 0;
}
