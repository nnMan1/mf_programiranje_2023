#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++)
            printf("  ");
        for(int j=n;j>n-i;j--)
            printf("%d ", j);

        printf("\n");
    }

    for(int i=n-1;i>=1;i--) {
        for(int j=1;j<=n-i;j++)
            printf("  ");
        for(int j=i;j>=1;j--)
            printf("%d ", j);

        printf("\n");
    }
    return 0;
}
