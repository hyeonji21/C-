#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;

	getline(cin, s, '&');
	cin.ignore();  // '&' �� enter ����

	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace: ";
	getline(cin, r, '\n');

	int startIndex = 0;

	while (true) {
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1)
			break;
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + f.length();
	}

	cout << s << endl;


	return 0;

}