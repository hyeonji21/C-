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

class GraphicEditor {
	Shape* pStart = NULL;
	Shape* pLast;

public:
	GraphicEditor() { 
		cout << "�׷��� �������Դϴ�." << endl;
		pStart = NULL;
	}
	void run();
	void insert();
	void del();
	void draw();
};

void GraphicEditor::run() {

	while (true) {
		cout << "����: 1, ����:2, ��κ���: 3, ����: 4 >> ";
		int choice;
		cin >> choice;
		if (choice == 4) break;
		switch (choice) {
		case 1:
			insert();
			break;
		case 2:
			del();
			break;
		case 3:
			draw();
			break;
		}
	}
}
void GraphicEditor::del() {

	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	int index;
	cin >> index;

	Shape* p = pStart;
	Shape** pp = &pStart;

	for (int i = 0; p != NULL; i++) {
		if (i == index) {
			Shape* q = p->getNext();
			delete p;
			*pp = q;
			break;
		}
		else {
			p = p->getNext();
			pp = &p;
		}
	}
}


void GraphicEditor::draw() {

	Shape* p = pStart;
	int i = 0;
	while (p != NULL) {
		cout << i << ": ";
		p->paint();
		p = p->getNext();
		i++;
	}
}

void GraphicEditor::insert() {
	
	cout << "��: 1, ��: 2, �簢��: 3 >> ";
	int choice;
	cin >> choice;
	if (pStart == NULL) {
		switch (choice) {
		case 1:
			pStart = new Line();
			break;
		case 2:
			pStart = new Circle();
			break;
		case 3:
			pStart = new Rect();
			break;
		}
		pLast = pStart;
	}
	else {
		switch (choice) {
		case 1:
			pLast = pLast->add(new Line());
			break;
		case 2:
			pLast = pLast->add(new Circle());
			break;
		case 3:
			pLast = pLast->add(new Rect());
			break;
		}
	}

}


int main() {

	GraphicEditor g;

	g.run();

	
	return 0;

}