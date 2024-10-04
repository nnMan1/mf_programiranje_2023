#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int j;
    int d;
    int s;
    int z;

    scanf("%d", &x);

    j = x % 10; //ovo je komentar x mod 10
    d = (x / 10) % 10; //(x div 10) mod 10 => cjelobrojno dijeljenje
    s = x / 100; //x div 100

    z = j + d + s;

    printf("%d", z);

    return 0;
}
