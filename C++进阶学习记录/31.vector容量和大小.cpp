// 文件名：31
// 创建时间：2022/11/21 16:43:04

#include<iostream>
using namespace std;
#include<vector>

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//对容量和大小的操作
void test01()
{
	vector<int> ve;  //无参
	for (int i = 0; i < 10; i++)
	{
		ve.push_back(i);
	}
	printvector(ve);

	ve.resize(15); //重新指定大小。

	printvector(ve);

	ve.resize(20,100); //重新指定大小。  //原长度小于，填充到20，填100。 
	printvector(ve);

	ve.resize(10);  //多余的删掉。
	printvector(ve);
	//判断是否为空
	if (!ve.empty())
	{
		cout << "不为空。容量为："<<ve.capacity()<<"大小为："<<ve.size() << endl;
	}
	else
	{
		cout << "空" << endl;
	}
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}
