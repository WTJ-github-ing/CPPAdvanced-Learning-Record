// �ļ�����26
// ����ʱ�䣺2022/11/19 21:39:47

#include<iostream>
using namespace std;
#include<string>
/*
string �����ַ���ȡ��ʽ�����֣�
		1.char &operator[] (int n);  //ͨ��[]��ʽȡ�ַ�
		2.char& at(int n);  //ͨ��at������ȡ�ַ�
*/

void test01()
{
	string str = "hello";
	cout << "str=" << str << endl;
	//ȡ��
	for (char c : str)
	{
		cout << c <<"	";
	}
	cout << endl;
	for (int i=0;i<str.size();i++)
	{
		cout << str[i] << "	";
	}
	cout << endl;
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << "	";
	}
	cout << endl;
	//�޸�
	str[0] = 'x';
	str.at(1) = 'x';
	for (char c : str)
	{
		cout << c << "	";
	}
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
