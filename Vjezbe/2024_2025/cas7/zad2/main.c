#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    scanf("%d%d", &x, &y);

    if(x * x + y * y < 4 && y * y - 2 * x < 0)
        printf("Pripada");
    else
        printf("Ne pripada");

    return 0;
}
