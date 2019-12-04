//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	// 动态规划求两个字符串的最长子序列
//	string s1, s2;
//	cin >> s1 >> s2;
//	int len1 = s1.size(); // 第一个字符串的长度
//	int len2 = s2.size(); // 第二个字符串的长度
//
//	// 开个数组
//	int** arr = new int*[len1+1];
//	for (int i = 0; i < len1 + 1; i++)
//	{
//		arr[i] = new int[len2+1];
//	}
//	// 初始化一下二维数组的边界
//	for (int i = 0; i < len1 + 1; i++)
//	{
//		arr[i][0] = 0;
//	}
//	for (int j = 0; j < len2 + 1; j++)
//	{
//		arr[0][j] = 0;
//	}
//
//	// 矩阵记录值
//	for (int i = 1; i <= len1; i++)
//	{
//		for (int j = 1; j <= len2; j++)
//		{
//			// 三种情况
//			if (s1[i] == s2[j])
//			{
//				arr[i][j] = arr[i - 1][j - 1] + 1;
//			}
//			else
//			{
//				arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
//			}
//		}
//	}
//
//	// 打印值
//	string ans;
//	int i = len1-1;
//	int j = len2-1;
//	while (i >= 0 && j >= 0)
//	{
//		if (s1[i] == s2[j])
//		{
//			ans.push_back(s1[i]);
//			i--;
//			j--;
//		}
//		else
//		{
//			if (arr[i][j - 1] > arr[i - 1][j])
//			{
//				j--;
//			}
//			else if(arr[i-1][j] > arr[i][j-1])
//			{
//				i--;
//			}
//			else
//			{
//				i--;
//			}
//		}
//	}
//
//	// 倒序打印
//	for (int i = ans.size()-1; i >= 0; i--)
//	{
//		cout << ans[i];
//	}
//
//	return 0;
//}