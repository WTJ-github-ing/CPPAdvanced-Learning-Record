// �ļ�����test
// ����ʱ�䣺2022/11/14 21:42:28

#include<iostream>
using namespace std;
#include<string>


int main()
{
	int n = 6;
	for (int i = 0; i < n; i++)
	{
		string str1 = "ѡ��";
		char str2 = 65+i;
		string name = str1 + str2;
		cout <<name<< endl;
	}

	system("pause");
	return 0;
}
