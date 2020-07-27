#include <stdio.h>

int main(void)
{
    char str[101];
    int idx;
    int cnt_a = 0;
    int cnt_A = 0;
    int cnt_num = 0;
    int cnt_sp = 0;

    while (gets(str))
    {
        idx = 0;
        while (str[idx])
        {
            if (str[idx] >= 'a' && str[idx] <= 'z')
                cnt_a++;
            if (str[idx] >= 'A' && str[idx] <= 'Z')
                cnt_A++;
            if (str[idx] >= '0' && str[idx] <= '9')
                cnt_num++;
            if (str[idx] == ' ' || (str[idx] >= 9 && str[idx] <= 13))
                cnt_sp++;
            idx++;
        }
        printf("%d %d %d %d\n", cnt_a, cnt_A, cnt_num, cnt_sp);
        cnt_a = 0;
        cnt_A = 0;
        cnt_num = 0;
        cnt_sp = 0;
    }
}