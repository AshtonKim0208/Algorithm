#include <iostream>
using namespace std;
int main(void)
{
    while (1)
    {
        cout << "-----Menu------" << endl;
        cout << "1. 계좌개설" << endl;
        cout << "2. 입 금"<< endl;
        cout << "3. 출 금"<< endl;
        cout << "4. 계좌정보 전체 출력"<< endl;
        cout << "5. 프로그램 종료"<< endl;
        cout << "선택 : ";

        int mode;
        cin >> mode;

        if (mode == 1) // 계좌개설
        {
            int ID, money;
            char name[20];
            cout << "[계좌개설]"<< endl;
            cout << "계좌ID: ";
            cin >> ID;

            cout << "이름: ";
            cin >> name;

            cout << "입금액: ";
            cin >> money;
            cout << endl << "계좌개설이 완료되었습니다!\n";
            continue ;
        }
        if (mode == 2) // 입급
        {
            int ID, money;
            cout << "[입    금]"<< endl;
            cout << "계좌ID: ";
            cin >> ID;

            cout << "입금액: ";
            cin >> money;
            cout << endl << "입금이 완료되었습니다!\n";
        }
        if (mode == 3) // 출금
        {
            int ID, money;
            cout << "[출    금]"<< endl;
            cout << "계좌ID: ";
            cin >> ID;

            cout << "출금액: ";
            cin >> money;
            cout << endl << "출금이 완료되었습니다!\n";
        }
        if (mode == 4) // 정보 출력
        {}
        if (mode == 5) // 프로그램 종료
        {
            cout << "이용해주셔서 감사합니다.\n";
            break ;
        }
    }
    return 0;
}