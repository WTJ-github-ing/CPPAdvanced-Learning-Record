// �ļ�����48
// ����ʱ�䣺2022/11/26 19:28:40

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

bool Rank(int & p1, int &p2)
{
	return p1 > p2;
}

void test01()
{
	list<int>L;  
	L.push_back(1);
	L.push_back(2);
	L.push_back(4);
	L.push_back(5);
	L.push_back(6);
	L.push_back(3);
	printList(L);

	L.reverse();  //��ת
	printList(L);

	//sort(L.begin(), L.end());   //���в�֧��������ʵĵ�������������ʹ�ñ�׼�㷨��
	
	//ʹ�������ڲ����㷨����
	L.sort();  //Ĭ������
	printList(L);
	L.sort(Rank);   //�ṩһ���º��� ���ߺ����ı��������
	printList(L);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
