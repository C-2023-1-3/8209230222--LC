// 指针3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>
using namespace std;

void arrange(int p[], int size);

int main()
{
	int size{}, a;
	int* p = new int[size];
	cin >> size;
	for (int i = 0;i < size;i++)
		cin >> *(p + i);
	cout  << "请输入你想要输出的数组元素" << endl;
	cin >> a;
	cout << "p[" << a - 1 << "] = " << *(p + a - 1) << endl;
	arrange(p, size);
	for (int b = 0;b < size;b++)
		cout << *(p + b) << " ";
	cout << endl;
	return 0;
	if (p != NULL)delete p;
}

void arrange(int p[], int size)
{
	int temp;
	for (int n = 0;n < size;n++)
		for (int m = 0;m < size - 1;m++)
			if (*(p + m) > *(p + m + 1))
			{
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
