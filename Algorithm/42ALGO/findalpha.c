#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[105];
    char Alp[27];
    int idx;

    idx = 0;
    while (idx < 26)
    {
        Alp[idx] = 'a' + idx;
        idx++;
    }
    Alp[idx] = '\0';
    scanf("%s", S);
    idx = 0;
    int j;
    while (idx < 26)
    {
        j = 0;
        while (Alp[idx] != S[j] && S[j] != '\0')
            j++;
        if (Alp[idx] == S[j])
            printf("%d ", j);
        else
            printf("%d ", -1);
        idx++;
    }
    return 0;
}