#include <stdio.h>
#include <stdlib.h>

/**
*uèitava trocifren broj i od njega formira broj sa ciframa u obrnutom
*redosledu
**/

int main()
{
    int x, j, d, s, y;

    scanf("%d", &x);

    j = x % 10;
    d = x / 10 % 10;
    s = x / 100;

    y = 100*j + 10*d + s;

    printf("%d", y);

    return 0;
}
