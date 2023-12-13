// 指针1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int indexOf(const char *s1, const char *s2)
{
    int a = 0;
    int index = -1;
    int length = strlen(s2) - strlen(s1);
    for (int i = 0;i < strlen(s2);i++)
    {
        if (s2[i] == s1[0])
        {
            index = i + 1;
        }
    }
    for (int i = 0;i < index;i++)
    {
        if (s2[i] == ' ')a = a + 1;
    }
    if (strlen(s1) >= 2)
    {
        for (int i = index;i < index - 1 + strlen(s1);i++)
        {
            if (s2[i] != s1[i - index + 1])
            {
                index = a - 1;
                break;
            }
        }
    }
    return index - a;


}

int main()
{
    const int a = 999;
    char s1[a], s2[a];
    cout << "Enter the first string: ";
    cin.getline(s1, a);
    cout << "Enter the second string: ";
    cin.getline(s2, a);
    cout << "indexof(" << '"';
    for (int i = 0;i < strlen(s1);i++)cout << s1[i];
    cout << '"' << "," << '"';
    for (int i = 0;i < strlen(s2);i++)cout << s2[i];
    cout << '"' << ")is:" << indexOf(s1, s2);
    return 0;


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
