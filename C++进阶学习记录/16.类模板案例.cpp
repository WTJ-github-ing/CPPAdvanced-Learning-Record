// �ļ�����16
// ����ʱ�䣺2022/11/16 21:40:28

#include<iostream>
using namespace std;
#include<string>

/*
ʵ��һ��ͨ�õ������࣬Ҫ��
1.���Զ������������ͺ��Զ�����������ͽ��д洢��
2.�����������ݴ洢��ջ����
3.���캯�����Դ��������������
4.�ṩ��Ӧ�Ŀ��������Լ�operator=��ֹǳ������
5.�ṩβ�巨��βɾ���������е����ݽ���������ɾ����
6.����ͨ���±�ķ�ʽ���������е�Ԫ�أ�
7.���Ի�ȡ�����е�ǰԪ�ظ����������������
*/

#include"MyArray.hpp"

//�Զ�����������
class Person
{
public:
	string m_name;
	int m_age;
	Person()
	{

	}
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
};
//����Զ�������͵�
void PrintPersonArray(MyArray<Person>&p)
{
	for (int i = 0; i < p.Getsize();i++)
	{
		cout << p[i].m_name << p[i].m_age << endl;
	}
}
void test01()
{
	//MyArray<int>arr1(3);
	//arr1.PrintArray_Capacity_and_size();

	////����
	//MyArray<int>arr2(arr1);
	//arr2.PrintArray_Capacity_and_size();
	//
	////=����
	//MyArray<int>arr3(100);
	//arr3.PrintArray_Capacity_and_size();
	//arr3 = arr1;
	//arr3.PrintArray_Capacity_and_size();

	//MyArray<int>arr3(100);

	//arr3.Push_Back(3);
	//arr3.Pop_Back();
	//int a=arr3[0];
	//cout << a << endl;
	//arr3.PrintArray_Capacity_and_size();

	//for (int i = 0; i < 5; i++)
	//{
	//	arr3.Push_Back(i);
	//}
	//arr3.PrintArrayInfo();
	//arr3.Pop_Back();  //ɾ�����һ��
	//arr3.PrintArrayInfo();

	//arr3[3] = 1;  //���±�ı䡢��ֵ��
	//arr3.PrintArrayInfo();


	//��һ���Զ������������
	MyArray<Person>arr1(4);

	Person p1("sun", 18);
	Person p2("zhu", 19);
	Person p3("sha", 19);

	arr1.Push_Back(p1);
	arr1.Push_Back(p2);
	arr1.Push_Back(p3);

	arr1.PrintArray_Capacity_and_size();
	Person p4("sha", 20);
	arr1[2] = p4;

	PrintPersonArray(arr1);



}


int main()
{
	test01();
	system("pause");
	return 0;
}
