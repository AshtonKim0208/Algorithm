#include <iostream>

using namespace std;

void swap(int *num1, int *num2)
{
    *num1 ^= *num2;
    *num2 ^= *num1;
    *num1 ^= *num2;
}

void swap(char *ch1, char *ch2)
{
    *ch1 ^= *ch2;
    *ch2 ^= *ch1;
    *ch1 ^= *ch2;
}

void swap(double *d1, double *d2)
{
    double tmp;

    tmp = *d1;
    *d1 = *d2;
    *d2 = tmp;
}

int main(void)
{
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    cout<<num1<<' '<<num2<<endl;

    char ch1='A',ch2='Z';
    swap(&ch1, &ch2);
    cout<<ch1<<' '<<ch2<<endl;

    double dbl1=1.111, dbl2 = 5.555;
    swap(&dbl1,&dbl2);
    cout<<dbl1<<' '<<dbl2<<endl;
    return 0;
}