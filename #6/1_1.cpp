#include <iostream>
#include <string>
using namespace std;

int main() {

	string note;

	cout << "���ڿ� �Է�>> ";
	getline(cin, note, '\n');

	int length = note.length();

	int count = 0;

	for (int i = 0; i < length; i++) {
		if (note.at(i) == 'a') {
			count += 1;
		}
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";


	return 0;

}