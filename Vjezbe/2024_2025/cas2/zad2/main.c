#include <stdio.h>
#include <stdlib.h>
#include <math.h>

///ra�una rastojanje me�u ta�kama A(x1 y1) i B(x2 y2)

int main()
{
    float x1, y1, x2, y2;

    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    float dx;
    dx = x2 - x1;

    float dy = y2 -y1;

    float d = sqrt(dx * dx + dy * dy);

    printf("%f", d);

    return 0;
}
