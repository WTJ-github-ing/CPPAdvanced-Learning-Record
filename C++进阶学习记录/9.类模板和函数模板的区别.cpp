#include<iostream>
using namespace std;
#include<string>

/*
��ģ��ͺ���ģ���������Ҫ�����㣺
		1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
		2.��ģ����ģ������б��п�����Ĭ�ϲ���
*/

//��ģ��
template<class Nametype, class Agetype = int>  //2.��ģ����ģ������б��п�����Ĭ�ϲ���
class Person
{
public:
	Nametype m_name;
	Agetype    m_age;
	Person(Nametype name, Agetype age):m_name(name), m_age(age) {}  //���ó�ʼ���б�

	void showPerson()
	{
		cout << m_name << " " << m_age << endl;
	}
};

void test01()
{
	//Person p1("wang", 12);  1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
	Person<string, int> p1("�������", 12);
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

