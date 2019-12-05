//class Solution {
//public:
//	vector<vector<int>> generateMatrix(int n)
//	{
//		vector<vector<int>> ans(n, vector<int>(n));
//		int left = 0, right = n - 1, top = 0, bot = n - 1;
//		int num = 1;
//		while (n--)
//		{
//			for (int i = left; i <= right; i++) ans[top][i] = num++;
//			top++;
//			for (int i = top; i <= bot; i++) ans[i][right] = num++;
//			right--;
//			for (int i = right; i >= left; i--) ans[bot][i] = num++;
//			bot--;
//			for (int i = bot; i >= top; i--) ans[i][left] = num++;
//			left++;
//		}
//		return ans;
//	}
//};