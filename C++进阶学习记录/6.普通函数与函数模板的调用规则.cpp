#include<iostream>
using namespace std;

/*
调用规则：
		1.如果函数模板和普通函数都可以实现，优先调用普通函数；
		2.可以利用空模板参数列表来强制调用函数模板；
		3.函数模板也可以发生重载；
		4.如果函数模板可以产生更好的匹配，优先调用函数模板。
*/

void myPrint(int a,int b)
{
	cout << "调用的是普通函数" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "调用的是模板函数" << endl;
}

template<typename T>
void myPrint(T a, T b,T c)
{
	cout << "调用的是模板函数(三个参数的" << endl;
}
void test01()
{
	int nums1= 1;
	int nums2 = 2;
	//myPrint(nums1, nums2); //1.如果函数模板和普通函数都可以实现，优先调用普通函数；

	myPrint<>(nums1, nums2);//2.可以利用空模板参数列表来强制调用函数模板；

	//3.函数模板也可以发生重载；
	int nums3 = 3;
	myPrint(nums1, nums2, nums3);
	myPrint<>(nums1, nums2, nums3);


	//4.如果函数模板可以产生更好的匹配，优先调用函数模板。
	int c1 = 'a';
	int c2 = 'b';
	myPrint(c1, c2);  //调用普通函数，隐式类型转换。这里不是哦。


}
int main()
{
	test01();
	system("pause");
	return 0;
}
