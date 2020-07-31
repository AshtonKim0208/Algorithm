#include <iostream>
#include <cstdio>
#include <queue>

std::queue<int> q;
int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 1; i<=N; i++)
        q.push(i);
    printf("<");
    while (q.size() > 1)
    {
        for(int i=0;i<K-1;i++){
            q.push(q.front());
            q.pop();
        }
        printf("%d, ",q.front());
        q.pop();
    }
    printf("%d>\n", q.front());
    return 0;
}