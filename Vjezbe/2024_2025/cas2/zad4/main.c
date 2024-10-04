#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;

    scanf("%d%d", &b, &a);

    if(a < b)
        printf("%d", a);
    else
        printf("%d", b);

    return 0;
}
