#include <iostream>
#include <cstring>
using namespace std;


int main()

{
    char str[] = "This is a simple string";

    /*
    cout << "���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
    char str[100];
    cin.getline(str, 100, '&');
    */

    char* pos;

   //C ǥ�� �Լ� strstr() ����ص� ���� ��� ����

    
    /*
    char find[50];
    cout << "find: ";
    cin.getline(find, 50, '\n');
    */

    //pos = strstr(str, find);
    pos = strstr(str, "simple");  // simple�� �����ϴ� ��ġ�� ã��

    /*
    char replace[100];
    cout << "replace: ";
    cin.getline(replace, 100, '\n');
   */
    

    if (pos) {

        //strncpy(pos, replace, strlen(replace));
        strncpy(pos, "sample", 6);  // sample�� ������

        puts(str);

    }
    else

        puts("None!");

    return 0;

}