#include <iostream>
using namespace std;

int main(void) {

	cout << "�ּҸ� �Է��ϼ���>> ";

	char addr[100];
	//cin.getline(addr, 100, '\n');
	// cin.getline(addr, 100);
	cin.getline(addr, 100, ':');


	cout << "�ּҴ� " << addr << "�Դϴ�\n";


	return 0;
}