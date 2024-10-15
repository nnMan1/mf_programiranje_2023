#include <stdio.h>
#include <stdlib.h>

/*štampa sve cijele brojeve iz intervala [ab], koji pri dijeljenju sa 7
 daju ostatak 4 ili 1.*/

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int i = a;

    while(i <= b) {
        if(i % 7 == 1 || i % 7 == 4)
            printf("%d ", i);

        i = i + 1;
    }

    return 0;
}
