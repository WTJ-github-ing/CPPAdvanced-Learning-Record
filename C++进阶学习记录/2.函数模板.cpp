/*
���ͱ�̣���Ҫ���õļ�����ģ��
C++�ṩ����ģ�壬����ģ�����ģ��
*/
//1.����ģ���﷨
/*
���ã�����һ��ͨ�ú������� ��������ֵ���� �� �β����Ϳ� �Բ�����ָ������һ����������������� void func (int a)
�﷨��template<typename T>
������������

	template--��������ģ��
	typename--���浽�����ķ�����һ���������ͣ�������class����
	T--ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ��
*/

#include<iostream>
using namespace std;

//������������
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
//��������������
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

void test()
{
	//int a = 10;
	//int  b = 11;
	//swapInt(a, b);
	//cout << a << "++++ + "<<  b << endl;

	double a = 10.01;
	double  b = 11.12;
	swapDouble (a, b);
	cout << a << "++++ + " << b << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}
