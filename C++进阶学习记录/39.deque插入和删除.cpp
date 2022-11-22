// 文件名：39
// 创建时间：2022/11/22 19:59:50

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

	//向deque容器中插入和删除数据
	de.push_back(10); //尾部插入
	printdeque(de);

	de.push_front(-1); //头部插入
	printdeque(de);

	de.pop_back();  //删除最后一个
	printdeque(de);
	de.pop_front(); //删除第一个
	printdeque(de);

	//指定位置
	de.insert(de.begin(),2,-1);  //2个-1
	printdeque(de);

	//区间的方式；
	deque<int>de2;
	de2.push_back(0);
	de2.insert(de2.begin(),de.begin(),de.end());  //在de2的begin位置插入de区间
	printdeque(de2);

	//删除操作
	de2.erase(de2.begin()); //将末尾删除
	printdeque(de2);

	//删除任意位置
	deque<int>::iterator it = de2.begin();
	it++;  //删除第二个元素 0  1
	de2.erase(it);
	printdeque(de2);

	//按区间删除
	de2.erase(de2.begin(),de2.end());
	printdeque(de2);

	//整个删除
	de.clear();
	printdeque(de);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
