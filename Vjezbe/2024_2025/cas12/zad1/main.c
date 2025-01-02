#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(i % 2 == 1)
            for(int j=(i-1)*n+1;j<(i+1)*n;j+=2)
                printf("%d ", j);
        else
            for(int j=i*n;j>(i-2)*n;j-=2)
                printf("%d ", j);

        printf("\n");
    }

    return 0;
}
