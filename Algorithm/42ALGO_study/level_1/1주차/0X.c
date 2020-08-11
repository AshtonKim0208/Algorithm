#include <stdio.h>
#include <string.h>
int p, n, ret, len;
char str[80];
int main(void) {

    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%s", str);
        n = 0;
        len = strlen(str);
        for (int j = 0; j < len; j++) {
            if (str[j] == 'O') n++;
            else n = 0;
            ret += n;
        }
        printf("%d\n", ret);
        ret = 0;
    }
}
