#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    for(int i=a;i<=b;i++) {
        int j = i % 10;
        int d = i / 10 % 10;
        int s = i / 100 % 10;
        int h = i / 1000;

        if(j == d && d == s && s != h ||
           j == s && s == h && h != d ||
           j == d && d == h && h != s ||
           d == s && s == h && h != j)
            printf("%d ", i);
    }
    return 0;
}
