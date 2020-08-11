#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
    while (1)
    {
        double t1, t2;
        scanf("%lf %lf", &t1, &t2);
        if (t1 == 0 && t2 == 0)
            break ;
        double v = sqrt((1 - t2/t1*t2/t1) * 1);
        printf("%.3f\n", v);
    }
}