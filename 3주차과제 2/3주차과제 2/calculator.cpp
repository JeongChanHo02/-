#include <iostream>
#include "calculator.h"


using namespace std;

void Add::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

int Add::calculate() {
	return x + y;
}

void Sub::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

int Sub::calculate() {
	return x - y;
}

void Mul::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

int Mul::calculate() {
	return x * y;
}

void Div::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}

int Div::calculate() {
	return x / y;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		int x, y;
		char op;
		cin >> x >> y >> op;

		switch (op) {
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}