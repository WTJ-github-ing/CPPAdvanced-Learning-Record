// �ļ�����27
// ����ʱ�䣺2022/11/20 21:12:34

#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str = "hello";

	str.insert(0, "111");
	cout << str << endl;

	//str.insert(0, '0');  //�����Բ����ַ�
	
	//ɾ��
	str.erase(0, 3);  //������ɾ�������
	cout << str << endl;  
}

int main()
{
	test01();
	system("pause");
	return 0;
}
