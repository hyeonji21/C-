#include <iostream>
using namespace std;

double area(int r); // �Լ��� ���� ����

int main() {
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	cout << "n + 5 = " << n + 5 << '\n';
	cout << "������ " << area(n);  // �Լ� area()�� ���� �� ���


	return 0;

}


double area(int r) 
{ // �Լ� ����
	return 3.14 * r * r;  // ������ r�� ������ ����
}