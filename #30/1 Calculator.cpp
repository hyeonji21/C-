#include <iostream>
using namespace std;

#include "3-11 Calculator.h"
#include "3-11 Adder.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}