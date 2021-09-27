#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);              //輸入身高(cm)體重(Kg)
    printf("%.4f\n", (float)a / 2.54);  //印出身高(英吋)
    printf("%.4f\n", (float)b / 0.454); //印出體重(磅)

    return 0;
}