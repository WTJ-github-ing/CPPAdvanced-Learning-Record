// �ļ�����19
// ����ʱ�䣺2022/11/18 20:37:09

#include<iostream>
using namespace std;
/*
vector����Զ����������͡�����ӡ�����
*/

#include<vector>
#include<string>
#include<algorithm>

//�Զ�����������
class Person
{
friend void myPrint(const Person& p);
public:
	Person(string name,int age)
	{
		this->mName = name;
		this->mAge    = age;
	}
private:
	string mName;
	int		  mAge;
};

void myPrint(const Person& p)
{
	cout << "������" << p.mName << "����:" << p.mAge << endl;
}
void test01()
{
	Person p1("sun", 11);
	Person p2("zhu", 12);
	Person p3("sha", 13);

	vector<Person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	Person p4("tang", 14);

	v[0] = p4;
	//v[4] = p4; //������û��push����λ�ø�ֵ��
	
	//����
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
