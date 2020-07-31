#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(void)
{
    double A,B,C,I,J,K;
    cin>>A>>B>>C>>I>>J>>K;
    double n = min(min(A/I, B/J), C/K);
    A= (A- n*I), B = B- n*J, C= C- n*K;
    cout << setprecision(7) << A << " " << B << " " << C;
    return 0;
}