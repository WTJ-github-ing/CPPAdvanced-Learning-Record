#include<iostream>
using namespace std;
/*
��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
����ģ�����ʱ����������Զ������Ƶ������ᷢ������ת��
���������ʾָ�����͵ķ�ʽ�������Զ�������ʽ����ת����
*/
//1.��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
int  NormalFuncAdd(int nums1,int nums2)
{
	return nums1 + nums2;
}

//2.����ģ�����ʱ����������Զ������Ƶ������ᷢ������ת��
template<typename T>

T  TemplateFuncAdd(T nums1, T nums2)
{
	return nums1 + nums2;
}


void test01()
{
	//��ͨ��������ʱ ��ʽ����ת��
	//int a = 1;
	//int b = 2;
	//NormalFuncAdd(a, b);
	//cout << "a=" << a <<" "<< "b=" << b <<" "<<"sum"<< NormalFuncAdd(a, b)<< endl;

	//int e = 1;
	//int c = 'c';
	//cout << c << endl;
	//NormalFuncAdd(e, c);  //�Ὣ��c��ת��Ϊ���� ��99��  �ַ���תΪ�����ͣ���ʽ����ת��
	//cout << "e=" << e << " " << "c=" << c << ""<<"sum"<< NormalFuncAdd(e, c) <<endl;

	int a = 1;
	int b = 2;
	char c = 'c';
	cout << TemplateFuncAdd(a,b)<<endl;
	//����ģ�����ʱ����������Զ������Ƶ������ᷢ������ת��
	//cout << TemplateFuncAdd(a, c) << endl; //����
	cout << TemplateFuncAdd<int>(a, c) << endl;   //���������ʾָ�����͵ķ�ʽ�������Զ�������ʽ����ת����

}

int main()
{
	test01();
	system("pause");
	return 0;
}
