#include<iostream>
using namespace std;
#include<string>

//ģ���ͨ���Բ������ܵģ���Person�������Զ����������͡�����C++�ṩģ������أ�����Ϊ��Щ�ض��������ṩ�����ģ�塣
//�Զ������������
struct Person
{
	string name;
	int age;
};
//�Ա����������Ƿ����
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
bool isSame(Person &num1, Person &num2)  //���廯
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
	//��ͨ��������
	int a = 1;
	int b = 1;
	cout << isSame(a, b) << endl;
	char c1 = 'c';
	char c2 = 'C';
	cout << isSame(c1, c2) << endl;
	string s1 = "abc";
	string s2 = "abc";
	cout << isSame(s1, s2) << endl;

	//�����Զ�����������ͣ����þ��廯�� �������رȽ�
	Person p1=  { "����",80 };
	Person p2= { "����",80 };
	cout << isSame<Person>(p1, p2) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
