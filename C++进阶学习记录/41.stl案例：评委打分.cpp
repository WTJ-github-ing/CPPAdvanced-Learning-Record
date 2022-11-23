// �ļ�����41
// ����ʱ�䣺2022/11/23 12:30:38


/*
��5��ѡ�֣�ABCDE ,10����ί�ֱ��ѡ�ִ�֣�ȥ����ߡ���ͷ֣�ȡƽ���֡�
*/
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>

//ѡ��
class Person
{
friend void ShowPersonScore(vector<Person>&ve);
friend void GivePersonScore(vector<Person>&ve, int m);
friend bool RankPerosnScore(Person& p1, Person &p2);
public:
	Person() {};
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
private:
	string m_name;
	int m_score;  //���յ÷֡�
};

//��������5��ѡ�ֵ�����
void createPerson(vector<Person> &ve,int n)
{
	//����n��ѡ�֣�n=5;
	for (int i = 0; i < n; i++)
	{
		string str1 = "ѡ��";
		char str2 = 65 + i;

		string name = str1 + str2;
		int score = 0;  //����һ���÷ֳ�ʼ����

		//ÿ��ѭ������ѡ����n,����һ��ѡ��
		Person p(name, score);
		ve.push_back(p);
	}

}
//��ֺ�����m����ί���
void GivePersonScore(vector<Person>&ve,int  m)  
{
	for (vector<Person>::iterator it = ve.begin(); it != ve.end(); it++)  //��forѭ����ve��ÿһ��Person��score��ֵ����
	{
		deque<int> de;
		//����m������
		for (int i = 0; i < m; i++)
		{
			int temp_score = rand() % 41 + 60;  //����60-100;
			de.push_back(temp_score); 
		}
		//��de�е�m�����֣�����ȥ��ֵ����ƽ��
		sort(de.begin(), de.end());
		de.pop_back();
		de.pop_front();
		int sum_score = 0;
		for (deque<int>::const_iterator it = de.begin(); it != de.end(); it++)
		{
			sum_score += *it  ;
		}
		//cout <<sum_score<< endl;
		(*it).m_score = sum_score / m;
	}
}
//��ʾ�÷�
void ShowPersonScore(vector<Person>&ve)
{
	for (vector<Person>::iterator it = ve.begin(); it != ve.end(); it++)
	{
		cout << (*it).m_name<<"�ĵ÷���"<< (*it) .m_score<< endl;
	}
}
//�Զ�������
bool RankPerosnScore(Person& p1, Person &p2)
{
	return p1.m_score > p2.m_score;
}

void PrintRank(vector<Person>&ve)
{
	sort(ve.begin(), ve.end(), RankPerosnScore);
}
void test01()
{
	//����5��ѡ��
	vector<Person>v;					 //���ѡ�ֵ�����
	createPerson(v, 5);

	//��ѡ�ִ��
	GivePersonScore(v, 10);

	//��ʾ�÷�
	//ShowPersonScore(v);

	cout << endl;
	//����÷�����������
	PrintRank(v);

	ShowPersonScore(v);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
