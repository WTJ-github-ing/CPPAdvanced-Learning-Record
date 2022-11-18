// 文件名：18
// 创建时间：2022/11/18 20:01:50

#include<iostream>
using namespace std;
/*
STL 中最常用的容器是Vector、可以理解为数组：插入数据、遍历数据。
容器：vector
算法：for_each
迭代器：vector<int>::iterator
*/

#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << endl;
}
void test01()
{
	vector<int> v;  //直接定义一个vector容器v
	//向容器中插入数据
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v[0] = 9;

	//通过迭代器访问
	//vector<int>::iterator itBegin = v.begin();	// v.begin()是一个起始迭代器，指向容器中第一个元素。
	//vector<int>::iterator itEnd = v.end(); // v.begin()是一个结束迭代器，指向容器中第最后一个元素的下一个位置。
	//第一种遍历
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历
	//for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//第三种遍历
	for_each(v.begin(), v.end(), myPrint); //相当于在这里实现。回调函数。
}
int main()
{
	test01();
	system("pause");
	return 0;
}
