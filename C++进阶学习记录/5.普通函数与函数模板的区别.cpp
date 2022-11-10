#include<iostream>
using namespace std;
/*
普通函数调用时可以发生自动类型转换（隐式类型转换）
函数模板调用时，如果利用自动类型推导，不会发生类型转换
如果利用显示指定类型的方式，可以自动发生隐式类型转换。
*/
//1.普通函数调用时可以发生自动类型转换（隐式类型转换）
int  NormalFuncAdd(int nums1,int nums2)
{
	return nums1 + nums2;
}

//2.函数模板调用时，如果利用自动类型推导，不会发生类型转换
template<typename T>

T  TemplateFuncAdd(T nums1, T nums2)
{
	return nums1 + nums2;
}


void test01()
{
	//普通函数调用时 隐式类型转换
	//int a = 1;
	//int b = 2;
	//NormalFuncAdd(a, b);
	//cout << "a=" << a <<" "<< "b=" << b <<" "<<"sum"<< NormalFuncAdd(a, b)<< endl;

	//int e = 1;
	//int c = 'c';
	//cout << c << endl;
	//NormalFuncAdd(e, c);  //会将‘c’转换为整型 ，99；  字符型转为了整型，隐式类型转换
	//cout << "e=" << e << " " << "c=" << c << ""<<"sum"<< NormalFuncAdd(e, c) <<endl;

	int a = 1;
	int b = 2;
	char c = 'c';
	cout << TemplateFuncAdd(a,b)<<endl;
	//函数模板调用时，如果利用自动类型推导，不会发生类型转换
	//cout << TemplateFuncAdd(a, c) << endl; //报错
	cout << TemplateFuncAdd<int>(a, c) << endl;   //如果利用显示指定类型的方式，可以自动发生隐式类型转换。

}

int main()
{
	test01();
	system("pause");
	return 0;
}
