// 文件名：28
// 创建时间：2022/11/20 21:22:30

#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "abcdef";
	string substr = str.substr(0, 3);  //用在截取邮箱地址之类的地方；
	cout << str << endl;
	cout << substr << endl;

	string str1 = "hello@sina.com";
	int pos=str1.rfind("@");
	string substr1 = str1.substr(pos, 9);  //用在截取邮箱地址之类的地方；
	cout << str1 << endl;
	cout << substr1 << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}
