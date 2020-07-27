#include <stdio.h>
int A,B,V;
int main() {
    scanf("%d %d %d", &A, &B, &V);
    // 인트형이라서 나누어 떨어지는지 확인해줘야하는데, 그냥 먼저 1을 빼주고 뒤에 1을 무조건 더해주는 것으로 처리한다.
    printf("%d", (V - B - 1) / (A - B) + 1);
}