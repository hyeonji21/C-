#include <iostream>
using namespace std;

int big(int a, int b) {

	if (a > b) {
		if (a > 100) {
			return 100;
		}
		else {
			return a;
		}
	}
	else {
		if (b > 100) {
			return 100;
		}
		else {
			return b;
		}
	}

}

int big(int a, int b, int num) {

	if (a > b) {
		if (a > num) {
			return num;
		}
		else {
			return a;
		}
	}
	else {
		if (b > num) {
			return num;
		}
		else {
			return b;
		}
	}

}

int main() {

	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;

}