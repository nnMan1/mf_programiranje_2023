#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    int i = a;

    while(i <= b) {
        if(i % 2 == 1) {
            printf("%d ", i);
        }

        i = i + 1;
    }

    return 0;
}
