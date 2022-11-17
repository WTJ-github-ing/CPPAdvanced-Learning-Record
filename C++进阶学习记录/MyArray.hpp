//�Լ���ͨ�õ�������
#pragma once
#include<iostream>
using namespace std;
#include<string>

template<class T>
class MyArray
{

public:
	//�вι��캯�� �����������������ʼ������size�����ٵ�����
	MyArray(int n)
	{
		this->mArray_Capacity = n;
		this->mArray_size = 0;
		this->pArray_Address = new T [this->mArray_Capacity];	     //�����鿪�ٵ�����������ָ��
		// ���Դ��룺
		//cout << "MyArray �вι��챻���á�����Ԫ������Ϊ��"<<typeid(this->temptype).name()<<endl;
	}
	//��������
	MyArray(const MyArray& arr)
	{
		this->mArray_Capacity = arr.mArray_Capacity;
		this->mArray_size = arr.mArray_size;
		//this->pArray_Address = arr.pArray_Address;			 //ָ�벻��ֱ��������ֵ��ǳ���������ظ��ͷš�
		this->pArray_Address=new T[arr.mArray_Capacity];  //�����ڶ������ٿռ䡢���
		//��arr�е����ݿ�������
		for (int i = 0; i < this->mArray_size; i++)
		{
			this->pArray_Address[i] = arr.pArray_Address[i];
		}
		//cout << "���������á�" << endl;
	}
	//operator=  ���غ���  
	MyArray& operator=(const MyArray &arr)  //������������ã�����ʽ
	{
		//���ж�ԭ�������Ƿ������ݣ������ͷš�
		if (this->pArray_Address != NULL)
		{
			delete[] this->pArray_Address;
			this->pArray_Address = NULL;
			this->mArray_Capacity = 0;
			this->mArray_size = 0;
		}
		this->mArray_Capacity = arr.mArray_Capacity;
		this->mArray_size = arr.mArray_size;
		this->pArray_Address = new T[arr.mArray_Capacity];
		for (int i = 0; i < this->mArray_size; i++)
		{
			this->pArray_Address[i] = arr.pArray_Address[i];
		}
		//cout << "���ر����á�" << endl;
		return *this;
	}

	//β�巨�������е����ݽ�������
	void Push_Back(const T &value) //��ֹ���ݱ��޸ģ�const ,���õķ�ʽ
	{
		//�ж������Ƿ�����
		if (this->mArray_size == this->mArray_Capacity)
		{

			return;
		}
		this->pArray_Address[this->mArray_size] = value;
		this->mArray_size++;
	}

	//βɾ���������е����ݽ���ɾ��
	void Pop_Back() //��ֹ���ݱ��޸ģ�const ,���õķ�ʽ
	{
		//���ʲ������һ��Ԫ�ء��߼��ϵ�ɾ����
		if (this->mArray_size == 0)
		{
			return;
		}
		this->mArray_size--;   	//this->pArray_Address[this->mArray_size - 1] = NULL;
	
	}

	//�±� ���������е�Ԫ��  ����[]
	T& operator[](int index)
	{
		return this->pArray_Address[index];
	}
	
	//��ȡ�����е�ǰԪ�ظ��������������
	void PrintArray_Capacity_and_size()
	{
		cout << "���鵱ǰԪ�ظ�����" << mArray_size << "  " << "����������" << mArray_Capacity << endl;
	}

	//��Ū�����TԪ�صĺ���
	void PrintArrayInfo()
	{
		for (int i = 0; i < this->mArray_size; i++)
		{
			cout << "��" << i << "��Ԫ�أ�" << this->pArray_Address[i] << endl;
		}
	}

	int Getsize()
	{
		return  this->mArray_size;
	}

	//��������
	~MyArray()
	{
		if (this->pArray_Address != NULL)
		{
			delete[] this->pArray_Address;
			this->pArray_Address = NULL;  //�ÿա���ֹ��Ұָ�롣
		}
		//cout << "MyArray ���� �����á�" << endl;
	}
private:
	//������� 
	T   *pArray_Address;		//����һ�������ڶ�����ָ��
	int  mArray_Capacity;		//��������
	int  mArray_size;   			//��ǰ����
	T temptype;						//��ǰ��������
};