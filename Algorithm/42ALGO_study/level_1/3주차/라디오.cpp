#include <iostream>

using namespace std;
int main(void)
{
    int A,B,N,tmp,dist;
    cin >> A >> B >> N;
    dist = abs(A-B);
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        dist = dist > abs(B-tmp)+1 ? abs(B-tmp)+1 : dist;
    }
    cout << dist;
    return 0;
}