// 文件名：42
// 创建时间：2022/11/23 14:25:00

#include<iostream>
using namespace std;
#include<stack>
#include<algorithm>

/*
先进后出，只有一个出口。只有顶端的元素才可以被外界使用，不允许有遍历行为。
*/
void test01()
{
	stack<int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	int a=stk.top();
	stk.pop();
	int b = stk.top();
	cout << b<<endl;
	bool flag = stk.empty();
	cout << flag << endl;
	int num =stk.size();  //入栈的时候会记录
	cout << num << endl;

	stack<int> stk2(stk);  //拷贝构造
	int num1 = stk2.size();  //入栈的时候会记录
	cout << num1 << endl;

	// =
	stack<int> stk3;
	stk3 = stk2;
	int num2 = stk3.size();  //入栈的时候会记录
	cout << num2 << endl;

	stack<int> stk4;
	//cout << stk4.top() << endl;  //无效
}
int main()
{
	test01();
	system("pause");
	return 0;
}
