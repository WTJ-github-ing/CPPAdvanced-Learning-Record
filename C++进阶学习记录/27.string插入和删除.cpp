// 文件名：27
// 创建时间：2022/11/20 21:12:34

#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "hello";

	str.insert(0, "111");
	cout << str << endl;

	//str.insert(0, '0');  //不可以插入字符
	
	//删除
	str.erase(0, 3);  //从哪里删除到哪里；
	cout << str << endl;  
}

int main()
{
	test01();
	system("pause");
	return 0;
}
