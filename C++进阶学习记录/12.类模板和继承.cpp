// 文件名：12
// 创建时间：2022/11/14 20:55:47
/*
	当子类继承的父类是一个类模板时，子类在声明的时候，要指定父类中T的类型
	如果不指定，编译器无法给子类分配内存
	想灵活指定父类中T的类型，子类也需要变为类模板。
*/

#include<iostream>
using namespace std;

template<class T>
class Base
{
public:
	T m;
	void showinfo()
	{
		cout << this->m<< endl;
	}
};
//class Son :public Base //错误的。当子类继承的父类是一个类模板时，子类在声明的时候，要指定父类中T的类型。不指定，编译器无法给子类分配内存
//{
//
//};
class Son:public Base<int>
{

};

//想灵活指定父类中T的类型，子类也需要变为类模板。
template<class T>
class Son1 :public Base<T>
{

};
void test01()
{
	Son son;
	son.m = 1;
	son.showinfo();

	Son1 <char>son1;
	son1.m = 'c';
	son1.showinfo();


	
}


int main()
{
	test01();
	system("pause");
	return 0;
}
