#include <iostream>
using namespace std;
int main(void)
{
    int A,B,C;
    cin>>A>>B>>C;
    int i = B >= C ? -1 : A/(C-B) + 1;
    cout << i;
    return 0;
}