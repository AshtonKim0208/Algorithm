#include <cstdio>
int N, num[10001], tmp;
int main(void)
{
    scanf("%d", &N);
    for (int i= 0; i <= 10000; i++)
        num[i]=0;
    for (int i = 0; i < N; i++){
        scanf("%d", &tmp);
        num[tmp]++;
    }
    for (int i = 0; i <=10000; i++)
        for (int j = 0; j < num[i]; j++)
            printf("%d\n",i);
    return 0;
}