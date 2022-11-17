// 文件名：test
// 创建时间：2022/11/14 21:42:28

#include<iostream>
using namespace std;
#include<string>


int lengthOfLastWord(string s)
{
	int n = s.size(); //字符长度
	for (int i = n-1; i > 0; i--)
	{
		if (!s[i])
		{
			n = n - 1;
		}
	}
	return n;
}

int main()
{
	string s = "12345        ";
	int len=lengthOfLastWord(s);
	cout << len << endl;
	system("pause");
	return 0;
}
