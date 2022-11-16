// �ļ�����15
// ����ʱ�䣺2022/11/16 11:18:47

#include<iostream>
using namespace std;
#include<string>


/*
��ģ�������Ԫ������������ʵ�֡�
*/

template<class T1, class T2>
class Person;
//����ʵ����ģ���Ա����
template<class T1, class T2>
void printPersonInfo2(Person<T1, T2>p)
{
	cout << "����ʵ��   ������" << p.m_name << "	" << "���䣺" << p.m_age << endl;
}


template<class T1,class T2>
class Person
{
	//ͨ��ȫ�ֺ����������PersonInfo
	friend void printPersonInfo(Person<T1, T2>p)	 //������ʵ��д��һ���˶���
	{
		cout << "������" << p.m_name <<"	"<< "���䣺" << p.m_age << endl;
	}
	//ͨ��ȫ�ֺ����������PersonInfo���Ƚϸ��ӡ�
	friend void printPersonInfo2<>(Person<T1, T2>p);  //��Ҫ���ñ�����֪����ģ��Ĵ��ڣ����ñ�����֪�������Ĵ��ڡ�
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
	Person <string, int>p1("��", 18);
	printPersonInfo(p1);
	printPersonInfo2(p1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
