// https://www.acmicpc.net/problem/11047
#include <stdio.h>
#include <stdlib.h>
int N,K,*s;
int rec(int obj, int i, int coin_num)
{
    if (obj == K)
        return coin_num;
    if (obj + s[i] <= K)
        return rec(obj + s[i], i, coin_num + 1);
    else
        return rec(obj, i - 1, coin_num);
}
int main(void)
{
    int i;
    scanf("%d%d", &N, &K);
    s = (int *)malloc(sizeof(int)*N);
    for (i = 0; i < N; i++)
        scanf("%d", &s[i]);
    printf("%d\n", rec(0, N - 1, 0));
    return 0;
}