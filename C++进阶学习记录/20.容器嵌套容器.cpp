// �ļ�����20
// ����ʱ�䣺2022/11/18 21:20:38

#include<iostream>
using namespace std;

#include<vector>
#include<string>
#include<algorithm>

/*
����Ƕ���������������
*/

//��Ȼ��Ƕ�ס�printҲ��Ƕ�װ�
void myPrint(int val)
{
	cout << "  " << val << "";
}
void MyPrint(vector<int> ve)
{
	for_each(ve.begin(), ve.end(), myPrint);
	cout << endl;
}

void test()
{
	vector<vector<int>> v;

	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i);
		v2.push_back(i);
		v3.push_back(i);
	}

	v4.push_back(2);
	v4.push_back(3);

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	for_each(v.begin(), v.end(), MyPrint);  //�����ԣ��ҵķ��������š�
}

int main()
{
	test();
	system("pause");
	return 0;
}
