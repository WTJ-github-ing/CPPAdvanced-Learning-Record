// �ļ�����23
// ����ʱ�䣺2022/11/19 17:06:45

#include<iostream>
using namespace std;
#include<string>
/*
ʵ�����ַ�����ĩβƴ���ַ�����
*/

void  test01()
{
	string str1 = "hello";
	str1 += " world";
	cout << str1 << endl;

	str1 +='!';
	cout << str1 << endl;

	string str2 = " lol dnf";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << str3 << endl;

	str3.append("game 1234",4);
	cout << str3 << endl;


	str3.append(str2,0,3);  //ֻ��ȡ0-3��
	cout << str3 << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
