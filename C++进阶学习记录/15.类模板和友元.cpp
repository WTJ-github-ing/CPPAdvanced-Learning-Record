// 文件名：15
// 创建时间：2022/11/16 11:18:47

#include<iostream>
using namespace std;
#include<string>


/*
类模板配合友元函数的类内外实现。
*/

template<class T1, class T2>
class Person;
//类外实现类模板成员函数
template<class T1, class T2>
void printPersonInfo2(Person<T1, T2>p)
{
	cout << "类外实现   姓名：" << p.m_name << "	" << "年龄：" << p.m_age << endl;
}


template<class T1,class T2>
class Person
{
	//通过全局函数类内输出PersonInfo
	friend void printPersonInfo(Person<T1, T2>p)	 //声明和实现写在一起了而已
	{
		cout << "姓名：" << p.m_name <<"	"<< "年龄：" << p.m_age << endl;
	}
	//通过全局函数类外输出PersonInfo。比较复杂。
	friend void printPersonInfo2<>(Person<T1, T2>p);  //需要先让编译器知道类模板的存在，再让编译器知道函数的存在。
public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age    = age;
	}
private:
	T1 m_name;
	T2 m_age;
};


void test01()
{
	Person <string, int>p1("王", 18);
	printPersonInfo(p1);
	printPersonInfo2(p1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
