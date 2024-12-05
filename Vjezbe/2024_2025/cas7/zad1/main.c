#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ugao;
    scanf("%d", &ugao);

    ugao %= 360;

    int hh = ugao / 30;
    int mm = (ugao % 30) * 2;

    printf("%02d:%02d", hh, mm);

    return 0;
}
