// 文件名：45
// 创建时间：2022/11/23 16:26:21

#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

void printList(const list<int>& L)
{
	for(list<int>::const_iterator it = L.begin();it!=L.end();it++)
	{
		cout << *it << " ";
	}
	cout<< endl;
}

void test01()
{
	list<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	printList(li);
	//
	cout << endl;
	list<int> li2(li.begin(), li.end());
	printList(li2);
	cout << endl;

	list<int> li3 (4, 3);
	printList(li3);
	cout << endl;

	list<int> li4(li3);
	printList(li4);
	cout << endl;

	list<int> li5;
	li5 = li4;
	printList(li5);
	cout << endl;

	li5.swap(li);

	printList(li);
	printList(li5);
	cout << endl;

	cout << li5.size() << endl;
	li5.resize(3);
	printList(li5);

	li5.resize(10);
	printList(li5);

	li5.resize(15,9);
	printList(li5);
	li5.clear();
	printList(li5);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
