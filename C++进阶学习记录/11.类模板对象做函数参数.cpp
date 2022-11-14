// 文件名：11
// 创建时间：2022/11/14 11:29:14


/*
类模板实例化的对象，向函数传参的方式。
1.指定传入的类型 --直接显示对象的数据类型；								最常用
2.参数模板化        --将对象中的参数变为模板进行传递；
3.将整个类模板化   --将这对象类型 模板化进行传递。
*/
#include<iostream>
using namespace std;
#include<string>

//类模板
template<class Nametype ,class Agetype=int>

class Perosn
{
public:
	Nametype m_name;
	Agetype m_age;
	
	Perosn(Nametype name, Agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showPerson()
	{
		cout << "姓名：" << this->m_name <<"	"<< "年龄：" << this->m_age << endl;
	}
};

//1.指定传入的类型 --直接显示对象的数据类型；
void PrintPerson1(Perosn<string, int>&p) //引用的方式传参  类模板实例化的对象，向函数传参
{
	//cout << "姓名：" << p.m_name << "	" << "年龄：" << p.m_age << endl;
	p.showPerson(); //调用
}
void test01()
{
	Perosn<string, int>p1("王", 12);
	//p1.showPerson();
	PrintPerson1(p1);
}
//2.参数模板化--将对象中的参数变为模板进行传递；
template<class T1,class T2>
void PrintPerson2(Perosn<T1, T2>&p)
{
	p.showPerson();
	cout << "T1的类型" << typeid(T1).name() << "   T2的类型" << typeid(T2).name() << endl;
}
void test02()
{
	Perosn<char, int>p2('c', 18);
	PrintPerson2(p2);
}

//3.将整个类模板化   --将这对象类型 模板化进行传递。
template<class T>
void PrintPerson3(T &p) //自动推导。
{
	p.showPerson();
	cout << "T的类型" << typeid(T).name() << endl;
}
void test03()
{
	Perosn<string, int>p3("tan", 18);
	PrintPerson3(p3);
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
