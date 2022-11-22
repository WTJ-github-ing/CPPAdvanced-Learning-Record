// �ļ�����40
// ����ʱ�䣺2022/11/22 20:45:37

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

//��deque�е����ݴ�ȡ������
void test01()
{
	deque<int> de;  //Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		de.push_back(i);
	}
	printdeque(de);

	//����������������
	cout << de.at(0) << endl;
	
	cout << de[0] << endl;
	//���ص�һ��
	cout << de.front() << endl;
	//�������һ��
	cout << de.back() << endl;


	//����
	de.insert(de.begin(), 2, 8);  //2��-1
	sort(de.begin(),de.end());  //����
	printdeque(de);
	sort(de.rbegin(), de.rend());  //����
	printdeque(de);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
