// 文件名：13
// 创建时间：2022/11/15 20:26:36

#include<iostream>
using namespace std;
#include<string>

/*
掌握类模板中的成员函数类外实现。类外实现是为了分文件编写。
*/
template<class T1,class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;
	//类内构造函数
	//Person(T1 name,T2 age) 
	//{
	//	m_name = name;
	//	m_age = age;
	//}
	//类内成员函数
	//void showPerosnInfo()
	//{
	//	cout << this->m_name<< " " << this->m_age << endl;
	//}
	//类外构造
	Person(T1 name, T2 age);
	void showPerosnInfo();
};
template<class T1, class T2>
//类外构造实现
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
//类外成员实现
template<class T1, class T2>
void Person<T1, T2>::showPerosnInfo()
{
	cout << this->m_name << " " << this->m_age << endl;
}

void test01()
{
	Person<string, int>p1("wang", 14);
	p1.showPerosnInfo();

}
int main()
{
	test01();
	system("pause");
	return 0;
}
