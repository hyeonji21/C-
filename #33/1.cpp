#include <iostream>

using namespace std;

int main(void) {

	cout << "�ʺ� �Է��ϼ���>> ";

	int width;
	cin >> width;   // scanf("%d", &width);

	cout << "���̸� �Է��ϼ���>> ";

	int height;
	cin >> height;

	int area = width * height;
	cout << "������ " << area << "\n";

	return 0;
}