#include<iostream>
using namespace std;
#include<string>

/*
类模板的作用：
		建立一个通用类，类中的成员 数据类型可以不具体制定，用一个虚拟的类型来代表。
*/

template<class NameType,class AgeType>  //T指的是通用的数据类型，一般是大写字母。
class Person
{
public:
	NameType m_name;  //类里的数据类型不唯一。
	AgeType m_age;

	Person(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showPerson() //成员函数
	{
		cout << this->m_name<< " " << this->m_age<< endl;
	}
};

void test01()
{
	Person<string ,int> p1("wang", 12);
	p1.showPerson();

	Person<char, char>p2('p', '2');
	p2.showPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}