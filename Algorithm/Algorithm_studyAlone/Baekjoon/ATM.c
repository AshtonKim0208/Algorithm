// https://www.acmicpc.net/problem/11399
#include <stdio.h>
#include <stdlib.h>
int a, b, i, *s;
int rec(int level, int ret)
{
    if (level == a - 1) return ret + s[level];
    else
    {
        ret += s[level];
        return (ret + rec(level+1, ret));
    }
}
int compare(const void *a, const void *b){return (*(int*)a - *(int*)b);}
int main(void)
{
    scanf("%d", &a);
    s = (int *)malloc(sizeof(int)*a);
    for (i = 0; i < a; i++)
        scanf("%d", &s[i]);
    qsort(s, a, sizeof(int), compare);
    printf("%d\n", rec(0, 0));
    free(s);
    s = 0;
    return 0; 
}