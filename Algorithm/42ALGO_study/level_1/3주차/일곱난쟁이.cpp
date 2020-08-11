#include <iostream>
#include <algorithm>
int heights[9];
using namespace std;

int main(void)
{
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> heights[i];
        sum += heights[i];
    }
    for (int i =0; i < 9; i++) {
        for (int j = 1; j <9;j++) {
            if (sum - (heights[i] + heights[j]) == 100) {
                heights[i] = 0;
                heights[j] = 0;
                sort(heights,heights+9);
                for (int k = 0; k < 9; k++)
                    if (heights[k] != 0)
                        cout << heights[k] << '\n';
                return 0;
            }
        }
    }
    return 0;
}