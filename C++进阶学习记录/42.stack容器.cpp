// �ļ�����42
// ����ʱ�䣺2022/11/23 14:25:00

#include<iostream>
using namespace std;
#include<stack>
#include<algorithm>

/*
�Ƚ������ֻ��һ�����ڡ�ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã��������б�����Ϊ��
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
	int num =stk.size();  //��ջ��ʱ����¼
	cout << num << endl;

	stack<int> stk2(stk);  //��������
	int num1 = stk2.size();  //��ջ��ʱ����¼
	cout << num1 << endl;

	// =
	stack<int> stk3;
	stk3 = stk2;
	int num2 = stk3.size();  //��ջ��ʱ����¼
	cout << num2 << endl;

	stack<int> stk4;
	//cout << stk4.top() << endl;  //��Ч
}
int main()
{
	test01();
	system("pause");
	return 0;
}
