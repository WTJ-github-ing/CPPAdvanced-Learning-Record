// �ļ�����11
// ����ʱ�䣺2022/11/14 11:29:14


/*
��ģ��ʵ�����Ķ����������εķ�ʽ��
1.ָ����������� --ֱ����ʾ������������ͣ�								���
2.����ģ�廯        --�������еĲ�����Ϊģ����д��ݣ�
3.��������ģ�廯   --����������� ģ�廯���д��ݡ�
*/
#include<iostream>
using namespace std;
#include<string>

//��ģ��
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
		cout << "������" << this->m_name <<"	"<< "���䣺" << this->m_age << endl;
	}
};

//1.ָ����������� --ֱ����ʾ������������ͣ�
void PrintPerson1(Perosn<string, int>&p) //���õķ�ʽ����  ��ģ��ʵ�����Ķ�����������
{
	//cout << "������" << p.m_name << "	" << "���䣺" << p.m_age << endl;
	p.showPerson(); //����
}
void test01()
{
	Perosn<string, int>p1("��", 12);
	//p1.showPerson();
	PrintPerson1(p1);
}
//2.����ģ�廯--�������еĲ�����Ϊģ����д��ݣ�
template<class T1,class T2>
void PrintPerson2(Perosn<T1, T2>&p)
{
	p.showPerson();
	cout << "T1������" << typeid(T1).name() << "   T2������" << typeid(T2).name() << endl;
}
void test02()
{
	Perosn<char, int>p2('c', 18);
	PrintPerson2(p2);
}

//3.��������ģ�廯   --����������� ģ�廯���д��ݡ�
template<class T>
void PrintPerson3(T &p) //�Զ��Ƶ���
{
	p.showPerson();
	cout << "T������" << typeid(T).name() << endl;
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
