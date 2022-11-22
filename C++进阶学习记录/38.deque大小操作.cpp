// 文件名：38
// 创建时间：2022/11/22 19:38:59

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
//对deque容器的大小进行操作；
void isempty(const deque<int>&de)
{
	if (!de.empty())
	{
		cout << "非空" << endl;
	}
	else
	{
		cout << "空" << endl;
	}
}

void deque_size(const deque<int>&de)
{
	cout << de.size() << endl;
}
void test01()
{
	deque<int> de;  //默认构造
	for (int i = 0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);
	//是否为空的判断
	isempty(de);
	//容器大小、即元素的个数。
	deque_size(de);
	//重新指定容器长度，变长则用默认值0补齐。
	de.resize(15);
	printdeque(de);
	//
	de.resize(20,1);
	printdeque(de);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
