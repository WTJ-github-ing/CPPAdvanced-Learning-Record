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

	//1.自动类型推导
	mySwap(a, b);  //正确
	cout << "a="<<a <<"\n"<< "b=" << b << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}
