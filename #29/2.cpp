#include <iostream>
using namespace std;

// ���� Ŭ���� Stack�� ����� Ǫ��(push)������ << �����ڸ�,
// ��(pop)�� ���� >> �����ڸ�, 
// ��� �ִ� ���������� �˱� ���� ! �����ڸ� �ۼ��϶�.
// ���� �ڵ带 main()���� �ۼ��϶�.

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
	/*
	bool operator!();
	bool operator>>(int& n); // (���� �ʿ�!)
	Stack& operator<<(int n); // (�Է����θ� ���Ǳ⶧���� ������ �� ���ʿ�� ����.)
	*/
	friend bool operator!(Stack s);
	friend bool operator>>(Stack& s, int& n);
	friend Stack& operator<<(Stack& s, int n);
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

/*
bool Stack::operator!()
{
	return tos == -1 ? true : false;
}

bool Stack::operator>>(int& n)
{
	return pop(n);
}

Stack& Stack::operator<<(int n)
{
	push(n);

	return *this;
}
*/

bool operator!(Stack s)
{
	return s.tos == -1 ? true : false;
}

bool operator>>(Stack& s, int& n)
{
	return s.pop(n);
}

Stack& operator<<(Stack& s, int n)
{
	s.push(n);
	return s;
}

// (������ ���� -> ��ü�̸� friend�Լ�, ����Լ� ��� ����)
// (������ ���� -> ��ü �ƴϸ� friend �Լ��� ����)

int main() {
	
	Stack stack;
	stack << 3 << 5 << 10;  // 3, 5, 10�� ������� Ǫ��
	while (true) {
		if (!stack) break;  // ���� empty
		int x;
		stack >> x;  // ���ÿ� �ִ� ���� ��
		cout << x << ' ';
	}
	cout << endl;

	return 0;
}