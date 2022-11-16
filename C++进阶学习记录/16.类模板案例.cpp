// 文件名：16
// 创建时间：2022/11/16 21:40:28

#include<iostream>
using namespace std;


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

template<class T>
class myArray
{
public:
	//构造函数 传入数组的容量
	myArray(int n)
	{
		this->mArray_n = n;
		this->mArray_size = 0;
		this->pArray_Address = new T[this->mArray_n];	//将数组开辟到堆区，返回指针
		// 测试代码：
		cout << "MyArray 有参构造 被调用。" << endl;
	}
	//拷贝构造

	//operator=  重载函数

	//尾插法和尾删法对数组中的数据进行增减和删除

	//下标 访问数组中的元素

	//获取数组中当前元素个数和数组的容量
	void PrintArray_n_and_size()
	{
		cout << "数组当前元素个数：" << mArray_size << "  " << "数组容量：" << mArray_n << endl;
	}
	//析构函数
private:
	//类的属性 
	T   *pArray_Address;		//返回一个数组在堆区的指针
	int  mArray_n;					//数组容量
	int  mArray_size;   			//当前容量

};


void test01()
{
	myArray <int>myarray(3);
	myarray.PrintArray_n_and_size();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
