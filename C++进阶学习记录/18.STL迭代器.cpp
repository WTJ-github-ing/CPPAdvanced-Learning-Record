// �ļ�����18
// ����ʱ�䣺2022/11/18 20:01:50

#include<iostream>
using namespace std;
/*
STL ����õ�������Vector���������Ϊ���飺�������ݡ��������ݡ�
������vector
�㷨��for_each
��������vector<int>::iterator
*/

#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << endl;
}
void test01()
{
	vector<int> v;  //ֱ�Ӷ���һ��vector����v
	//�������в�������
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v[0] = 9;

	//ͨ������������
	//vector<int>::iterator itBegin = v.begin();	// v.begin()��һ����ʼ��������ָ�������е�һ��Ԫ�ء�
	//vector<int>::iterator itEnd = v.end(); // v.begin()��һ��������������ָ�������е����һ��Ԫ�ص���һ��λ�á�
	//��һ�ֱ���
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ���
	//for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//�����ֱ���
	for_each(v.begin(), v.end(), myPrint); //�൱��������ʵ�֡��ص�������
}
int main()
{
	test01();
	system("pause");
	return 0;
}
