#include <cstdio>
int main(void)
{
    int N, K, used[5001]={0, }, answer[5001];

    scanf("%d %d", &N, &K);
    int i = 0, n = 0;;
    for (int i = 0; i < N; )
    {
        int idx = 0, plus = 0;
        while (idx < 3) {
            if (used[(plus+K+n)%N] == 0)
                idx++;
            else
                plus++;
        }
        n += plus;
        n %= N;
        if (used[(n+K)%N] == 0) {
            used[(n+K)%N] = 1;
            answer[i++] = (n+K)%N;
        }
    }
    printf("<");
    for (int i=0; i<N-1;i++)
        printf("%d, ");
    printf("%d>");
    return 0;
}