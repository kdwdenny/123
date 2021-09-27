#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, a, b, c, d;
    scanf("%d", &x);
    a = (x / 1000 + 7) % 10;
    b = (x % 1000 / 100 + 7) % 10;
    c = (x % 100 / 10 + 7) % 10;
    d = (x % 10 + 7) % 10;
    printf("%d%d%d%d", c, d, a, b);

    return 0;
}