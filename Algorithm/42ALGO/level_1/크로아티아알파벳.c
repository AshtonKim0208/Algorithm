#include <stdio.h>
#include <string.h>
int main() {
    char str[10000];
    int len,z = 0;
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; ) {
        if (strncmp(str+i,"c=",2) == 0 && (i += 2)) z++;
        else if (strncmp(str+i,"c-",2) == 0 && (i += 2)) z++;
        else if (strncmp(str+i,"dz=",3) == 0 && (i += 3)) z++;
        else if (strncmp(str+i,"d-",2) == 0 && (i += 2)) z++;
        else if (strncmp(str+i,"lj",2) == 0 && (i += 2)) z++;
        else if (strncmp(str+i,"nj",2) == 0 && (i += 2)) z++;
        else if (strncmp(str+i,"s=",2) == 0 && (i += 2)) z++;
        else if (strncmp(str+i,"z=", 2) == 0 && (i += 2)) z++;
        else {z++; i++;}
    }
    printf("%d", z);
}