#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void get(string name, string tel);
};

void Person::get(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
   
	Person person[3];

	string name;

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;

	for (int i = 0; i < 3; i++) {

		string name;
		string tel;

		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;

		person[i].get(name, tel);

	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << person[i].getName() << " ";
	}

	cout << endl;

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;

	for (int i = 0; i < 3; i++) {
		if ((person[i].getName()) == name) {
			cout << "��ȭ ��ȣ�� " << person[i].getTel();
		} 
	}

	return 0;

}