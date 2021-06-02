#include <iostream>
using namespace std;

class Tower {
	int height;

public:
	Tower();
	Tower(int r);

	int getHeight() {
		return height;
	}

};

Tower::Tower() {
	height = 1;
}

Tower::Tower(int r) {
	height = r;
}


int main(void) {

	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;

	return 0;

}