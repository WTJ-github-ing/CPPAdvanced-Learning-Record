// �ļ�����14
// ����ʱ�䣺2022/11/15 21:03:36

#include<iostream>
using namespace std;
#include<string>

/*
������ģ���Ա�������ļ���д����������ͽ����ʽ��

���⣺
��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
�����
1.ֱ�Ӱ���.CPP�ļ������١�
2.��������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ�ơ�
*/
//Person:.hͷ�ļ�����
//template<class T1, class T2>
//class Person
//{
//public:
//  	T1 m_name;
//	T2 m_age;
//
//	Person(T1 name, T2 age);
//	void showInfo();
//};
//

//.cpp����
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showInfo()
//{
//	cout << this->m_name << " " << this->m_age << endl;
//}
//


//ʹ�ã�����Personͷ�ļ�
//#include"Person.h"  //������
// #include"Person.cpp"  // ��һ�ֽ����ʽ
#include"Person.hpp"  //��
void test01()
{
	Person<string, int>p1("wang", 12);  //�����޷��������ⲿ���
	p1.showInfo();		//�����޷��������ⲿ���  ��һ�ֽ����ʽ#include"Person.cpp"

}
int main()
{
	test01();
	system("pause");
	return 0;
}
