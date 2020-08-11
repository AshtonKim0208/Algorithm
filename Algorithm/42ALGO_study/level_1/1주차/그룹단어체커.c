#include <stdio.h>
int a, b, c, ret = 0, al[26] = {0, };
char s[100];
int main() {

    scanf("%d", &a); // 몇 문장 받는지 확인
    for (int i = 0; i < a; i++) {
        scanf("%s", s); // 문자열 받기
        c = 0; // 그룹문자 플래그 초기화
        for (int j = 0; s[j]; j++) { // 문자열 한바퀴 반복문
            if (al[s[j] - 97] == i + 50) { // 알파벳 인덱스가 i + 50인지 확인
                c = 1; // 이미 알파벳 인덱스 체크 되어있으면 그룹단어 아니므로 체크
                break ; // 탈출
            }
            else {
                al[s[j] - 97] = i + 50; // 's[j] - 97번쨰 '알파벳 인덱스를 i + 50으로 초기화해줌
                while (s[j] && (s[j] == s[j + 1])) // 이외에는 같은 문자일 때까지 문자열 진행
                    j++;
            }
        }
        if (c == 0) ret++;
    }
    printf("%d\n", ret);
}