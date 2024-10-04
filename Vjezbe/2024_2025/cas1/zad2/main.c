#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int O;

    printf("Unesite duzine stranica trougla: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    O = a + b + c;

    printf("Obim je: ");
    printf("%d", O);

    return 0;
}
