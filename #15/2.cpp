#include <iostream>
using namespace std;
#include <string.h>

int main()

{

    char str[] = "This is a simple string";

    char* pos;



    // StrStr() ��ſ� C ǥ�� �Լ� strstr() ����ص� ���� ��� ����

    pos = strstr(str, "simple");  // simple�� �����ϴ� ��ġ�� ã��



    if (pos) {

        strncpy(pos, "sample", 6);  // sample�� ������

        puts(str);

    }
    else

        puts("None!");



    return 0;

}