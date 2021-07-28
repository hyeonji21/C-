#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
		cout << "������ ���� radius = " << radius << endl;
	}
	Circle(int r) {
		radius = r;
		cout << "������ ���� radius = " << radius << endl;
	}
	~Circle() {
		cout << "�Ҹ��� ���� radius = " << radius << endl;
	}
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }

};


int main(void) {

	cout << "�����ϰ��� �ϴ� ���� ����?";
	int n, radius;
	cin >> n;

	if (n <= 0) return 0;

	Circle* p = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "��" << i + 1 << ": ";
		cin >> radius;
		p[i].setRadius(radius);
	}

	int count = 0;

	for (int i = 0; i < n; i++) {
		cout << p->getArea() << " ";
		if (p->getArea() >= 100 && p->getArea() <= 200) {
			count++;
		}
		p++;
	}
	p -= n;

	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << endl;
	delete[] p;



	return 0;

}