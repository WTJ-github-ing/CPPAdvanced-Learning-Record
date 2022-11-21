// �ļ�����34
// ����ʱ�䣺2022/11/21 18:25:27

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//ʵ�ֽ����������ڵ�Ԫ�ػ�����
void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 9; i >=0; i--)
	{
		v2.push_back(i);
	}
	printvector(v1);
	printvector(v2);

	//����
	v1.swap(v2);
	printvector(v1);
	printvector(v2);


}
//swap()���������ڴ�ռ�
void test02()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
	cout << "v1��������" << v1.capacity() << endl;  //�����Ƕ�̬����ġ���Ԥ��һ���ֿռ䡣
	cout << "v1�Ĵ�С��" << v1.size() << endl;

//�����resize()����ָ����С��
	v1.resize(3);
	cout << "v1��������" << v1.capacity() << endl;  //�������䣬����̫���ò��ꡣ
	cout << "v1�Ĵ�С��" << v1.size() << endl; //��С�仯
//ʹ��swap()
	vector<int>(v1).swap(v1);
	cout << "v1��������" << v1.capacity() << endl;  //
	cout << "v1�Ĵ�С��" << v1.size() << endl; 
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
