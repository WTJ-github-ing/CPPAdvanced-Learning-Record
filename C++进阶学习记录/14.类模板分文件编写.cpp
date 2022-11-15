// 文件名：14
// 创建时间：2022/11/15 21:03:36

#include<iostream>
using namespace std;
#include<string>

/*
掌握类模板成员函数分文件编写产生的问题和解决方式。

问题：
类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
解决：
1.直接包含.CPP文件。很少。
2.将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制。
*/
//Person:.h头文件内容
//template<class T1, class T2>
//class Person
//{
//public:
//  	T1 m_name;
//	T2 m_age;
//
//	Person(T1 name, T2 age);
//	void showInfo();
//};
//

//.cpp内容
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showInfo()
//{
//	cout << this->m_name << " " << this->m_age << endl;
//}
//


//使用：包含Person头文件
//#include"Person.h"  //有问题
// #include"Person.cpp"  // 第一种解决方式
#include"Person.hpp"  //二
void test01()
{
	Person<string, int>p1("wang", 12);  //两个无法解析的外部命令。
	p1.showInfo();		//两个无法解析的外部命令。  第一种解决方式#include"Person.cpp"

}
int main()
{
	test01();
	system("pause");
	return 0;
}
