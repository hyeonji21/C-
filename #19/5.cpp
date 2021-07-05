#include <iostream>
using namespace std;

class Power {
	int kick, punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show() { cout << "kick=" << kick << "," << "punch=" << punch << endl; }
	Power operator+(const Power& a);
	Power operator+(int n);
	Power& operator+=(Power& a);
	Power& operator++();
	bool operator==(Power& a);
	bool operator! (); 

};

Power& Power::operator++()
{
	kick++;
	punch++;
	
	return*this;
}

Power Power::operator+(int n)
{
	Power tmp;
	tmp.kick = this->kick + n;
	tmp.punch = this->punch + n;

	return tmp;
}

Power Power::operator+(const Power& a)
{
	Power tmp;
	tmp.kick = this->kick + a.kick;
	tmp.punch = this->punch + a.punch;

	return tmp;
}

Power& Power::operator+=(Power& a)
{
	kick += a.kick;
	punch += a.punch;

	return *this;
}

bool Power::operator==(Power& a)
{
	if (kick == a.kick && punch == a.punch) {
		return true;
	}
	else {
		return false;
	}
}
bool Power::operator! () {

	if (!kick && !punch) {  // kick == 0 && punch == 0
		return true;
	}
	else {
		return false;
	}
}

int main(void) {

	Power a(3, 5), b(4, 6), c;

	c = a + b;  // c = a.operator+(b) 
	a.show();
	b.show();
	c.show();

	c = a;
	a.show();
	c.show();

	if (a == c) {
		cout << "�� �Ŀ��� ����." << endl;
	}
	else {
		cout << "�� �Ŀ��� ���� �ʴ�." << endl;
	}

	c = a += b;

	a.show();
	b.show();
	c.show();

	b = a + 2;
	a.show();
	b.show();

	b = ++a;
	cout << "b = ++a; ���� ��" << endl;

	a.show();
	b.show();

	Power d; // (������ ����Ʈ �Ű������� (0,0) �־���)
	
	if (!d)
		cout << "d�� �Ŀ��� 0�̴�" << endl;
	else
		cout << "d�� �Ŀ��� 0�� �ƴϴ�" << endl;

}