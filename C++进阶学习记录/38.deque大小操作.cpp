// �ļ�����38
// ����ʱ�䣺2022/11/22 19:38:59

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
//��deque�����Ĵ�С���в�����
void isempty(const deque<int>&de)
{
	if (!de.empty())
	{
		cout << "�ǿ�" << endl;
	}
	else
	{
		cout << "��" << endl;
	}
}

void deque_size(const deque<int>&de)
{
	cout << de.size() << endl;
}
void test01()
{
	deque<int> de;  //Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);
	//�Ƿ�Ϊ�յ��ж�
	isempty(de);
	//������С����Ԫ�صĸ�����
	deque_size(de);
	//����ָ���������ȣ��䳤����Ĭ��ֵ0���롣
	de.resize(15);
	printdeque(de);
	//
	de.resize(20,1);
	printdeque(de);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
