// 文件名：29
// 创建时间：2022/11/20 21:40:29

#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
/*
vector类似于数组，也称单端数组，区别在于：数组是静态空间、vector可以动态扩展。
动态扩展：
	并不是在原空间之后续接新空间、而是找更大的内存空间，然后将原数据拷贝新空间、释放原空间。 
*/

void myprint(int val)
{
	cout << val <<" ";
}
void test01()
{
	vector<int> ve;  //无参
	for (int i = 0; i < 10; i++)
	{
		ve.push_back(i);
	}
	for_each(ve.begin(), ve.end(), myprint);
	cout << endl;

	vector<int>ve2(ve.begin(), ve.end());  //区间的方式构造
	for_each(ve2.begin(), ve2.end(), myprint);
	cout << endl;
	//n个elem构造
	vector<int>ve3(10, 100);  //10个100；
	for_each(ve3.begin(), ve3.end(), myprint);
	cout << endl;
	//拷贝构造
	vector<int>ve4(ve3);  //10个100；
	for_each(ve4.begin(), ve4.end(), myprint);
	cout << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
