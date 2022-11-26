// 文件名：47
// 创建时间：2022/11/26 19:05:28

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

void test01()
{
	list<int>L;  //不支持随机访问、不可用at和[]访问元素。只能前移和后移。

	L.push_back(1);
	L.push_back(2);
	L.push_back(3);
	printList(L);
	//接口只有
	cout << L.front() << " ";//第一个
	cout << L.back() << endl;

	//验证list迭代器不支持随机访问，
	list<int>::iterator it = L.begin();
	//advance(it, 2);
	it++;  //可以  、--也可以。只支持双向。
	//it = it + 1; // 不可以
}

int main()
{
	test01();
	system("pause");
	return 0;
}
