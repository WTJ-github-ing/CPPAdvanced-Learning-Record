// �ļ�����43
// ����ʱ�䣺2022/11/23 14:46:01

#include<iostream>
using namespace std;
#include<queue>
#include<algorithm>

/*
queue ����  �Ƚ��ȳ�  ��������   ,�����Բ�ӣ�һ���ܵ���
��һ��������һ���Ƴ��������������
*/
void test01()
{
	queue<int>qu;
	qu.push(1);
	qu.push(2);
	qu.push(3);

	cout << qu.front() << qu.back() << qu.size() << qu.empty() << endl;
	qu.pop();  //��ͷ������β��
	cout << qu.front() << qu.back() << qu.size() << qu.empty() << endl;

	queue<int>qu1(qu);
	cout << qu1.front() << qu1.back() << qu1.size() << qu1.empty() << endl;

	queue<int>qu2 = qu;
	cout << qu2.front() << qu2.back() << qu2.size() << qu2.empty() << endl;

}


int main()
{
	test01();
	system("pause");
	return 0;
}
