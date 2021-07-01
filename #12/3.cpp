# include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {

	int start;
	int end;
	int size;

public:
	MyQueue(int capacity) : BaseArray(capacity) {
		start = 0;
		size = 0;
		end = -1;
	}

	void enqueue(int n) {
		if (size == capacity()) {
			return;
		}
		put(start, n);
		start++;
		size++;
	}

	int capacity() {
		return getCapacity();
	}

	int length() {
		return size;
	}

	int dequeue() {
		if (size == 0) {
			return -1;
		}
		size--;
		end++;
		return get(end);
	}
};

int main() {

	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;

	return 0;
}