// �ļ�����30
// ����ʱ�䣺2022/11/21 16:13:33

#include<iostream>
using namespace std;
#include<vector>

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout<< endl;
}

//��ֵ������
void test01()
{
	vector<int> ve;  //�޲�
	for (int i = 0; i < 10; i++)
	{
		ve.push_back(i);
	}
	printvector(ve);

	vector<int> ve2=ve;  //operator =
	printvector(ve2);

	vector<int> ve3 ; 
	ve3.assign(ve.begin(), ve.end());
	printvector(ve3);

	vector<int> ve4;
	ve4.assign(10,1);  //n��
	printvector(ve4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
