#include <cstdio>
int main(void)
{
    int N, K, flag[5001] = {0, }, answer[5001] = {0, };
    scanf("%d %d", &N, &K);
    int p = 0, idx = 0;
    while (1)
    {
        if (idx == N)
            break ;
        if (flag[(p+K) % N] == 0)
        {
            answer[idx++] = (p+K) % N == 0 ? p+K : (p+K)%N;
            flag[(p+K) % N] = 1;
            p += K;
            if (p >= N) p %= N;
        }
        else
        {
            p++;
        }
    }
    printf("<");
    for (int i =0; i < N-1; i++)
        printf("%d, ", answer[i]);
    printf("%d>\n", answer[N-1]);
    return 0;
}