#include <iostream>
#include <string>
using namespace std;

int main() {

	string note;

	cout << "���ڿ� �Է�>> ";
	getline(cin, note, '\n');

	int count = 0;

	int index = -1;
	while (true) {
		
		index = note.find('a', index + 1);
		
		if (index == -1) {
			break;
		}
		count += 1;
	}


	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";

	return 0;

}