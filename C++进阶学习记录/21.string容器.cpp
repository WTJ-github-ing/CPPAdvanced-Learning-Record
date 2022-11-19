// 文件名：21
// 创建时间：2022/11/19 11:16:51

#include<iostream>
using namespace std;
#include<string>
/*
字符串string本质是一个类；
string和char*的区别：
	char*是一个指针；
	string是一个类，类里面封装了char*,管理这个字符串，是一个char*型的容器；
特点：
	封装有很多成员函数：find、copy、delete、replace、insert
	string管理char*所分配的内存，不用担心复制越界和取值越界，由类内部进行负责。

string构造函数：
	string();//创建一个空的字符串、例如string str;
	string(const char* s);//使用字符串s初始化；
	string(const string& str);//使用一个string对象初始化另一个string对象;
	string(int n,char c);//使用n个字符c初始化;
*/
//string构造函数：
void test001()
{
	string s1; //默认构造
	s1 = "hhh";

	const char*  s=  "hello world";
	string s2(s);

	const string & str = "world hello";
	string s3(str); 

	int n = 2;
	char c = 'a';
	string s4(n,c);  //两个aa

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	for (char c : s1)  //循环输出。
	{
		printf("%c ", c);
	}
}
int main()
{
	test001();
	system("pause");
	return 0;
}
