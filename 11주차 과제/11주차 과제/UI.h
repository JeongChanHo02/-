#ifndef UI_H
#define UI_H

#include <iostream>
using namespace std;


class UI {
public:
    static int main_memu() {
        int n;
        while (true) {
            cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
            cin >> n;
            if (cin.fail() || n < 1 || n > 4) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
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
            cout << "��:1, ��:2, �簢��:3 >> ";
            cin >> n;
            if (cin.fail() || n < 1 || n > 3) {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
            }
            else {
                break;
            }
        }
        return n;
    }

    static int two_menu() {
        int n;
        cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
        cin >> n;
        return n;
    }
};

#endif 
