#include<iostream>
using namespace std;
#include<string>

/*函数模板的注意事项:
	1.自动类型推导：必须推导出一致的数据类型T；
	2.模板必须要确定出T的数据类型，才可以使用。
*/

template<typename T>		//声明一个模板，告诉编辑器后面代码紧跟着的T不要报错，T是一个通用的数据类型。实际就是将类型参数化。typename和class ,没区别。
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//1.自动类型推导
	mySwap(a, b);  //正确
	cout << "a="<<a <<"\n"<< "b=" << b <<"\n"<<"c="<<c<< endl;
	//mySwap(a, c);  //错误：必须推导出一致的数据类型T；
}

//2.模板必须要确定出T的数据类型，才可以使用。
template<typename T>
void func()  //当把func变成函数模板之后,必须要确定出T的数据类型。无法使用自动推导。
{：
	cout << "func函数的调用" << endl;
}

void test01()
{
	//func();
	func<int>();  //mySwap<double>(,);  //可以使用显示指定类型
}
int main()
{
	//test();
	test01();

	system("pause");
	return 0;
}
