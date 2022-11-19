// 文件名：26
// 创建时间：2022/11/19 21:39:47

#include<iostream>
using namespace std;
#include<string>
/*
string 单个字符存取方式有两种：
		1.char &operator[] (int n);  //通过[]方式取字符
		2.char& at(int n);  //通过at方法获取字符
*/

void test01()
{
	string str = "hello";
	cout << "str=" << str << endl;
	//取出
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
	//修改
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
