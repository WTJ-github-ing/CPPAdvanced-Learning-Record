// �ļ�����33
// ����ʱ�䣺2022/11/21 18:01:15

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
		cout << v1[i] << " ";  //[]����
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";  //at����
	}
	cout << endl;

	//��ȡ��һ��Ԫ�ء�
	cout << "��һ��Ԫ�أ�" << v1.front() << endl;

	//��ȡ����Ԫ�ء�
	cout << "���Ԫ�أ�" << v1.back() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}
