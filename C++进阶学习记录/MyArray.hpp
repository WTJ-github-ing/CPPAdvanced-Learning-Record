//自己的通用的数组类
#pragma once
#include<iostream>
using namespace std;
#include<string>

template<class T>
class MyArray
{

public:
	//有参构造函数 传入数组的容量、初始化数组size、开辟到堆区
	MyArray(int n)
	{
		this->mArray_Capacity = n;
		this->mArray_size = 0;
		this->pArray_Address = new T [this->mArray_Capacity];	     //将数组开辟到堆区，返回指针
		// 测试代码：
		//cout << "MyArray 有参构造被调用。数组元素类型为："<<typeid(this->temptype).name()<<endl;
	}
	//拷贝构造
	MyArray(const MyArray& arr)
	{
		this->mArray_Capacity = arr.mArray_Capacity;
		this->mArray_size = arr.mArray_size;
		//this->pArray_Address = arr.pArray_Address;			 //指针不能直接这样赋值，浅拷贝导致重复释放。
		this->pArray_Address=new T[arr.mArray_Capacity];  //重新在堆区开辟空间、深拷贝
		//将arr中的数据拷贝过来
		for (int i = 0; i < this->mArray_size; i++)
		{
			this->pArray_Address[i] = arr.pArray_Address[i];
		}
		//cout << "拷贝被调用。" << endl;
	}
	//operator=  重载函数  
	MyArray& operator=(const MyArray &arr)  //返回自身的引用，做链式
	{
		//先判断原来堆区是否有数据，有则释放。
		if (this->pArray_Address != NULL)
		{
			delete[] this->pArray_Address;
			this->pArray_Address = NULL;
			this->mArray_Capacity = 0;
			this->mArray_size = 0;
		}
		this->mArray_Capacity = arr.mArray_Capacity;
		this->mArray_size = arr.mArray_size;
		this->pArray_Address = new T[arr.mArray_Capacity];
		for (int i = 0; i < this->mArray_size; i++)
		{
			this->pArray_Address[i] = arr.pArray_Address[i];
		}
		//cout << "重载被调用。" << endl;
		return *this;
	}

	//尾插法对数组中的数据进行增添
	void Push_Back(const T &value) //防止数据被修改，const ,引用的方式
	{
		//判断容量是否满了
		if (this->mArray_size == this->mArray_Capacity)
		{

			return;
		}
		this->pArray_Address[this->mArray_size] = value;
		this->mArray_size++;
	}

	//尾删法对数组中的数据进行删除
	void Pop_Back() //防止数据被修改，const ,引用的方式
	{
		//访问不到最后一个元素、逻辑上的删除。
		if (this->mArray_size == 0)
		{
			return;
		}
		this->mArray_size--;   	//this->pArray_Address[this->mArray_size - 1] = NULL;
	
	}

	//下标 访问数组中的元素  重载[]
	T& operator[](int index)
	{
		return this->pArray_Address[index];
	}
	
	//获取数组中当前元素个数和数组的容量
	void PrintArray_Capacity_and_size()
	{
		cout << "数组当前元素个数：" << mArray_size << "  " << "数组容量：" << mArray_Capacity << endl;
	}

	//再弄个输出T元素的函数
	void PrintArrayInfo()
	{
		for (int i = 0; i < this->mArray_size; i++)
		{
			cout << "第" << i << "个元素：" << this->pArray_Address[i] << endl;
		}
	}

	int Getsize()
	{
		return  this->mArray_size;
	}

	//析构函数
	~MyArray()
	{
		if (this->pArray_Address != NULL)
		{
			delete[] this->pArray_Address;
			this->pArray_Address = NULL;  //置空、防止是野指针。
		}
		//cout << "MyArray 析构 被调用。" << endl;
	}
private:
	//类的属性 
	T   *pArray_Address;		//返回一个数组在堆区的指针
	int  mArray_Capacity;		//数组容量
	int  mArray_size;   			//当前容量
	T temptype;						//当前数组类型
};