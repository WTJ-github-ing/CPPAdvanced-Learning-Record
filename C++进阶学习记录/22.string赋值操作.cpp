// �ļ�����22
// ����ʱ�䣺2022/11/19 16:49:35

#include<iostream>
using namespace std;
#include<string>
/*
��ʼ�����string�ַ������и�ֵ��

��ֵ������ԭ�͡�7�֡�
*/
void test01()
{
	string str1;

	str1 = "hello world";
	cout << str1 << endl;

	string str2 = str1;
	cout << str2 << endl;

	string str3;
	str3 = 'a';
	cout << str3 << endl;

	string str4;
	str4.assign("hello C++");
	cout << str4 << endl;

	string str5;
	str5.assign("hello C++",5);
	cout << str5<< endl;

	string str6;
	str6.assign(str4);
	cout << str6<< endl;





}
int main()
{
	test01();
	system("pause");
	return 0;
}
