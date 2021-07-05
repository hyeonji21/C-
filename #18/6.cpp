#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend RectManager; // class ��ü ���ֱ�

};

// class Rect ������ RectManager ������ ��. (width, height����ϱ� ����)

bool RectManager::equals(Rect r, Rect s)
{
	if (r.width == s.width && r.height == s.height) {
		return true;
	}
	else
		return false;

}

void RectManager::copy(Rect& dest, Rect& src)
{
	dest.width = src.width;
	dest.height = src.height;

}

int main(void)
{
	Rect a(3, 4), b(4, 5);
	RectManager man;

	man.copy(b, a);

	if (man.equals(a, b)) 
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;

}