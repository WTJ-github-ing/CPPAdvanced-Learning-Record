#include<iostream>
using namespace std;
#include<string>

/*
��ģ������ã�
		����һ��ͨ���࣬���еĳ�Ա �������Ϳ��Բ������ƶ�����һ�����������������
*/

template<class NameType,class AgeType>  //Tָ����ͨ�õ��������ͣ�һ���Ǵ�д��ĸ��
class Person
{
public:
	NameType m_name;  //������������Ͳ�Ψһ��
	AgeType m_age;

	Person(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showPerson() //��Ա����
	{
		cout << this->m_name<< " " << this->m_age<< endl;
	}
};

void test01()
{
	Person<string ,int> p1("wang", 12);
	p1.showPerson();

	Person<char, char>p2('p', '2');
	p2.showPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}