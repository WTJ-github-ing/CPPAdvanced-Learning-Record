#include<iostream>
using namespace std;
#include<string>

/*����ģ���ע������:
	1.�Զ������Ƶ��������Ƶ���һ�µ���������T��
	2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ�á�
*/

template<typename T>		//����һ��ģ�壬���߱༭�������������ŵ�T��Ҫ����T��һ��ͨ�õ��������͡�ʵ�ʾ��ǽ����Ͳ�������typename��class ,û����

void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a = 10;
	int b = 20;

	//1.�Զ������Ƶ�
	mySwap(a, b);  //��ȷ
	cout << "a="<<a <<"\n"<< "b=" << b << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}
