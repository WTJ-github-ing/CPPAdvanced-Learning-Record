// �ļ�����16
// ����ʱ�䣺2022/11/16 21:40:28

#include<iostream>
using namespace std;


/*
ʵ��һ��ͨ�õ������࣬Ҫ��
1.���Զ������������ͺ��Զ�����������ͽ��д洢��
2.�����������ݴ洢��ջ����
3.���캯�����Դ��������������
4.�ṩ��Ӧ�Ŀ��������Լ�operator=��ֹǳ������
5.�ṩβ�巨��βɾ���������е����ݽ���������ɾ����
6.����ͨ���±�ķ�ʽ���������е�Ԫ�أ�
7.���Ի�ȡ�����е�ǰԪ�ظ����������������
*/

template<class T>
class myArray
{
public:
	//���캯�� �������������
	myArray(int n)
	{
		this->mArray_n = n;
		this->mArray_size = 0;
		this->pArray_Address = new T[this->mArray_n];	//�����鿪�ٵ�����������ָ��
		// ���Դ��룺
		cout << "MyArray �вι��� �����á�" << endl;
	}
	//��������

	//operator=  ���غ���

	//β�巨��βɾ���������е����ݽ���������ɾ��

	//�±� ���������е�Ԫ��

	//��ȡ�����е�ǰԪ�ظ��������������
	void PrintArray_n_and_size()
	{
		cout << "���鵱ǰԪ�ظ�����" << mArray_size << "  " << "����������" << mArray_n << endl;
	}
	//��������
private:
	//������� 
	T   *pArray_Address;		//����һ�������ڶ�����ָ��
	int  mArray_n;					//��������
	int  mArray_size;   			//��ǰ����

};


void test01()
{
	myArray <int>myarray(3);
	myarray.PrintArray_n_and_size();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
