// �ļ�����31
// ����ʱ�䣺2022/11/21 16:43:04

#include<iostream>
using namespace std;
#include<vector>

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//�������ʹ�С�Ĳ���
void test01()
{
	vector<int> ve;  //�޲�
	for (int i = 0; i < 10; i++)
	{
		ve.push_back(i);
	}
	printvector(ve);

	ve.resize(15); //����ָ����С��

	printvector(ve);

	ve.resize(20,100); //����ָ����С��  //ԭ����С�ڣ���䵽20����100�� 
	printvector(ve);

	ve.resize(10);  //�����ɾ����
	printvector(ve);
	//�ж��Ƿ�Ϊ��
	if (!ve.empty())
	{
		cout << "��Ϊ�ա�����Ϊ��"<<ve.capacity()<<"��СΪ��"<<ve.size() << endl;
	}
	else
	{
		cout << "��" << endl;
	}
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}
