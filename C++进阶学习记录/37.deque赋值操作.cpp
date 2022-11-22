// 文件名：37
// 创建时间：2022/11/22 19:24:28

#include<iostream>
using namespace std;
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

void test01()
{
	deque<int> de;  //默认构造
	for (int i = 0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);
	//重载的方式赋值。
	deque<int>de2 = de;
	printdeque(de2);
	//将 [begin,end)区间中的数据拷贝赋值给本身；
	deque<int>de3(de.begin(), de.end());
	printdeque(de3);
	//将n个元素拷贝赋值给本身
	deque<int>de4(10, 1);
	printdeque(de4);
	//assign
	deque<int>de5;
	de5.assign(de4.begin(), de4.end());
	printdeque(de5);


}
int main()
{
	test01();
	system("pause");
	return 0;
}
