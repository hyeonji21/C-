#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main(void) {


	char name[5][20];

	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		cin.getline(name[i], 20, '\n');
	}

	char latter[20];
	strcpy_s(latter, name[0]);
	for (int i = 1; i < 5; i++) {
		if (strcmp(latter, name[i]) < 0)
			strcpy_s(latter, name[i]);
	}

	cout << "�������� ���� �ڿ� ������ ���ڿ� " << latter << endl;

	return 0;

}