#include <iostream>
#include <string>
using namespace std;

int main(void) {

	string secure;
	string secure2;


	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> secure;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> secure2;
	
	if (secure == secure2) {
		cout << "�����ϴ�";
	}
	else {
		cout << "���� �ʽ��ϴ�";
	}


	return 0;

}