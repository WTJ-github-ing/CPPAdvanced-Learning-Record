// �ļ�����25
// ����ʱ�䣺2022/11/19 17:47:36

#include<iostream>
using namespace std;
#include<string>

/*
�ȽϷ�ʽ�������ַ���ASCII����жԱȡ�
= ����0
 >        1
 <		  -1
*/

void test01()
{
	string str1 = "0123456";
	string str2 = "abcdefg";

	int res = str1.compare(str2);  //�����ң��Ƚ�ASCII���ȽϹ�������һ���ַ����Ⱦ�ͣ�ˡ�
	cout << res << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
