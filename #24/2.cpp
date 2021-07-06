#include <iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void show() {
		cout << "�������� " << getRadius() << "�� ��" <<  endl;
	}
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() : Circle(0) {
		name = "";
	}
	NamedCircle(int radius, const char name[]) : Circle(radius) {
		this->name = name;
	}
	void show() {
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

int main() {

	NamedCircle pizza[5];

	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">> ";
		int radius;
		string name;
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
		pizza[i].show();
	}

	Circle donut;
	donut.show();

	int max = 0;
	for (int i = 1; i < 5; i++) {
		if (pizza[max].getArea() < pizza[i].getArea()) {
			max = i;
		 }
	}

	cout << "���� ������ ū ���ڴ� " << pizza[max].getName() << "�Դϴ�" << endl;

	return 0;
}