#include <iostream>
#include <cstring>
using namespace std;

int main(void) {

	char song[100] = "Falling in love with you";
	char elvis[100] = "Elvis Presley";
	char singer[100];

	cout << song << "�� �θ� ������ ";
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?";

	cin.getline(singer, 100, '\n');

	if ( !strcmp(singer, elvis) )
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " << elvis << "�Դϴ�." << endl;


	return 0;

}