// 文件名：40
// 创建时间：2022/11/22 20:45:37

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

//对deque中得数据存取操作。
void test01()
{
	deque<int> de;  //默认构造
	for (int i = 0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);

	//返回索引处得数据
	cout << de.at(0) << endl;
	
	cout << de[0] << endl;
	//返回第一个
	cout << de.front() << endl;
	//返回最后一个
	cout << de.back() << endl;


	//排序
	de.insert(de.begin(), 2, 8);  //2个-1
	sort(de.begin(),de.end());  //升序
	printdeque(de);
	sort(de.rbegin(), de.rend());  //降序
	printdeque(de);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
