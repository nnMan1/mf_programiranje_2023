#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, s, r;
    scanf("%d%d%d", &h, &s, &r);

    int H = h + 2*r;
    int S = s + 2*r;

    int O = 2 * (H + S);
    printf("%d", O);
    return 0;
}
