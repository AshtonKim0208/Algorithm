/*
https://www.acmicpc.net/problem/6603
*/
#include <stdio.h>

int arr[14];
int arr2[14];
int k;

void    DFS(int start, int depth)
{
    int     i;

    if (depth == 6)
    {
        for (i = 0; i < 6; i++) {
            printf("%d ", arr2[i]);
        }
        printf("\n");
    }
    else
    {
        for (i = start; i < k; i++) {
            arr2[depth] = arr[i];
            DFS(i + 1, depth + 1);
        }
    }
}

int     main(void)
{
    int     i;

    while (1)
    {
        scanf("%d", &k);
        if (k == 0)
            break ;
        for (i = 0; i < k; i++)
            scanf("%d", &arr[i]);
        DFS(0, 0);
        printf("\n");
    }
    return (0);
}