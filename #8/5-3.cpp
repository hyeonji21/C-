#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	Book(Book& b);
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }

};

Book::Book(const char* title, int price) {

	int length = strlen(title);
	this->title = new char[length + 1];
	strcpy(this->title, title);
	this->price = price;

}

Book::~Book() {

	if (title) {
		delete[] title;
	}

}

void Book::set(const char* title, int price) {

	if (this->title) {
		delete[] this->title;
	}

	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;

}

Book::Book(Book& b) {

	this->price = b.price;
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy(this->title, b.title);
	
}

// �����Ϸ��� �����ϴ� ����Ʈ ���� ������ �ڵ�

/*
Book::Book(Book& b) {
	this->title = title;
	this->price = price;
}
*/

int main() {

	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();

	return 0;

}