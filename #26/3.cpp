 #include <iostream>
using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw() = 0; // ���������Լ�
public:
	Shape() { next = NULL; }
	virtual ~Shape() { }
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return next; }

};

void Shape::paint() {
	draw();
}
// �������̽� �Լ�
//(�ܺη� ����� �� ���� �Լ��� ����� �� �ֵ��� �������)

Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}

class Circle : public Shape {
protected:
	virtual void draw();
};

void Circle::draw() {
	cout << "Circle" << endl;
}

class Rect : public Shape {
protected:
	virtual void draw() {
		cout << "Rectangle" << endl;
	}
};

class Line : public Shape {
protected:
	virtual void draw() {
		cout << "Line" << endl;
	}
};

int main() {

	Shape* pStart = NULL;
	Shape* pLast;

	pStart = new Circle();
	pLast = pStart;

	pLast = pLast->add(new Rect());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Rect());

	Shape* p = pStart;
	while (p != NULL) {
		p->paint();
		p = p->getNext();
	}

	p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext();
		delete p;
		p = q;
	}

	return 0;

}