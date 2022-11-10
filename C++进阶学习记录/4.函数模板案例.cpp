#include<iostream>
using namespace std;

/*
利用函数模板封装一个排序的函数，对不同的数据类型数组进行排序
降序，选择排序
利用char数组和int数组进行测试。
*/

//交换的模板
template<typename T>	
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//排序的模板
template<typename T>
void SelectSort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;	//认定最大值下标
		for (int j = i + 1; j < len; j++)
		{
			//认定的比遍历出的最大值小，则更新
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)  //交换这两个元素
		{
			//char temp;
			//temp = arr[i];
			//arr[i] = arr[max];
			//arr[max] = temp;
			//用交换的函数模板；
			mySwap(arr[i], arr[max]);
		}
	}
}
//再来个输出模板
template<typename T>
void printArr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void test01()
{
	//测试char数组：
	//char charArr[] = "badcfe";  //无序的字符数组
	//int n = sizeof(charArr) / sizeof(charArr[0]);
	//SelectSort(charArr, n);
	//printArr(charArr, n);

	//测试整型数组
	int intArr[] = {9,5,8,1,7,5,2,3,7};
	int n = sizeof(intArr) / sizeof(intArr[0]);
	SelectSort(intArr, n);
    printArr(intArr, n);
}
int main()
{
	test01();
	system("pause");
	return 0;
}


