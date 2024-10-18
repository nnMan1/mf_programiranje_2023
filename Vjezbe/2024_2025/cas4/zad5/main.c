#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x0, x1, x, y;
    scanf("%f", &x0);
    scanf("%f", &x1);
    scanf("%f", &x);
    scanf("%f", &y);

    if(x < x0) {
        float d = sqrt((x - x0) * (x - x0) + y * y);
        printf("%f", d);
    } else {
        if(x > x1){
            float d = sqrt((x - x1) * (x - x1) + y * y);
            printf("%f", d);
        } else {
            printf("%f", y > 0 ? y : -y);
        }
    }

    return 0;
}
