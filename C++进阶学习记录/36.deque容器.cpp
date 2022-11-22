// 文件名：36
// 创建时间：2022/11/22 17:56:47

#include<iostream>
using namespace std;
/*
类似双端数组，可以对头端进行插入和删除操作；


deque和vector的区别在于：
	vector对于头部的插入删除效率低，需要移动元素，数据量越大，效率越低。
	deque相对而言，对头部的插入删除速度比vector快。
	vector访问元素时的速度会比deque快，这和两者内部实现有关。

deque内部工作原理：
	deque内部有一个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据。
	中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存地址。

迭代器支持随机访问。
*/
#include<deque>
#include<algorithm>
void printdeque(const deque<int>& d)  //只读状态。
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it=100 ;//加const 不可修改
		cout << *it << " ";
	}
	cout << endl;
}
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	deque<int> de;  //默认构造
	for (int i=0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);

	for_each(de.begin(), de.end(), myprint);
	cout << endl;

	//区间的方式
	deque<int> de2(de.begin(), de.end());
	printdeque(de2);

	for_each(de2.begin(), de2.end(), myprint);
	cout << endl;

	//n个元素的方式
	deque<int>de3(10, 1);
	printdeque(de3);

	for_each(de3.begin(), de3.end(), myprint);
	cout << endl;

	//拷贝构造的方式
	deque<int>de4(de3);
	printdeque(de4);

	for_each(de4.begin(), de4.end(), myprint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
