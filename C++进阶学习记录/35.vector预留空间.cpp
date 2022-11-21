// 文件名：35
// 创建时间：2022/11/21 19:42:09

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
元素有效个数size与空间容量capacity相等时，vector内部会触发扩容机制:
		开辟新空间
		拷贝元素。
		释放旧空间。
减少vector在动态扩展容量时的扩展次数。
reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/

void test01()
{
	vector<int>v1;
	//如果一开始预留了10w个数，就不用开辟新空间了  一般是<2倍预留、为了利用旧空间。
	v1.reserve(100000);
	int num = 0;  //扩展次数
	int *p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);  //想看push的过程中，扩展了多少次。
		if (p!=&v1[0])  
		{
			p = &v1[0];  //让p指向v1首地址。  因为每次扩展都是重新开辟一份内存，所以只看首地址变没变，就是扩展了。
			num++;
		}
	}
	cout << num << endl;  //扩展30次。


}

int main()
{
	test01();
	system("pause");
	return 0;
}
