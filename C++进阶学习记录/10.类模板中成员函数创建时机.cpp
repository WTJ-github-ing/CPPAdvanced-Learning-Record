#include<iostream>
using namespace std;
#include<string>


//��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ�����
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person show1" << endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "Person show2" << endl;
	}
};
//��ģ���еĳ�Ա�����ڵ���ʱ�ſ��Դ�����
template<class T>
class myClass
{
public:
	T obj;	//ʵ������
	//����������Ա������ֻҪ�����ö����ᴴ����
	void func1()
	{
		obj.showPerson1();
	}
 	void func2()
	{
		obj.showPerson2();
	}
};

void test()
{	
	myClass<Person1>m;
	m.func1();
	//m.func2();  //���л������Ϊfunc2�е�showPerson2()����person�ĳ�Ա
}
int main()
{
	test();
	system("pause");
	return 0;
}