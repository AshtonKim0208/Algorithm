#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("%.9lf", (double)a / b);
    else
        printf("%s", "input error");
    return 0;
}