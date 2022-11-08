/*
泛型编程：主要利用的技术是模板
C++提供两类模板，函数模板和类模板
*/
//1.函数模板语法
/*
作用：建立一个通用函数，其 函数返回值类型 和 形参类型可 以不具体指定，用一个虚拟的类型来代表。 void func (int a)
语法：template<typename T>
函数声明或定义

	template--声明创建模板
	typename--表面到其后面的符号是一种数据类型，可以用class代替
	T--通用的数据类型，名称可以替换，通常为大写字母。
*/

#include<iostream>
using namespace std;

//交换两个整型
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
//交换两个浮点型
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

void test()
{
	//int a = 10;
	//int  b = 11;
	//swapInt(a, b);
	//cout << a << "++++ + "<<  b << endl;

	double a = 10.01;
	double  b = 11.12;
	swapDouble (a, b);
	cout << a << "++++ + " << b << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}
