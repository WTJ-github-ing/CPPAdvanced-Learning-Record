#include<iostream>
using namespace std;

/*
���ù���
		1.�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ������
		2.�������ÿ�ģ������б���ǿ�Ƶ��ú���ģ�壻
		3.����ģ��Ҳ���Է������أ�
		4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ�塣
*/

void myPrint(int a,int b)
{
	cout << "���õ�����ͨ����" << endl;
}

template<typename T>
void myPrint(T a, T b)
{
	cout << "���õ���ģ�庯��" << endl;
}

template<typename T>
void myPrint(T a, T b,T c)
{
	cout << "���õ���ģ�庯��(����������" << endl;
}
void test01()
{
	int nums1= 1;
	int nums2 = 2;
	//myPrint(nums1, nums2); //1.�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ������

	myPrint<>(nums1, nums2);//2.�������ÿ�ģ������б���ǿ�Ƶ��ú���ģ�壻

	//3.����ģ��Ҳ���Է������أ�
	int nums3 = 3;
	myPrint(nums1, nums2, nums3);
	myPrint<>(nums1, nums2, nums3);


	//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ�塣
	int c1 = 'a';
	int c2 = 'b';
	myPrint(c1, c2);  //������ͨ��������ʽ����ת�������ﲻ��Ŷ��


}
int main()
{
	test01();
	system("pause");
	return 0;
}
