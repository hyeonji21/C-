#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

int main(void) {

	cout << "�̸��� �Է��Ͻÿ� >> ";

	char name[20];
	//cin >> name;  // scanf("%s", name);
	//fgets(name, 20, stdin);  
	gets_s(name);

	cout << "�̸��� " << name << "�Դϴ�\n";

	return 0;
}