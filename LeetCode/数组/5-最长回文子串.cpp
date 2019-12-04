//#include <iostream>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//	string longestPalindrome(string s1)
//	{
//		string s2;
//		for (int i = s1.size() - 1; i >= 0; i--)
//		{
//			s2.push_back(s1[i]);
//		}
//		int len = s1.size(); // 获得字符串的长度
//
//		// 简化，开一维数组就好
//		int* arr = new int[len];
//
//		// 初始化数组
//		for (int i = 0; i < len; i++)
//		{
//			arr[i] = 0;
//		}
//
//
//		int max_end = 0; // 最长子串的最后的i
//		int max_len = 0; // 最长字串的长度
//		// 开始用字符串填数组的值
//		for (int i = 0; i < len; i++)
//		{
//			for (int j = len - 1; j >= 0; j--)
//			{
//				if (s1.at(i) == s2.at(j)) // 如果两个字符相等的话
//				{
//					if (i == 0 || j == 0) // 如果在边界上
//					{
//						arr[j] = 1;
//					}
//					else
//					{
//						arr[j] = arr[j - 1] + 1; // 比上一个加1
//					}
//				}
//				else
//				{
//					arr[j] = 0; // 需要置为0
//				}
//				if (arr[j] > max_len)
//				{
//					int befor_index = s1.length() - 1 - j;  // 反转之前的索引
//					int com = befor_index + arr[j] - 1; // 加上偏移量
//					if (s2.at(j) == s1.at(com))
//					{
//						max_len = arr[j];
//						max_end = i;
//					}
//				}
//
//			}
//		}
//
//		string ans;
//		// 打印一下最长的子串，利用max_end找到最后的位置，然后往前走max_len就是这个子串
//		for (int i = max_end - max_len + 1; i < max_end + 1; i++)
//		{
//			ans.push_back(s1[i]);
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	Solution s;
//	cout << s.longestPalindrome("dsoijfo123");
//}