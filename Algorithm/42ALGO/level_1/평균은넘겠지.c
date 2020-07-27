#include <stdio.h>
int str[1000], n, k, p;
double av, ov;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        av = 0;
        ov = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &str[j]);
            av += str[j];
        }
        av /= k;
        for (int j = 0; j < k; j++) {
            if (str[j] > av) ov++;
        }
        printf("%.3f%%\n", ov / k * 100);
    }
}