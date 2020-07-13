#include <stdio.h>
int main() {
    int N, k = 0,x[50] = {0, },y[50] = {0, };
    scanf("%d", &N);
    for (size_t i = 0; i < N; i++)
        scanf("%d %d", &x[i], &y[i]);
    for (size_t i = 0; i < N; i++)
    {
        k = 1;
        for (size_t j = 0; j < N; j++)
            if (x[i] < x[j] && y[i] < y[j])
                k++;
        printf("%d ", k);
    }
}