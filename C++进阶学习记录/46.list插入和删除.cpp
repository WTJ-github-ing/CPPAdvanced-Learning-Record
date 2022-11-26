// �ļ�����46
// ����ʱ�䣺2022/11/23 17:01:59

#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L;
	L.push_back(3);
	L.push_back(4);
	L.push_back(5);

	L.push_front(2);
	L.push_front(1);
	printList(L);

	L.pop_back();
	L.pop_front();
	printList(L);

	//����  ����˳�򴢴棬���������������õ�������
	//����λ����advance
	list<int>::iterator it = L.begin();  //׼��һ��������
	advance(it, 2);  //������ƫ��
	L.insert(it, 2,5000);   //��2��λ�ò���2��5000.
	printList(L);

	//ɾ������λ�á�
	list<int>::iterator it2 = L.begin();  //׼��һ��������
	advance(it2, 2);  //������ƫ��
	L.erase(it2);
	printList(L);

	//�Ƴ�
	L.push_back(10000);  //�Ȳ�һ��
	L.push_back(10000);  //�Ȳ�һ��
	printList(L);
	L.remove(10000);  //ֻ��Ҫһ��ֵ��ɾ������ƥ���
	printList(L);
	L.remove(5000);
	printList(L);

	//��� 
	L.clear();
	printList(L);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
