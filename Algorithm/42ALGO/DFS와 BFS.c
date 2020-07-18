#include <stdio.h>

int N,M,V, vec[10000][2], DFS_answer[1001], BFS_answer[1001];

void    DFS(int level)
{
    if (level == M)
    {
        printf("%d\n", DFS_answer);
    }
    else
    {
        DFS(level + 1);
    }
}
void    BFS(int level)
{
    if (level == M)
    {
        printf("%d\n", BFS_answer);
    }
    else
    {
    }
}
int     main() {
    
    scanf("%d %d %d", &N, &M, &V);
    for (int i = 0; i < M; i++)
        scanf("%d %d", &vec[i][0], &vec[i][1]);
    DFS(V);
    BFS(V);
}