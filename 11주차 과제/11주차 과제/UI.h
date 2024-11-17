#ifndef UI_H
#define UI_H

#include <iostream>
using namespace std;


class UI {
public:
    static int main_memu() {
        int n;
        while (true) {
            cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
            cin >> n;
            if (cin.fail() || n < 1 || n > 4) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
            }
            else {
                break;
            }
        }
        return n;
    }

    static int one_menu() {
        int n;
        while (true) {
            cout << "선:1, 원:2, 사각형:3 >> ";
            cin >> n;
            if (cin.fail() || n < 1 || n > 3) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "잘못된 입력입니다. 다시 시도하세요." << endl;
            }
            else {
                break;
            }
        }
        return n;
    }

    static int two_menu() {
        int n;
        cout << "삭제하고자 하는 도형의 인덱스 >> ";
        cin >> n;
        return n;
    }
};

#endif 
