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
//		int len = s1.size(); // ����ַ����ĳ���
//
//		// �򻯣���һά����ͺ�
//		int* arr = new int[len];
//
//		// ��ʼ������
//		for (int i = 0; i < len; i++)
//		{
//			arr[i] = 0;
//		}
//
//
//		int max_end = 0; // ��Ӵ�������i
//		int max_len = 0; // ��ִ��ĳ���
//		// ��ʼ���ַ����������ֵ
//		for (int i = 0; i < len; i++)
//		{
//			for (int j = len - 1; j >= 0; j--)
//			{
//				if (s1.at(i) == s2.at(j)) // ��������ַ���ȵĻ�
//				{
//					if (i == 0 || j == 0) // ����ڱ߽���
//					{
//						arr[j] = 1;
//					}
//					else
//					{
//						arr[j] = arr[j - 1] + 1; // ����һ����1
//					}
//				}
//				else
//				{
//					arr[j] = 0; // ��Ҫ��Ϊ0
//				}
//				if (arr[j] > max_len)
//				{
//					int befor_index = s1.length() - 1 - j;  // ��ת֮ǰ������
//					int com = befor_index + arr[j] - 1; // ����ƫ����
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
//		// ��ӡһ������Ӵ�������max_end�ҵ�����λ�ã�Ȼ����ǰ��max_len��������Ӵ�
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