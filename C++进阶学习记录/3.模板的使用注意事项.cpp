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
	char c = 'c';

	//1.�Զ������Ƶ�
	mySwap(a, b);  //��ȷ
	cout << "a="<<a <<"\n"<< "b=" << b <<"\n"<<"c="<<c<< endl;
	//mySwap(a, c);  //���󣺱����Ƶ���һ�µ���������T��
}

//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ�á�
template<typename T>
void func()  //����func��ɺ���ģ��֮��,����Ҫȷ����T���������͡��޷�ʹ���Զ��Ƶ���
{��
	cout << "func�����ĵ���" << endl;
}

void test01()
{
	//func();
	func<int>();  //mySwap<double>(,);  //����ʹ����ʾָ������
}
int main()
{
	//test();
	test01();

	system("pause");
	return 0;
}
