// �ļ�����28
// ����ʱ�䣺2022/11/20 21:22:30

#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "abcdef";
	string substr = str.substr(0, 3);  //���ڽ�ȡ�����ַ֮��ĵط���
	cout << str << endl;
	cout << substr << endl;

	string str1 = "hello@sina.com";
	int pos=str1.rfind("@");
	string substr1 = str1.substr(pos, 9);  //���ڽ�ȡ�����ַ֮��ĵط���
	cout << str1 << endl;
	cout << substr1 << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}
