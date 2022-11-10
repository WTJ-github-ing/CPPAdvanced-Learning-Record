#include<iostream>
using namespace std;

/*
���ú���ģ���װһ������ĺ������Բ�ͬ���������������������
����ѡ������
����char�����int������в��ԡ�
*/

//������ģ��
template<typename T>	
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//�����ģ��
template<typename T>
void SelectSort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;	//�϶����ֵ�±�
		for (int j = i + 1; j < len; j++)
		{
			//�϶��ıȱ����������ֵС�������
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)  //����������Ԫ��
		{
			//char temp;
			//temp = arr[i];
			//arr[i] = arr[max];
			//arr[max] = temp;
			//�ý����ĺ���ģ�壻
			mySwap(arr[i], arr[max]);
		}
	}
}
//���������ģ��
template<typename T>
void printArr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void test01()
{
	//����char���飺
	//char charArr[] = "badcfe";  //������ַ�����
	//int n = sizeof(charArr) / sizeof(charArr[0]);
	//SelectSort(charArr, n);
	//printArr(charArr, n);

	//������������
	int intArr[] = {9,5,8,1,7,5,2,3,7};
	int n = sizeof(intArr) / sizeof(intArr[0]);
	SelectSort(intArr, n);
    printArr(intArr, n);
}
int main()
{
	test01();
	system("pause");
	return 0;
}


