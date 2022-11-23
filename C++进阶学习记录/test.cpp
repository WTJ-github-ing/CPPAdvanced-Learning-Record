// 文件名：test
// 创建时间：2022/11/14 21:42:28

#include<iostream>
using namespace std;
#include<string>


int main()
{
	int n = 6;
	for (int i = 0; i < n; i++)
	{
		string str1 = "选手";
		char str2 = 65+i;
		string name = str1 + str2;
		cout <<name<< endl;
	}

	system("pause");
	return 0;
}
