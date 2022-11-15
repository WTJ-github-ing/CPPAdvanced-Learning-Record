#pragma once //防止头文件重复包含
#include<iostream>
using namespace std;
#include<string>

#include"Person.h" //包含一下类的头文件

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showInfo()
{
	cout << this->m_name << " " << this->m_age << endl;
}