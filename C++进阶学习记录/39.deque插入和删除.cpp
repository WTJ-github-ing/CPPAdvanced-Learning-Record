// �ļ�����39
// ����ʱ�䣺2022/11/22 19:59:50

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

	//��deque�����в����ɾ������
	de.push_back(10); //β������
	printdeque(de);

	de.push_front(-1); //ͷ������
	printdeque(de);

	de.pop_back();  //ɾ�����һ��
	printdeque(de);
	de.pop_front(); //ɾ����һ��
	printdeque(de);

	//ָ��λ��
	de.insert(de.begin(),2,-1);  //2��-1
	printdeque(de);

	//����ķ�ʽ��
	deque<int>de2;
	de2.push_back(0);
	de2.insert(de2.begin(),de.begin(),de.end());  //��de2��beginλ�ò���de����
	printdeque(de2);

	//ɾ������
	de2.erase(de2.begin()); //��ĩβɾ��
	printdeque(de2);

	//ɾ������λ��
	deque<int>::iterator it = de2.begin();
	it++;  //ɾ���ڶ���Ԫ�� 0  1
	de2.erase(it);
	printdeque(de2);

	//������ɾ��
	de2.erase(de2.begin(),de2.end());
	printdeque(de2);

	//����ɾ��
	de.clear();
	printdeque(de);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
