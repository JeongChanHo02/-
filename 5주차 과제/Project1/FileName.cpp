#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <string>
class Player {
    string name;
public:
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};
class GamblingGame {
    Player* p;
public:
    GamblingGame();
    ~GamblingGame() { delete p; }
    void start();
    void game();
    bool drawCard();
};
GamblingGame::GamblingGame() {
    srand((unsigned)time == 0);
    p = new Player[2];
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
}
void GamblingGame::start() {
    cout << "첫번째 선수 이름>>";
    string name;
    cin >> name;
    p[0].setName(name);
    cout << endl;
    cout << "두번째 선수 이름>>";
    cin >> name;
    p[1].setName(name);
    cout << endl;
}
bool GamblingGame::drawCard() {
    int card[3];
    for (int i = 0; i < 3; ++i) {
        int n = rand() % 3;
        card[i] = n;
        cout << card[i] << "\t";
    }
    if (card[0] == card[1] && card[0] == card[2])
        return true;
    else
        return false;
}
void GamblingGame::game() {
    string n;
    int i = 0;
    for (;;) {
        cout << p[i % 2].getName() << endl;
        getline(cin, n);
        if (this->drawCard()) {
            cout << p[i % 2].getName() << "님의 승리" << endl;
            break;
        }
        else
            cout << "아쉽군요!" << endl;
        ++i;
    }
}
int main() {
    GamblingGame g;
    g.start();
    g.game();
}