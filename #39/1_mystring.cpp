#include <iostream>
using namespace std;
#include <cstring>

class mystring {
	char* p;
public:
	mystring();
	mystring(const char* s);
	~mystring();
	int length();
	int find(char c, int pos);
	bool compare(char* s);
	bool compare(mystring s);

};

int mystring::find(char c, int pos)
{
	for (int i = pos; p[i]; i++) {
		if (p[i] == c)
			return i;
	}

	return -1;
}


bool mystring::compare(char* s) {

	return strcmp(p, s);
}

bool mystring::compare(mystring s) {

	return strcmp(p, s.p);
}

int mystring::length() {

	return strlen(p);

}


mystring::~mystring() {
	
	cout << "mystring ��ü �Ҹ� : " << p << endl;
	delete[] p;
}

mystring::mystring() {
	p = new char;
	*p = 0;
	cout << "mystring ��ü ���� : " << p << endl;
}

mystring::mystring(const char* s) {
	int len = strlen(s);
	p = new char[len + 1];

	strcpy(p, s);
	cout << "mystring ��ü ���� : " << p << endl;
}

int main(void) {
	
	mystring name("Korea Univ");
	char str[] = "This is a test string.";
	mystring test(str);

	cout << "name�� ����� ���ڿ��� ���̴� " << name.length() << endl;
	cout << "str�� ����� ���ڿ��� ���̴� " << test.length() << endl;
	cout << name.compare("Korea Univ") << endl;
	// cout << test << endl;

	cout << "Korea Univ�� a ���� ��ġ�� " << name.find('a', 0) << endl;


	return 0;

}