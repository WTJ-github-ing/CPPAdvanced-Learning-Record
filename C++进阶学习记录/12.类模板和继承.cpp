// �ļ�����12
// ����ʱ�䣺2022/11/14 20:55:47
/*
	������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
	�����ָ�����������޷�����������ڴ�
	�����ָ��������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ�塣
*/

#include<iostream>
using namespace std;

template<class T>
class Base
{
public:
	T m;
	void showinfo()
	{
		cout << this->m<< endl;
	}
};
//class Son :public Base //����ġ�������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T�����͡���ָ�����������޷�����������ڴ�
//{
//
//};
class Son:public Base<int>
{

};

//�����ָ��������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ�塣
template<class T>
class Son1 :public Base<T>
{

};
void test01()
{
	Son son;
	son.m = 1;
	son.showinfo();

	Son1 <char>son1;
	son1.m = 'c';
	son1.showinfo();


	
}


int main()
{
	test01();
	system("pause");
	return 0;
}
