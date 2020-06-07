#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    char a[100005] ,b[100005];
    int a_len, b_len;
    int carry;
    char result[100005];
    int idx;

    scanf("%s %s", a, b);
    a_len = strlen(a) - 1;
    b_len = strlen(b) - 1;
    carry = 0;
    idx = 0;
    while (a_len >= 0 && b_len >= 0)
    {
        if (a[a_len] + b[b_len] - 96 + carry < 10)
        {
            result[idx] = a[a_len] + b[b_len] - 48 + carry;
            carry = 0;
        }
        else
        {
            result[idx] = (a[a_len] + b[b_len] - 96 + carry) % 10 + 48;
            carry = 1;
        }
        a_len--;
        b_len--;
        idx++;
    }
    while (a_len >= 0)
    {
        if (a[a_len] - 48 + carry < 10)
        {
            result[idx] = a[a_len] + carry;
            carry = 0;
        }
        else
        {
            result[idx] = (a[a_len] - 48 + carry) % 10 + 48;
            carry = 1;
        }
        a_len--;
        idx++;
    }
    while (b_len >= 0)
    {
        if (b[b_len] - 48 + carry < 10)
        {
            result[idx] = b[b_len] + carry;
            carry = 0;
        }
        else
        {
            result[idx] = (b[b_len] - 48 + carry) % 10 + 48;
            carry = 1;
        }
        b_len--;
        idx++;
    }
    if (carry == 1)
    {
        result[idx] = 49;
        idx++;
    }
    result[idx] = '\0';
    idx--;
    while (idx >= 0)
    {
        write(1, &result[idx], 1);
        idx--;
    }
    return (0);
}