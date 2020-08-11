#include <cstdio>
int store[15][15] = {0, };
int main(void)
{
    for (int i = 1; i < 15; i++) // i호에는 i명이 살고있다.
        store[0][i] = i;
    for (int i = 1; i < 15; i++) // i층 j호엔 i-1층의 1호부터 j호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다.
        for (int j = 1; j < 15; j++)
                store[i][j] = store[i - 1][j] + store[i][j - 1];
    int T, k, n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", store[k][n]);
    }
    return 0;
}