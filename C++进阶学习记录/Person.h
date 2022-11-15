#pragma once //防止头文件重复包含
#include<iostream>
using namespace std;
#include<string>

template<class T1, class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;

	Person(T1 name, T2 age);
	void showInfo();
};