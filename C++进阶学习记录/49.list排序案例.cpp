// 文件名：49
// 创建时间：2022/11/26 19:51:45

#include<iostream>
using namespace std;
#include<list>
#include<string>
#include<algorithm>

//弄5个人，按照年龄升序，年龄相等就按身高降序。

class Person
{
public:
	int m_age;
	int m_height;
	string m_name;

	Person(int age, int height, string name)
	{
		this->m_age = age;
		this->m_height = height;
		this->m_name = name;
	}
};

void printList(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout <<"姓名："<<(*it).m_name<<" "<<"年龄："<< (*it).m_age<<" "<<"身高:"<<(*it).m_height<< endl;
	}
}
//写个年龄升序的排序函数吧。  ，按照年龄升序，年龄相等就按身高降序
bool Rank(Person & p1,Person &p2)
{
	//return p1.m_age < p2.m_age;
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	else
	{
		return  p1.m_age < p2.m_age;
	}
}
void test01()
{
	list<Person>L;

	//	Person(int age, int height, int name)
	Person p4(11, 169, "张4");
	Person p1(10, 160, "张1");  
	Person p2(11, 170, "张2");
	Person p5(15, 185, "张5");
	Person p3(12, 180, "张3");

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	printList(L);  //排序前
	cout << endl;
	L.sort(Rank);

	printList(L); //排序后

}
int main()
{

	test01();
	system("pause");
	return 0;
}
