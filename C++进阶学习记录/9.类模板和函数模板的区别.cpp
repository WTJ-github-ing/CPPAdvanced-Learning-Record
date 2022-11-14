#include<iostream>
using namespace std;
#include<string>

/*
类模板和函数模板的区别主要有两点：
		1.类模板没有自动类型推导的使用方式
		2.类模板在模板参数列表中可以有默认参数
*/

//类模板
template<class Nametype, class Agetype = int>  //2.类模板在模板参数列表中可以有默认参数
class Person
{
public:
	Nametype m_name;
	Agetype    m_age;
	Person(Nametype name, Agetype age):m_name(name), m_age(age) {}  //采用初始化列表

	void showPerson()
	{
		cout << m_name << " " << m_age << endl;
	}
};

void test01()
{
	//Person p1("wang", 12);  1.类模板没有自动类型推导的使用方式
	Person<string, int> p1("王大大人", 12);
	p1.showPerson();
}
void test02()
{
	Person<string> p1("wang", 14);
	p1.showPerson();
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}

