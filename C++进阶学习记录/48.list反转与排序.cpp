// 文件名：48
// 创建时间：2022/11/26 19:28:40

#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool Rank(int & p1, int &p2)
{
	return p1 > p2;
}

void test01()
{
	list<int>L;  
	L.push_back(1);
	L.push_back(2);
	L.push_back(4);
	L.push_back(5);
	L.push_back(6);
	L.push_back(3);
	printList(L);

	L.reverse();  //反转
	printList(L);

	//sort(L.begin(), L.end());   //所有不支持随机访问的迭代器都不可以使用标准算法；
	
	//使用容器内部的算法即可
	L.sort();  //默认升序
	printList(L);
	L.sort(Rank);   //提供一个仿函数 或者函数改变排序规则、
	printList(L);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
