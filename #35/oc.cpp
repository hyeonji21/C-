#include <iostream>
#include <cstring>
using namespace std;

int main(void) {

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n";
	cout << "�ι̿�>>";
	char romio[10];
	cin >> romio;
	cout << "�ٸ���>>";
	char juliet[10];
	cin >> juliet;

	if (!strcmp(romio, "����")) {
		if (!strcmp(juliet, "����"))
			cout << "�����ϴ�.\n";
		else if (!strcmp(juliet, "����"))
			cout << "�ٸ����� �̰���ϴ�.\n";
		else
			cout << "�ι̿��� �̰���ϴ�.\n";
	}

	else if (!strcmp(romio , "����")) {
		if (!strcmp(juliet , "����"))
			cout << "�����ϴ�.\n";
		else if (!strcmp(juliet , "����"))
			cout << "�ι̿��� �̰���ϴ�.\n";
		else
			cout << "�ٸ����� �̰���ϴ�.\n";
	}

	else {
		if (!strcmp(juliet , "��"))
			cout << "�����ϴ�.\n";
		else if (!strcmp(juliet , "����"))
			cout << "�ٸ����� �̰���ϴ�.\n";
		else
			cout << "�ι̿��� �̰���ϴ�.\n";
	}

	return 0;

}