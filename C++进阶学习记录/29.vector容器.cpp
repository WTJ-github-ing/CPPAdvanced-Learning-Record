// �ļ�����29
// ����ʱ�䣺2022/11/20 21:40:29

#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
/*
vector���������飬Ҳ�Ƶ������飬�������ڣ������Ǿ�̬�ռ䡢vector���Զ�̬��չ��
��̬��չ��
	��������ԭ�ռ�֮�������¿ռ䡢�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䡢�ͷ�ԭ�ռ䡣 
*/

void myprint(int val)
{
	cout << val <<" ";
}
void test01()
{
	vector<int> ve;  //�޲�
	for (int i = 0; i < 10; i++)
	{
		ve.push_back(i);
	}
	for_each(ve.begin(), ve.end(), myprint);
	cout << endl;

	vector<int>ve2(ve.begin(), ve.end());  //����ķ�ʽ����
	for_each(ve2.begin(), ve2.end(), myprint);
	cout << endl;
	//n��elem����
	vector<int>ve3(10, 100);  //10��100��
	for_each(ve3.begin(), ve3.end(), myprint);
	cout << endl;
	//��������
	vector<int>ve4(ve3);  //10��100��
	for_each(ve4.begin(), ve4.end(), myprint);
	cout << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
