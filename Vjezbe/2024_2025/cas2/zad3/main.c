#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
* u�itava du�ine stranica trougla i �tampa njegovu povr�inu
**/


int main()
{
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    float s = (a + b + c) / 2;

    float p = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Povrsina trougla je %f", p);

    return 0;
}
