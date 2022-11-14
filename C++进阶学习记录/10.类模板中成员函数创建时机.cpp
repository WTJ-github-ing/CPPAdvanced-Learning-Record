#include<iostream>
using namespace std;
#include<string>


//普通类中的成员函数一开始就可以创建；
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person show1" << endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "Person show2" << endl;
	}
};
//类模板中的成员函数在调用时才可以创建。
template<class T>
class myClass
{
public:
	T obj;	//实例化。
	//以下两个成员函数，只要不调用都不会创建。
	void func1()
	{
		obj.showPerson1();
	}
 	void func2()
	{
		obj.showPerson2();
	}
};

void test()
{	
	myClass<Person1>m;
	m.func1();
	//m.func2();  //这行会出错，因为func2中的showPerson2()不是person的成员
}
int main()
{
	test();
	system("pause");
	return 0;
}