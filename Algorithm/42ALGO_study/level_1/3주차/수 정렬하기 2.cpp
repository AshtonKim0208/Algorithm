#include <iostream>
#include <algorithm>

using namespace std;
int main(void)
{
    int N, i;
    int numbers[1000001];
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> numbers[i];
    sort(numbers,numbers+i);
    for (int j = 0; j < i; j++)
        cout << numbers[j] << '\n';
    return 0;
}