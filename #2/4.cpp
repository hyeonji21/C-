#include <iostream>
#include <cstring>
using namespace std;

int main(void) {

	while (true) {
		char writing[50];

		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(writing, 50, '\n');


		if (strcmp(writing, "yes") == 0) {
			cout << "�����մϴ�...";
			break;
		}

	}

	return 0;

}