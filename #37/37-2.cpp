#include <iostream>
using namespace std;

class Rectangle {

	int width, height;
public:
	Rectangle();
	Rectangle(int n);
	Rectangle(int w, int h);
	~Rectangle();
	bool isSquare();
};

Rectangle::~Rectangle() {
	cout << "�ʺ�: " << width << ", ����: " << height << "�� �簢�� �Ҹ�\n";

}

Rectangle::Rectangle() {
	width = 1;
	height = 1;
	cout << "�ʺ�: " << width << ", ����: " << height << "�� �簢�� ����\n";

}
Rectangle::Rectangle(int n) {
	width = height = n;
	cout << "�ʺ�: " << width << ", ����: " << height << "�� �簢�� ����\n";
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
	cout << "�ʺ�: " << width << ", ����: " << height << "�� �簢�� ����\n";
}
bool Rectangle::isSquare() {

	return (width == height);

}
Rectangle grect1(10); 
Rectangle grect2(20);

int main(void) {

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;




	return 0;

}