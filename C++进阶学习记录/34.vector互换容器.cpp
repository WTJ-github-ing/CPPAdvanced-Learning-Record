// 文件名：34
// 创建时间：2022/11/21 18:25:27

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

//实现将两个容器内的元素互换。
void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 9; i >=0; i--)
	{
		v2.push_back(i);
	}
	printvector(v1);
	printvector(v2);

	//交换
	v1.swap(v2);
	printvector(v1);
	printvector(v2);


}
//swap()可以收缩内存空间
void test02()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
	cout << "v1的容量：" << v1.capacity() << endl;  //容量是动态分配的。会预留一部分空间。
	cout << "v1的大小：" << v1.size() << endl;

//如果用resize()重新指定大小；
	v1.resize(3);
	cout << "v1的容量：" << v1.capacity() << endl;  //容量不变，容量太大用不完。
	cout << "v1的大小：" << v1.size() << endl; //大小变化
//使用swap()
	vector<int>(v1).swap(v1);
	cout << "v1的容量：" << v1.capacity() << endl;  //
	cout << "v1的大小：" << v1.size() << endl; 
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
