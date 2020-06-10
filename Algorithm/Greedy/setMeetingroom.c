#include <stdio.h>
#include <stdlib.h>

int     N, i, e, k = 0;

int     check(int ***tmp, int p)
{
    for (i = p; i < N - 1; i++)
        if (tmp[0][i][1] > tmp[0][i + 1][1])
            return (i);
    return (0);
}

void    mysort(int ***tmp)
{
    int    **c = 0;

    e = 0;
    while ((e = check(tmp,e)) != 0)
    {
        for (i = 0; i < N - 1; i++)
        {
            if ((tmp[0][i][1] > tmp[0][i + 1][1]) || (tmp[0][i][1] == tmp[0][i + 1][1] && tmp[0][i][0] > tmp[0][i + 1][0]))
            {
                *c = tmp[0][i];
                tmp[0][i] = tmp[0][i + 1];
                tmp[0][i + 1] = *c;
            }
        }
    }
}

int     main(void)
{
    int     **tmp, ret = 0;

    scanf("%d", &N);
    tmp = (int**)malloc(sizeof(int*) * N);
    for (i = 0; i < N; i++)
    {
        tmp[i] = (int*)malloc(sizeof(int) * 2);
        scanf("%d %d", &tmp[i][0], &tmp[i][1]);
    }
    mysort(&tmp);
    e = 0;
    for (i = 0; i < N; i++)
    {
        if (e <= tmp[i][0])
        {
            e = tmp[i][1];
            ret++;
        }
        free(tmp[i]);
        tmp[i] = 0;
    }
    free(tmp);
    tmp = 0;
    printf("%d\n", ret);
    return 0;
}