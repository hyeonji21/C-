#include <iostream>
using namespace std;

class Shape {	// Abstract class
	Shape* next;
protected:
	virtual void draw() = 0;		// ���������Լ�
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

//void Shape::draw() {
//	cout << "--Shape--" << endl;
//}

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
	Shape* pStart;
	Shape* pLast;
public:
	GraphicEditor() {
		cout << "�׷��� �������Դϴ�." << endl;
		pStart = pLast = NULL;
		run();
	}
	~GraphicEditor();	// �Ҹ���, �����ؼ� �������� ���� ���� ����
	void run();
	void insert();
	void del();
	void draw();
};

//class UI {
//	static void insert();
//	static void del();
//	static void draw();
//};

void GraphicEditor::run()
{
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

void GraphicEditor::del()
{
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	int index;
	cin >> index;

	Shape* p = pStart;
	Shape* prevP = pStart;
	for (int i = 0; i < index; i++) {	// ���� �������� ã�ư�.
		if (p == NULL) {
			cout << "����Ʈ�� ���� �ε����� ���� ������ ����" << endl;
			return;
		}
		prevP = p;
		p = p->getNext();
	}
	// p�� ���� ������ ������ �����.
	Shape* pNext = prevP->add(p->getNext());
	//������ ���� ������ �ִ� ���� ������ ���� ���� ������ ���������.

	// pStart�� pLast ������ ����
	if (p == pStart) // ������ ������ ù ������ ���
		pStart = pNext;

	if (p == pLast) { // ������ ������ ������ ������ ���
		if (pStart == NULL) // ������ ������ ó������ �������� ���
			pLast = NULL;
		else
			pLast = prevP;
	}
	delete p;	// ������ ����.		
}

void GraphicEditor::draw()
{
	Shape* p = pStart;
	int i = 0;
	while (p != NULL) {
		cout << i << ": ";
		p->paint();
		p = p->getNext();
		i++;
	}
}

void GraphicEditor::insert()
{
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
			pLast = pLast->add(new Line()); // �� ��ü ����
			break;
		case 2:
			pLast = pLast->add(new Circle()); // �� ��ü ����
			break;
		case 3:
			pLast = pLast->add(new Rect()); // �簢�� ��ü ����
			break;
		}
	}
}

GraphicEditor::~GraphicEditor() { // �Ҹ���
	// ���� ������ ��� ��ü�� �����Ѵ�.
	Shape* p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext(); // ���� ��ü��ġ�� �����Ѵ�.
		delete p; // ���� ��ü�� �����Ѵ�.
		p = q; // ���� ��ü�� ����Ų��.
	}
}

int main()
{
	GraphicEditor g;	// �����ڿ��� run() �Լ� ����

	return 0;
}