#include <iostream>
using namespace std;

int main(void) {

	char name[50];
	char address[100];
	int age;

	cout << "�̸���?";
	cin.getline(name, 50, '\n');

	cout << "�ּҴ�?";
	cin.getline(address, 100, '\n');


	cout << "���̴�?";
	cin >> age;


	cout << name << ", ";
	cout << address << ", ";
	cout << age << "��" << endl;


	return 0;

}