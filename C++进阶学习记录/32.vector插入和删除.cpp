// �ļ�����32
// ����ʱ�䣺2022/11/21 17:16:04

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//�����ɾ��
void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printvector(v1);

	//����
	v1.insert(v1.begin(), 100);//100 10 ����
	printvector(v1);

	v1.insert(v1.begin(), 2,1000);//��������1000��
	printvector(v1);

	//ɾ��
	v1.erase(v1.begin());
	printvector(v1);

	//���
	//v1.erase(v1.begin(),v1.end());
	v1.clear();
	printvector(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
