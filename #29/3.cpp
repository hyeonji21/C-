#include <iostream>
using namespace std;

class BaseArray {
	int* mem;  // ���� �迭�� ����� ���� �޸��� ������
	int capacity;  // �迭�� ũ��
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() {
		delete[] mem;
	}
	void put(int index, int val) {
		mem[index] = val;
	}
	int get(int index) {
		return mem[index];
	}
	int getCapacity() {
		return capacity;
	}
};

class Stack  : public BaseArray{
	int size;  // ������ �ִ� ũ��
	int tos; // ������ ž�� ����Ű�� �ε���
public:
	Stack();
	Stack(int size);
	//Stack(const Stack& s);  // ���������
	~Stack();
	bool push(int n); // ���� n�� ���ÿ� Ǫ��(����)�Ѵ�.
				 // ������ full�� �� false��, �ƴϸ� true ��ȯ
	bool pop(int& n);  // ������ ž�� �ִ� ���� n�� ���Ѵ�. (������).
				// ���� ������ ��� ������ false��, �ƴϸ� true ��ȯ
	int capacity();
	int length();

	/*
	bool operator!();
	bool operator>>(int& n); // (���� �ʿ�!)
	Stack& operator<<(int n); // (�Է����θ� ���Ǳ⶧���� ������ �� ���ʿ�� ����.)
	*/
	friend bool operator!(Stack s);
	friend bool operator>>(Stack& s, int& n);
	friend Stack& operator<<(Stack& s, int n);


};


Stack::Stack() : BaseArray()
{
	size = getCapacity();
	tos = -1;
}

Stack::Stack(int size) : BaseArray(size)
{
	this->size = size;
	tos = -1;
}

/*
Stack::Stack(const Stack& s)
{
	size = s.size;
	p = new int[size];
	tos = s.tos;

	for (int i = 0; i <= tos; i++) {
		p[i] = s.p[i];
	}
}
*/

Stack::~Stack()
{

}

bool Stack::push(int n)
{
	if (tos < size - 1) {
		put(++tos, n);
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
	n = get(tos--);
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

int Stack::capacity()
{
	return size;
}

int Stack::length()
{
	return tos + 1;
}


int main() {

	Stack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "���ÿ뷮:" << mStack.capacity() << ", ����ũ�� : " << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ� >> ";
	while (mStack.length() != 0) {
		mStack.pop(n);
		cout << n << ' ';
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;

	return 0;
}