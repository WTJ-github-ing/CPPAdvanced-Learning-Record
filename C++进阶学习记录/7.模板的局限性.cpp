#include<iostream>
using namespace std;
#include<string>

//模板的通用性不是万能的，如Person这样的自定义数据类型。所以C++提供模板的重载，可以为这些特定的类型提供具体的模板。
//自定义的数据类型
struct Person
{
	string name;
	int age;
};
//对比两个数据是否相等
template<typename T>
bool isSame(T &num1, T &num2)
{
	if (num1 == num2)
	{
		return true;  //1
	}
	else
	{
		return false;  //0
	}
}
template<typename T>
bool isSame(Person &num1, Person &num2)  //具体化
{
	if ((num1.name== num2.name )&&(num1.age==num2.age))
	{
		return true;  //1
	}
	else
	{
		return false;  //0
	}
}


void test01()
{
	//普通数据类型
	int a = 1;
	int b = 1;
	cout << isSame(a, b) << endl;
	char c1 = 'c';
	char c2 = 'C';
	cout << isSame(c1, c2) << endl;
	string s1 = "abc";
	string s2 = "abc";
	cout << isSame(s1, s2) << endl;

	//对于自定义的数据类型，利用具体化的 函数重载比较
	Person p1=  { "张三",80 };
	Person p2= { "张三",80 };
	cout << isSame<Person>(p1, p2) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
