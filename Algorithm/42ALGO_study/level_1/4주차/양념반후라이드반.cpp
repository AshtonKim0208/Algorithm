#include <iostream>
#include <algorithm>
using namespace std;

long long A,B,C,X,Y;
int main(){
    scanf(" %lld %lld %lld %lld %lld",&A,&B,&C,&X,&Y);
    long long first = min(X,Y);
    long long ans = min(A * (X-first) + B * (Y-first), C * 2 * max(X-first, Y-first));
    if(A+B > C*2) ans += first * 2 * C;
    else ans += A * first + B * first;
    printf("%lld\n",ans);
}