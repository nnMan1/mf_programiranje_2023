#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("* |");

    for(int i=1; i<=10;i++)
        printf("%3d ", i);

    printf("\n");

    printf("--");
    for(int i=1;i<=10;i++)
        printf("----");

    printf("\n");

    for(int i=1;i<=10;i++) {
        printf("%-2d|", i);
        for(int j=1;j<=i;j++)
            printf("%3d ", i * j);

        printf("\n");
    }
    return 0;
}
