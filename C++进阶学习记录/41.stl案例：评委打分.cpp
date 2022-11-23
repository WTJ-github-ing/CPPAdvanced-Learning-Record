// 文件名：41
// 创建时间：2022/11/23 12:30:38


/*
有5名选手，ABCDE ,10个评委分别对选手打分，去掉最高、最低分，取平均分。
*/
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>

//选手
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
	int m_score;  //最终得分。
};

//创建包含5名选手的容器
void createPerson(vector<Person> &ve,int n)
{
	//创建n个选手，n=5;
	for (int i = 0; i < n; i++)
	{
		string str1 = "选手";
		char str2 = 65 + i;

		string name = str1 + str2;
		int score = 0;  //先做一个得分初始化；

		//每次循环依据选手数n,创建一个选手
		Person p(name, score);
		ve.push_back(p);
	}

}
//打分函数：m个评委打分
void GivePersonScore(vector<Person>&ve,int  m)  
{
	for (vector<Person>::iterator it = ve.begin(); it != ve.end(); it++)  //用for循环给ve里每一个Person的score赋值。，
	{
		deque<int> de;
		//给出m个分数
		for (int i = 0; i < m; i++)
		{
			int temp_score = rand() % 41 + 60;  //分数60-100;
			de.push_back(temp_score); 
		}
		//将de中的m个数字，排序，去极值，求平均
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
//显示得分
void ShowPersonScore(vector<Person>&ve)
{
	for (vector<Person>::iterator it = ve.begin(); it != ve.end(); it++)
	{
		cout << (*it).m_name<<"的得分是"<< (*it) .m_score<< endl;
	}
}
//自定义排序
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
	//创建5民选手
	vector<Person>v;					 //存放选手的容器
	createPerson(v, 5);

	//给选手打分
	GivePersonScore(v, 10);

	//显示得分
	//ShowPersonScore(v);

	cout << endl;
	//输出得分排序后的排名
	PrintRank(v);

	ShowPersonScore(v);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
