// 文件名：24
// 创建时间：2022/11/19 17:22:22

#include<iostream>
using namespace std;
#include<string>

/*
字符串查找与替换。可以学习KMP算法。
*/

void test01()
{
	string str1 = "abcdede";
	int pos = str1.find("de");  //从左往右 找到第一个位置，无则返回-1
	cout << pos << endl;

	pos =str1.rfind("d");  ////从右往左 找到第一个位置；
	cout << pos << endl;
}

void test02()
{
	string str2 = "abcdefgh";
	str2.replace(1, 3, "1111");
	cout << str2 << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
