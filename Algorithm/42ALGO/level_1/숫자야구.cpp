#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef struct Game {
    int num, strike, ball;
}game;

int N, answer = 0;
game questions;
vector<game> vec;

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++) { // input을 vector에 넣어준다
        cin >> questions.num >> questions.strike >> questions.ball;
        vec.push_back(questions);
    }
    for (int i = 123; i <= 987; i++) { // 완전탐색시작
        int cnt = 0;
        string cur = to_string(i); // 현재 인덱스의 숫자를 문자열로 바꿔준다
        if (!cur[1] || !cur[2] || cur[0] == cur[1] || cur[1] == cur[2] || cur[2] == cur[0]) // 중복숫자가 있거나, 0이 있으면(1~9까지가 들어와야하기때문) continue해준다
            continue ;
        for (int j = 0; j < N; j++) {
            string comp = to_string(vec[j].num);
            int str = 0, ball = 0;
            for (int a = 0; a < 3; a++) {
                if (cur[a] == comp[a])
                    str++;
                if (cur[a] == comp[(a + 1) % 3] || cur[a] == comp[(a + 2) % 3])
                    ball++;
            }
            if (str == vec[j].strike && ball == vec[j].ball) // 질문에 대한 strike, ball에 대한 답변과 현재 인덱스의 숫자에 대한 strike, ball에 대한 판단이 같다면 cnt++
                cnt++;
        }
        if (cnt == N)
            answer++; // 현재 인덱스의 숫자가 받은 질문의 strike, ball 숫자에 모두 부합할때 answer++
    }
    cout << answer;
    return 0;
}