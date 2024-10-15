#include <stdio.h>
#include <stdlib.h>

///izraèunava zbir svih cijelih brojeva iz intervala [a, b].

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    int i = a;
    int s = 0;

    while(i <= b) {
        s = s + i;
        i = i + 1;
    }

    printf("%d", s);

    return 0;
}
