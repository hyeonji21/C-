#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {

	char count[100];
	
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	cin.getline(count, 100, '\n');

	char* tok;

	int sum = 0;

	tok = strtok(count, "+");
	while (tok != NULL) {
		cout << tok << endl;
		sum += atoi(tok);
		tok = strtok(NULL, "+");
	}

	cout << "���ڵ��� ���� " << sum;

	
	return 0;

}