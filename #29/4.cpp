#include <iostream>
using namespace std;

/*���� AbstractStack�� ���� ���� Ŭ�����μ� �߻�Ŭ�����̴�.
�̸� ��ӹ޾� ������ Ǫ��, ���� �� �ִ� Stack Ŭ������ ����� ��� ��ʸ� ������.*/

class AbstractStack {
public:
	virtual bool push(int n) = 0;	// ���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
	virtual bool pop(int& n) = 0;	// ���ÿ��� ���� ������ n�� �����ϰ�, 
					// ������ empty�̸� false ����
	virtual int length() = 0;	// ���� ���ÿ� ����� ������ ���� ����, size()  �Լ� �̸� ����
};

class Stack : public AbstractStack {
	int* p;
	int tos;
	int capacity;

public:

	Stack(int size);
	~Stack();
	bool push(int n);
	bool pop(int& n);
	int length();
	int size() {
		return tos;
	}
};

Stack::Stack(int size) {
	this->capacity = size;
	p = new int[size];
	tos = -1;
}

Stack::~Stack() {
	delete[] p;
}

bool Stack::push(int n) {
	if (tos < capacity - 1) {
		p[++tos] = n;
		return true;
	}
	else {
		return false;
	}
}
bool Stack::pop(int& n) {
	if (tos < 0) {
		return false;
	}
	else {
		n = p[tos--];
		return true;
	}
}
int Stack::length() {
	return size();
}

int main() {
	Stack a(5);
	for (int i = 0; i < 10; i++) { // ó�� 5 ���� ���������� push�ǰ� ���� 5 ���� ���� full�� push ����
		if (a.push(i)) cout << "push ����" << endl;
		else cout << "���� full" << endl;
	}

	int n;
	for (int i = 0; i < 10; i++) { // ó�� 5 ���� ���������� pop�ǰ� ���� 5 ���� ���� empty�� pop ����
		if (a.pop(n)) cout << "pop ���� " << n << endl;
		else cout << "���� empty" << endl;
	}
}