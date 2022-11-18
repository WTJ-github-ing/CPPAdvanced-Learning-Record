// 文件名：19
// 创建时间：2022/11/18 20:37:09

#include<iostream>
using namespace std;
/*
vector存放自定义数据类型、并打印输出。
*/

#include<vector>
#include<string>
#include<algorithm>

//自定义数据类型
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
	cout << "姓名：" << p.mName << "年龄:" << p.mAge << endl;
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
	//v[4] = p4; //不能向没有push过的位置赋值。
	
	//遍历
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
