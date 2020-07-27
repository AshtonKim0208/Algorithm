#include <stdio.h>
#include <string.h>
int a,b,c;
char s[20];
int main() {
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d %s", &b, s);
        c = strlen(s);
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < b; k++) {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
}