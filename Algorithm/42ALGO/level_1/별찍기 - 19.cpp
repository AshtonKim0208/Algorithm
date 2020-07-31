#include <iostream>
#define MAX 100*4 + 1
#define STAR '*'
char starmap[MAX][MAX];
using namespace std;
void myFunc(int x, int y, int depth)
{
    if (depth == 1)
        starmap[x][y] = STAR;
    else
    {
        for (int i = 0; i < 4 * (depth - 1) + 1; i++) {
            if (i == 0 || i == 4 * (depth - 1))
            {
                for (int j = 0; j < 4 * (depth - 1) + 1; j++)
                    starmap[y + i][x + j] = STAR;
                continue;
            }
            starmap[y + i][x] = STAR;
            starmap[y + i][x + 4 * (depth - 1)] = STAR; 
        }
        myFunc(y + 2, x + 2, depth - 1);
    }
}

int main(void)
{
    int N;
    cin >> N;
    myFunc(0,0,N);
    for (int i = 0; i < 4 * (N - 1) + 1; i++)
    {
        for (int j = 0; j < 4 * (N - 1) + 1; j++)
        {
            char tmp = starmap[i][j] == STAR ? STAR : ' ';
            cout << tmp;
        }   
        cout << '\n';
    }
    return 0;
}