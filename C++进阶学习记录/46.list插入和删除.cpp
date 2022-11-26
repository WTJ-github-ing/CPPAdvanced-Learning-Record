// 文件名：46
// 创建时间：2022/11/23 17:01:59

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
	list<int> L;
	L.push_back(3);
	L.push_back(4);
	L.push_back(5);

	L.push_front(2);
	L.push_front(1);
	printList(L);

	L.pop_back();
	L.pop_front();
	printList(L);

	//插入  不是顺序储存，不可以用索引，用迭代器。
	//任意位置用advance
	list<int>::iterator it = L.begin();  //准备一个迭代器
	advance(it, 2);  //迭代器偏移
	L.insert(it, 2,5000);   //在2号位置插入2个5000.
	printList(L);

	//删除任意位置。
	list<int>::iterator it2 = L.begin();  //准备一个迭代器
	advance(it2, 2);  //迭代器偏移
	L.erase(it2);
	printList(L);

	//移除
	L.push_back(10000);  //先插一个
	L.push_back(10000);  //先插一个
	printList(L);
	L.remove(10000);  //只需要一个值，删除所有匹配的
	printList(L);
	L.remove(5000);
	printList(L);

	//清空 
	L.clear();
	printList(L);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
