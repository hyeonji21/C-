#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	
	char name[100];
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���" << endl;
	cout << ">>";

	int i = 1;
	int count = 0;
	int compare = 0;
	char name1[1000];
	int len = 0;

	while (i < 6) {

		cin.getline(name, 100, ';');

		cout << i << " : " << name << endl;
		
		len = strlen(name);
		if (compare < len) {
			compare = len;
			strcpy_s(name1, len+1, name);
		}

		i++;
	}

	cout << "���� �� �̸��� " << name1 << endl;

	return 0;

}