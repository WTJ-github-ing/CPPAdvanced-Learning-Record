// 文件名：test
// 创建时间：2022/11/14 21:42:28

#include<iostream>
using namespace std;

class Solution
{
public:
	int climbStairs(int n)
	{
		int result;
		if (n == 1)
		{
			result = 1;
		}
		if (n == 2)
		{
			result = 2;
		}
		if (n >= 3)
		{
			result = climbStairs(n - 1) + climbStairs(n - 2);
		}
		return result;
	}
};

int main()
{
	Solution s;
	int ss=s.climbStairs(8);
	cout << ss << endl;
	system("pause");
	return 0;
}
