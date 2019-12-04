//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2; // 输入两个字符串
//	int len1 = s1.size();
//	int len2 = s2.size(); // 获得两个字符串的长度
//
//	// 开个二维数组
//	int** arr = new int*[len1];
//	for (int i = 0; i < len1; i++)
//	{
//		arr[i] = new int[len2];
//	}
//	
//	// 初始化数组
//	for (int i = 0; i < len1; i++)
//	{
//		for (int j = 0; j < len2; j++)
//		{
//			arr[i][j] = 0; // 初始化数组为0
//		}
//	}
//
//
//	int max_end = 0; // 最长子串的最后的i
//	int max_len = 0; // 最长字串的长度
//	// 开始用字符串填数组的值
//	for (int i = 0; i < len1; i++)
//	{
//		for (int j = 0; j < len2; j++)
//		{
//			if (s1.at(i) == s2.at(j)) // 如果两个字符相等的话
//			{
//				if (i == 0 || j == 0) // 如果在边界上
//				{
//					arr[i][j] = 1;
//				}
//				else
//				{
//					arr[i][j] = arr[i - 1][j - 1] + 1; // 比上一个加1
//				}
//				if (arr[i][j] > max_len)
//				{
//					max_len = arr[i][j];
//					max_end = i;
//				}
//			}
//		}
//	}
//
//	// 打印一下最长的子串，利用max_end找到最后的位置，然后往前走max_len就是这个子串
//	for (int i = max_end - max_len+1; i < max_end + 1; i++)
//	{
//		cout << s1[i];
//	}
//
//
//
//	return 0;
//}