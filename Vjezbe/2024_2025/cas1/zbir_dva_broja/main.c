#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;

    printf("Unesite dva broja: ");
    scanf("%d", &x);
    scanf("%d", &y);

    z = x + y;

    printf("Zbir brojeva je: ");
    printf("%d", z);

    return 0;
}
