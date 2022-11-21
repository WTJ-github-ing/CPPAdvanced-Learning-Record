// 文件名：33
// 创建时间：2022/11/21 18:01:15

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";  //[]访问
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";  //at访问
	}
	cout << endl;

	//获取第一个元素‘
	cout << "第一个元素：" << v1.front() << endl;

	//获取最后个元素‘
	cout << "最后元素：" << v1.back() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}
