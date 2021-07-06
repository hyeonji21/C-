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
	Power& operator<< (int n);
};

Power& Power::operator<<(int n)
{
	kick += n;
	punch += n;

	return*this;
}


int main(void)
{
	Power a(1, 2);

	a << 3 << 5 << 6;
	a.show();


}



