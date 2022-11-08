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

//类型一开始不指定，实现通用的数据交换。函数模板
template<typename T>		//声明一个模板，告诉编辑器后面代码紧跟着的T不要报错，T是一个通用的数据类型。实际就是将类型参数化。

void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	//int a = 10;
	//int  b = 11;
	//swapInt(a, b);
	//cout << a << "++++ + "<<  b << endl;

	double c = 10.01;
	double  d = 11.12;
	//swapDouble (c, d);

	
	//利用函数模板来交换
	//mySwap(c, d);  //自动类型推导
	mySwap<double>(c,d);  //显示指定类型  ,模板：数据类型为double 

	cout << c << "    " << d << endl;
}


int main()
{
	test();
	system("pause");
	return 0;
}
