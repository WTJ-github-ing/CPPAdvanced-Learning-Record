// �ļ�����21
// ����ʱ�䣺2022/11/19 11:16:51

#include<iostream>
using namespace std;
#include<string>
/*
�ַ���string������һ���ࣻ
string��char*������
	char*��һ��ָ�룻
	string��һ���࣬�������װ��char*,��������ַ�������һ��char*�͵�������
�ص㣺
	��װ�кܶ��Ա������find��copy��delete��replace��insert
	string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ�磬�����ڲ����и���

string���캯����
	string();//����һ���յ��ַ���������string str;
	string(const char* s);//ʹ���ַ���s��ʼ����
	string(const string& str);//ʹ��һ��string�����ʼ����һ��string����;
	string(int n,char c);//ʹ��n���ַ�c��ʼ��;
*/
//string���캯����
void test001()
{
	string s1; //Ĭ�Ϲ���
	s1 = "hhh";

	const char*  s=  "hello world";
	string s2(s);

	const string & str = "world hello";
	string s3(str); 

	int n = 2;
	char c = 'a';
	string s4(n,c);  //����aa

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	for (char c : s1)  //ѭ�������
	{
		printf("%c ", c);
	}
}
int main()
{
	test001();
	system("pause");
	return 0;
}
