#include <iostream>
using namespace std;

class Circle {
	static int numCircle;
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numCircle--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircle() { return numCircle; }
};

Circle::Circle(int r)
{
	radius = r;
	numCircle++;
}

int Circle::numCircle = 0;

int main() {

	Circle* p = new Circle[10];
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircle() << endl;
	cout << "�����ϰ� �ִ� ���� ���� = " << p->getNumOfCircle() << endl;
	cout << "�����ϰ� �ִ� ���� ���� = " << p[0].getNumOfCircle() << endl;



	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircle() << endl;

	Circle a;
	cout << "�����ϰ� �ִ� ���� ���� = " << a.getNumOfCircle() << endl;

	Circle b;
	cout << "�����ϰ� �ִ� ���� ���� = " << a.getNumOfCircle() << endl;
	cout << "�����ϰ� �ִ� ���� ���� = " << b.getNumOfCircle() << endl;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircle() << endl;

}