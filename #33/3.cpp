#include <iostream>
#include <cstring>      // <string.h>
using namespace std;

int main(void) {

	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���. " << endl;

	while (true) {
		cout << "��ȣ>> ";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�." << endl;
	}
	return 0;
	
}