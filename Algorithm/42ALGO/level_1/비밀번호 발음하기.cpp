#include <cstdio>
#include <cstring>
#define vowel "aeiou"
char pw[20];
int main(void)
{
    while (1)
    {
        scanf("%s", pw);
        if (strcmp(pw,"end") == 0) break ;
        int coNum = 0, voNum =0, voExist = 0, Validate = 0;
        for (int i = 0; i < strlen(pw); i++) {
            if (i>=1 && pw[i]==pw[i-1] && pw[i]!='e' && pw[i]!='o')
                Validate=1;
            if (strchr(vowel, pw[i])) {
                voNum++;
                if (voNum >= 3) Validate=1;
                coNum = 0;
                voExist = 1;
            }
            else {
                coNum++;
                if (coNum >= 3) Validate=1;
                voNum = 0;
            }
        }
        if (Validate == 0 && voExist == 1)
            printf("<%s> is acceptable.\n", pw);
        else
            printf("<%s> is not acceptable.\n", pw);
    }
}