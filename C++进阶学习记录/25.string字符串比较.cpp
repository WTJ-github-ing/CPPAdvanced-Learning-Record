// 文件名：25
// 创建时间：2022/11/19 17:47:36

#include<iostream>
using namespace std;
#include<string>

/*
比较方式：按照字符的ASCII码进行对比。
= 返回0
 >        1
 <		  -1
*/

void test01()
{
	string str1 = "0123456";
	string str2 = "abcdefg";

	int res = str1.compare(str2);  //从左到右，比较ASCII。比较过程中有一个字符不等就停了。
	cout << res << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
