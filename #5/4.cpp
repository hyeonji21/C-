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

	Circle arr[3];

	int radius = 0;
	int count = 0;

	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;
		arr[i].setRadius(radius);
		
		if (arr[i].getArea() > 100) {
			count += 1;
		}
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�";


	return 0;

}