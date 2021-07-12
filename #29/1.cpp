#include <iostream>
using namespace std;

// ������ ���� ������ �����ϴ� ���� Ŭ���� Stack�� �����϶�.
// ���ÿ� ������ �� �ִ� ������ �ִ� ����� �����ڿ��� �־�����
// size ����� �����ȴ�.
// Stack Ŭ������ �ۼ��϶�.

class Stack {
	int* p;  // ���� �޸𸮷� ����� ������
	int size;  // ������ �ִ� ũ��
	int tos; // ������ ž�� ����Ű�� �ε���
public:
	Stack();
	Stack(int size);
	Stack(const Stack& s);  // ���������
	~Stack();
	bool push(int n); // ���� n�� ���ÿ� Ǫ��(����)�Ѵ�.
				 // ������ full�� �� false��, �ƴϸ� true ��ȯ
	bool pop(int& n);  // ������ ž�� �ִ� ���� n�� ���Ѵ�. (������).
				// ���� ������ ��� ������ false��, �ƴϸ� true ��ȯ
};

Stack::Stack()
{
	size = 10;
	p = new int[size];
	tos = -1;
}
Stack::Stack(const Stack& s)
{
	size = s.size;
	p = new int[size];
	tos = s.tos;

	for (int i = 0; i <= tos; i++) {
		p[i] = s.p[i];
	}
}

Stack::~Stack()
{
	delete[] p;
}


Stack::Stack(int size)
{
	this->size = size;
	p = new int[size];
	tos = -1;

}

bool Stack::push(int n)
{
	if (tos < size - 1) {
		p[++tos] = n;
		return true;
	}
	else {
		return false;
	}
}

bool Stack::pop(int& n)
{
	if (tos < 0) {
		return false;
	}
	n = p[tos--];
	return true;
}


int main() {

	// frist in, last out.

	Stack a(10);
	a.push(10);
	a.push(20);
	Stack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;

	if (!a.pop(n))
		cout << "���� a�� ����� ���� �����ϴ�." << endl;
	else
		cout << "���� a���� ���� �� " << n << endl;

	if (!b.pop(n))
		cout << "���� b�� ����� ���� �����ϴ�." << endl;
	else
		cout << "���� b���� ���� �� " << n << endl;

	for (int i = 0; i < 11; i++) {
		if (!a.push(i))
			cout << "���� a�� full�Դϴ�." << endl;
		else
			cout << "���� a�� " << i << " push�߽��ϴ�." << endl;
	}

	for (int i = 0; i < 11; i++) {
		if (!a.pop(n))
			cout << "���� a�� empty�Դϴ�." << endl;
		else
			cout << "���� a���� " << n << " pop�߽��ϴ�." << endl;
	}

	return 0;
}