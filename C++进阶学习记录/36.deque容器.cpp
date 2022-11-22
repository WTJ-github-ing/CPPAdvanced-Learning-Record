// �ļ�����36
// ����ʱ�䣺2022/11/22 17:56:47

#include<iostream>
using namespace std;
/*
����˫�����飬���Զ�ͷ�˽��в����ɾ��������


deque��vector���������ڣ�
	vector����ͷ���Ĳ���ɾ��Ч�ʵͣ���Ҫ�ƶ�Ԫ�أ�������Խ��Ч��Խ�͡�
	deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȱ�vector�졣
	vector����Ԫ��ʱ���ٶȻ��deque�죬��������ڲ�ʵ���йء�

deque�ڲ�����ԭ��
	deque�ڲ���һ���п�����ά��ÿ�λ������е����ݣ��������д����ʵ���ݡ�
	�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ��ַ��

������֧��������ʡ�
*/
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
void myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	deque<int> de;  //Ĭ�Ϲ���
	for (int i=0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);

	for_each(de.begin(), de.end(), myprint);
	cout << endl;

	//����ķ�ʽ
	deque<int> de2(de.begin(), de.end());
	printdeque(de2);

	for_each(de2.begin(), de2.end(), myprint);
	cout << endl;

	//n��Ԫ�صķ�ʽ
	deque<int>de3(10, 1);
	printdeque(de3);

	for_each(de3.begin(), de3.end(), myprint);
	cout << endl;

	//��������ķ�ʽ
	deque<int>de4(de3);
	printdeque(de4);

	for_each(de4.begin(), de4.end(), myprint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
