#include <iostream>
#define on 26
using namespace std;
int myAs[25], As[25];
bool    check()
{
    int bingo = 0;
    if (myAs[0] == on && myAs[6] == on && myAs[12] == on && myAs[18] == on && myAs[24] == on)
        bingo++;
    if (myAs[4] == on && myAs[8] == on && myAs[12] == on && myAs[16] == on && myAs[20] == on)
        bingo++;
    for (int i = 0; i <= 20; i += 5)
        if (myAs[i] == on && myAs[i+1] == on && myAs[i+2] == on && myAs[i+3] == on && myAs[i+4] == on)
            bingo++;
    for (int i = 0; i < 5; i++)
        if (myAs[i] == on && myAs[i+5] == on && myAs[i+10] == on && myAs[i+15] == on && myAs[i+20] == on)
            bingo++;
    return bingo >= 3 ? true : false;
}

int main(void)
{
    for (int i = 0; i <= 20; i+=5)
        cin >> myAs[i] >> myAs[i+1] >> myAs[i+2] >> myAs[i+3] >> myAs[i+4];
    for (int i = 0; i <= 20; i+=5)
        cin >> As[i] >> As[i+1] >> As[i+2] >> As[i+3] >> As[i+4];
    int idx = -1;
    while (++idx < 25)
    {
        int k = 0;
        while (k < 25 && (As[idx] != myAs[k]))
            k++;
        if (As[idx] == myAs[k])
            myAs[k] = on;
        if (check() == true)
            break ;
    }
    cout << idx+1;
    return 0;
}