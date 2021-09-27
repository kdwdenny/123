#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    scanf("%f", &a);           //輸入公克數
    printf("%.1f\n", a / 600); //印出臺斤數

    return 0;
}