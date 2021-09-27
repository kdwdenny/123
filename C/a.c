#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);              //輸入兩個數字
    if (abs(a) <= 106 && abs(b) <= 106) //判斷任意數是否都絕對值小於106
    {
        printf("%d", a + b); //印出兩數相加
    }

    return 0;
}