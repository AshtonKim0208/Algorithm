#include <stdio.h>
int N, answer, a[3], b[3];
struct Game {
    int num, strike, ball;
}vec[101];

int main(void)
{
    scanf("%d", &N); // 질문갯수
    for (int i = 0; i < N; i++)
        scanf("%d %d %d", &vec[i].num, &vec[i].strike, &vec[i].ball);
    for (int i = 123; i <= 987; i++) { // 중복되지 않은 숫자중 최솟값, 최대값
		int cnt = 0; // 정답으로 생각할 수 있는 가짓수
		a[0] = i / 100; // 100의자리
        a[1] = i / 10 % 10; // 10의자리
        a[2] = i % 10; // 1의자리
		if (!a[1] || !a[2] || a[0] == a[1] || a[1] == a[2] || a[2] == a[0]) // 중복숫자거나 0이 포함되어있다면 continue ;
            continue;
		for (int j = 0; j < N; j++) {
			int strike = 0, ball = 0, t = vec[j].num;
			b[0] = t / 100; // 100의자리
            b[1] = t / 10 % 10; // 10의자리
            b[2] = t % 10; // 1의자리
			for (int k = 0; k < 3; k++) {
				if (a[k] == b[k]) // 현재 i인덱스의 값과 같고 자리도 같다면 strike
                    strike++;
				if (a[k] == b[(k+1)%3] || a[k] == b[(k+2)%3]) // 현재 i인덱스의 값과 같고 자리는 다르다면 ball
                    ball++;
			}
			if (strike == vec[j].strike && ball == vec[j].ball) // scanf로 읽은 스트라이크, 볼 갯수와 같다면 cnt++
                cnt++;
		}
		if (cnt == N) answer++;
	}
    printf("%d", answer);
    return 0;
}