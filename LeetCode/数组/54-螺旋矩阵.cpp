//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> spiralOrder(vector<vector<int>>& matrix)
//	{
//		vector<int> ans;
//		if (matrix.size() == 0)
//		{
//			return ans;
//		}
//
//		int up = 0, down = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
//
//		while (true)
//		{
//			for (int i = left; i <= right; i++)
//			{
//				ans.push_back(matrix[up][i]);
//			}
//			if (++up > down) break;
//			for (int i = up; i <= down; i++)
//			{
//				ans.push_back(matrix[i][right]);
//			}
//			if (--right < left) break;
//			for (int i = right; i >= left; i--)
//			{
//				ans.push_back(matrix[down][i]);
//			}
//			if (--down < up) break;
//			for (int i = down; i >= up; i--)
//			{
//				ans.push_back(matrix[i][left]);
//			}
//			if (++left > right) break;
//		}
//		return ans;
//	}
//};