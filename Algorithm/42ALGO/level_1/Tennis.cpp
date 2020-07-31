#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char s[251];
    int score[2],win_num[2], len;
    while (1)
    {
        cin >> s;
        if (s[0] == '#') break ;
        score[0]=0, score[1]=0, win_num[0]=0, win_num[1]=0, len=strlen(s);
        for (int i = 0; i < len; i++)
        {
            score[s[i]-'A']++;
            if (score[0] >= 4 && score[0] - score[1] >= 2)
                score[0]=0, score[1]=0, win_num[0]++;
            else if (score[1] >= 4 && score[1] - score[0] >= 2)
                score[0]=0, score[1]=0, win_num[1]++;
        }
        cout << "A " << win_num[0] << " B " << win_num[1] << '\n';
    }
    return 0;
}