/*
https://www.acmicpc.net/problem/1759
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     L, C, k, x;
char    word[15] = {0, };
int     flag[15] = {0, };

# define vowel "aeiou"
# define alpha "abcdefghijklmnopqrstuvwxyz"

int     compare(const void *a, const void *b)
{
    int c1 = *(char *)a;
    int c2 = *(char *)b;

    if (c1 < c2)
        return (-1);
    if (c1 > c2)
        return (1);
    return (0);
}

void    backtracking(int level, int vo, int co, char *ret)
{
    int n;

    if (level == L)
    {
        if (vo < 1 || co < 2) return ;
        for (n = 0; n < L; n++)
            printf("%c", ret[n]);
        printf("\n");
        return ;
    }
    if (level >= C) return ;
    else
    {
        for (n = level; n < C; n++)
        {
            if (flag[n] == 1) continue ;
            for (x = 0; x <= n; x++)
                flag[x] = 1;
            ret[level] = word[n];
            if (strchr(vowel, ret[level]))
                backtracking(level + 1, vo + 1, co, ret);
            else
                backtracking(level + 1, vo, co + 1, ret);
            for (x = 0; x <= n; x++)
                flag[x] = 0;
        }
    }
}

int     main()
{
    char    c;
    char    *ret;
    
    k = 0;
    scanf("%d %d", &L, &C);
    for (int i = 0; i < 2 * C; i++)
    {
        scanf("%c", &c);
        if (strchr(alpha, c))
            word[k++] = c;
    }
    qsort(word, k, 1,compare);
    ret = (char*)malloc(k + 1);
    ret[k] = '\0';
    backtracking(0, 0, 0, ret);
    free(ret);
    ret = 0;
    return (0);
}

/*
#include<stdio.h>
int L,f[26]={0,};
void pw(int i,int d,int b,int c,char s[16]){
	if(c>1&&b&&d==L){s[d]=0;printf("%s\n",s);}
	for(i=i+1;i<26;i++){
		if(f[i]){
			s[d]='a'+i;
			if(i==0||i==4||i==8||i==14||i==20)pw(i,d+1,b+1,c,s);
			else pw(i,d+1,b,c+1,s);
		}
	}
}

int main(){
	int C,i;
	char t[16];
	scanf("%d%d",&L,&C);
	for(i=0;i<C;i++){scanf(" %c",&t[0]);f[t[0]-'a']=1;}
	pw(-1,0,0,0,t);
}
*/

/*
4 6
a t c i s w

7 15
a b c d e f g h i j k l m n o
*/