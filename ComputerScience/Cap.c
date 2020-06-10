#include <stdio.h>

int main(void){
    char c[101];
    int index;
    scanf("%s", c);
    index = 0;
    while (c[index] != '\0'){
        if(c[index] >= 'a' && c[index] <= 'z')
            c[index] -= 32;
        else if(c[index] >= 'A' && c[index] <= 'Z')
            c[index] += 32;
        index++;
    }
    printf("%s", c);
}