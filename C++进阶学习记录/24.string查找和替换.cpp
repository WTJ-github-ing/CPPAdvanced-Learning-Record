// �ļ�����24
// ����ʱ�䣺2022/11/19 17:22:22

#include<iostream>
using namespace std;
#include<string>

/*
�ַ����������滻������ѧϰKMP�㷨��
*/

void test01()
{
	string str1 = "abcdede";
	int pos = str1.find("de");  //�������� �ҵ���һ��λ�ã����򷵻�-1
	cout << pos << endl;

	pos =str1.rfind("d");  ////�������� �ҵ���һ��λ�ã�
	cout << pos << endl;
}

void test02()
{
	string str2 = "abcdefgh";
	str2.replace(1, 3, "1111");
	cout << str2 << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
