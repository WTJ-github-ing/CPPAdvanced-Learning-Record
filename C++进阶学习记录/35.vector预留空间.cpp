// �ļ�����35
// ����ʱ�䣺2022/11/21 19:42:09

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
/*
Ԫ����Ч����size��ռ�����capacity���ʱ��vector�ڲ��ᴥ�����ݻ���:
		�����¿ռ�
		����Ԫ�ء�
		�ͷžɿռ䡣
����vector�ڶ�̬��չ����ʱ����չ������
reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�
*/

void test01()
{
	vector<int>v1;
	//���һ��ʼԤ����10w�������Ͳ��ÿ����¿ռ���  һ����<2��Ԥ����Ϊ�����þɿռ䡣
	v1.reserve(100000);
	int num = 0;  //��չ����
	int *p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);  //�뿴push�Ĺ����У���չ�˶��ٴΡ�
		if (p!=&v1[0])  
		{
			p = &v1[0];  //��pָ��v1�׵�ַ��  ��Ϊÿ����չ�������¿���һ���ڴ棬����ֻ���׵�ַ��û�䣬������չ�ˡ�
			num++;
		}
	}
	cout << num << endl;  //��չ30�Ρ�


}

int main()
{
	test01();
	system("pause");
	return 0;
}
