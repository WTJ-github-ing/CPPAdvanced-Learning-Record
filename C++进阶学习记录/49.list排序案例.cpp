// �ļ�����49
// ����ʱ�䣺2022/11/26 19:51:45

#include<iostream>
using namespace std;
#include<list>
#include<string>
#include<algorithm>

//Ū5���ˣ�������������������ȾͰ���߽���

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
		cout <<"������"<<(*it).m_name<<" "<<"���䣺"<< (*it).m_age<<" "<<"���:"<<(*it).m_height<< endl;
	}
}
//д������������������ɡ�  ��������������������ȾͰ���߽���
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
	Person p4(11, 169, "��4");
	Person p1(10, 160, "��1");  
	Person p2(11, 170, "��2");
	Person p5(15, 185, "��5");
	Person p3(12, 180, "��3");

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	printList(L);  //����ǰ
	cout << endl;
	L.sort(Rank);

	printList(L); //�����

}
int main()
{

	test01();
	system("pause");
	return 0;
}
