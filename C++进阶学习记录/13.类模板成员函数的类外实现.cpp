// �ļ�����13
// ����ʱ�䣺2022/11/15 20:26:36

#include<iostream>
using namespace std;
#include<string>

/*
������ģ���еĳ�Ա��������ʵ�֡�����ʵ����Ϊ�˷��ļ���д��
*/
template<class T1,class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;
	//���ڹ��캯��
	//Person(T1 name,T2 age) 
	//{
	//	m_name = name;
	//	m_age = age;
	//}
	//���ڳ�Ա����
	//void showPerosnInfo()
	//{
	//	cout << this->m_name<< " " << this->m_age << endl;
	//}
	//���⹹��
	Person(T1 name, T2 age);
	void showPerosnInfo();
};
template<class T1, class T2>
//���⹹��ʵ��
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
//�����Աʵ��
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
