/*
https://www.acmicpc.net/problem/1759
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     L, C, k;
char    word[15];

int     compare(const void *a, const void *b) {
    
    int c1 = *(char *)a;
    int c2 = *(char *)b;

    if (c1 < c2)
        return (-1);
    if (c1 > c2)
        return (1);
    return (0);
}

void    backtracking(int level)
{
}

int     main() {

    char    c;

    k = 0;
    scanf("%d %d", &L, &C);
    for (int i = 0; i < 2*C; i++) {
        scanf("%c", &c);
        if (c != ' ')
            word[k++] = c;
    }
    qsort(word, k, 1, compare);
    backtracking(0);
    return (0);
}
