#include <stdio.h>
char str[1000000], c;
int a, al[26], high = 0, tie = 0;
int main(void) {
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            al[str[i] - 97]++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            al[str[i] - 65]++;
    }
    for (int i = 0; i < 26; i++) {
        if (al[i] > high) {
            high = al[i];
            tie = 0;
            c = i + 65;
        }
        else if (al[i] == high)
            tie = 1;
    }
    tie == 0 ? printf("%c\n", c) : printf("%c\n", '?');
}