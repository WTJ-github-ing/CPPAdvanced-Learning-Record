// �ļ�����47
// ����ʱ�䣺2022/11/26 19:05:28

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
	list<int>L;  //��֧��������ʡ�������at��[]����Ԫ�ء�ֻ��ǰ�ƺͺ��ơ�

	L.push_back(1);
	L.push_back(2);
	L.push_back(3);
	printList(L);
	//�ӿ�ֻ��
	cout << L.front() << " ";//��һ��
	cout << L.back() << endl;

	//��֤list��������֧��������ʣ�
	list<int>::iterator it = L.begin();
	//advance(it, 2);
	it++;  //����  ��--Ҳ���ԡ�ֻ֧��˫��
	//it = it + 1; // ������
}

int main()
{
	test01();
	system("pause");
	return 0;
}
