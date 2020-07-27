#include <stdio.h>

int k, l[10000];
void    printfSelfNumber(int n)
{
    int i = n;
    k = n;
    while (k) {
        i += (k % 10);
        k /= 10;
    }
    if (i <= 10000) {
        l[i] = 1;
        printfSelfNumber(n + 1);
    }
}
int main() {
    printfSelfNumber(1);
    for (int i = 1; i < 9994; i++) {
        if (l[i] != 1) printf("%d\n", i);
    }
}