#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main() {

	int size;
	cout << "���� ���� >> ";
	cin >> size;

	Circle* p = new Circle[size];

	int radius = 0;
	int count = 0;
	double area = 0;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		p[i].setRadius(radius);
		area = p[i].getArea();
		
		if (area > 100) {
			count += 1;
		}
		
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;

	delete[] p;


	return 0;

}