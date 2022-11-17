// 文件名：16
// 创建时间：2022/11/16 21:40:28

#include<iostream>
using namespace std;
#include<string>

/*
实现一个通用的数组类，要求：
1.可以对内置数据类型和自定义的数据类型进行存储；
2.将数组中数据存储到栈区；
3.构造函数可以传入数组的容量；
4.提供对应的拷贝函数以及operator=防止浅拷贝；
5.提供尾插法和尾删法对数组中的数据进行增减和删除；
6.可以通过下标的方式访问数组中的元素；
7.可以获取数组中当前元素个数和数组的容量；
*/

#include"MyArray.hpp"

//自定义数据类型
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
//输出自定义的类型的
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

	////拷贝
	//MyArray<int>arr2(arr1);
	//arr2.PrintArray_Capacity_and_size();
	//
	////=重载
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
	//arr3.Pop_Back();  //删除最后一个
	//arr3.PrintArrayInfo();

	//arr3[3] = 1;  //按下标改变、赋值。
	//arr3.PrintArrayInfo();


	//试一下自定义的数据类型
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
