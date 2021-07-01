# include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = " ") : Circle(radius) {
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

	NamedCircle operator++(int x) {

		NamedCircle rettemp;
		int temp;

		rettemp = *this;

		temp = this->getRadius();
		this->setRadius(temp + 1);

		return rettemp;
	}

	NamedCircle& operator++() {

		int temp;
		temp = this->getRadius();
		this->setRadius(temp + 1);

		return*this;
	}

	friend NamedCircle operator<<(NamedCircle &op1, string op2);
};

NamedCircle operator<<(NamedCircle &op1, string op2) {
	NamedCircle tmp = op1;
	op1.setName(op2);
	return tmp;
}

int main() {

	NamedCircle donut(5, "donut");
	donut << "Big donut";    // donut�� �̸��� Big donut���� ������.
	donut.show();   // ȭ�� ���: ���������� 5�� Big donut��

	return 0;

}