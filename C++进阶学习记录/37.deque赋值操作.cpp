// �ļ�����37
// ����ʱ�䣺2022/11/22 19:24:28

#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

void printdeque(const deque<int>& d)  //ֻ��״̬��
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it=100 ;//��const �����޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> de;  //Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);
	//���صķ�ʽ��ֵ��
	deque<int>de2 = de;
	printdeque(de2);
	//�� [begin,end)�����е����ݿ�����ֵ������
	deque<int>de3(de.begin(), de.end());
	printdeque(de3);
	//��n��Ԫ�ؿ�����ֵ������
	deque<int>de4(10, 1);
	printdeque(de4);
	//assign
	deque<int>de5;
	de5.assign(de4.begin(), de4.end());
	printdeque(de5);


}
int main()
{
	test01();
	system("pause");
	return 0;
}
