#include <iostream>
#include <string>
using namespace std;

int main(void) {

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n";
	cout << "�ι̿�>>";
	string romio;
	cin >> romio;
	cout << "�ٸ���>>";
	string juliet;
	cin >> juliet;

	if (romio == "����") {
		if (juliet == "����")
			cout << "�����ϴ�.\n";
		else if (juliet == "����")
			cout << "�ٸ����� �̰���ϴ�.\n";
		else
			cout << "�ι̿��� �̰���ϴ�.\n";
	}

	else if (romio == "����") {
		if (juliet == "����")
			cout << "�����ϴ�.\n";
		else if (juliet == "����")
			cout << "�ι̿��� �̰���ϴ�.\n";
		else
			cout << "�ٸ����� �̰���ϴ�.\n";
	}

	else {
		if (juliet == "��")
			cout << "�����ϴ�.\n";
		else if (juliet == "����")
			cout << "�ٸ����� �̰���ϴ�.\n";
		else
			cout << "�ι̿��� �̰���ϴ�.\n";
	}

	return 0;

}