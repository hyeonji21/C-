#include <iostream>
using namespace std;

int main(void) {

	cout << "5 ���� �Ǽ��� �Է��϶�>>";

	double compare;


	double num[5] = {};

	for (int j = 0; j < 5; j++) {

		cin >> num[j];

		compare = num[0];

	}


	for (int j = 0; j < 5; j++) {

		if (num[j] > compare) {
			compare = num[j];
		}

	}


	cout << "���� ū �� = " << compare << endl;

	return 0;

}