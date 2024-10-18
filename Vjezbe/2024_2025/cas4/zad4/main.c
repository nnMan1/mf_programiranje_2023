#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int O = a + b + c;

    if(O % 3 == 0)
        printf("da %d", O / 3);
    else
        printf("ne");

    return 0;
}
