//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>& nums)
//	{
//		vector<vector<int>> ans;
//		// 判断一下特例
//		if (nums.size() < 3)
//		{
//			return ans;
//		}
//
//		// 首先排个序
//		sort_(nums);
//
//		for (int i = 0; i < nums.size() - 2; i++)
//		{
//			if (nums[i] > 0)
//			{
//				break; // 如果这个值已经大于0了，那它的右边肯定都是正数，那么就跳出
//			}
//			if (i > 0 && nums[i] == nums[i - 1]) // 去重
//			{
//				continue; // 直接到下一个去
//			}
//			int left = i + 1;
//			int right = nums.size() - 1;  // 左右指针
//			while (left < right)
//			{
//				int sum = nums[left] + nums[right] + nums[i];
//				if (sum == 0) // 如果正好相等
//				{
//					ans.push_back({ nums[i],nums[left], nums[right] });
//					while (left < right &&nums[left] == nums[left + 1])
//					{
//						left++;
//					}
//					while (left < right && nums[right] == nums[right - 1])
//					{
//						right--;
//					}
//					left++;
//					right--;
//				}
//				else if (sum < 0) // 左边的太小了
//				{
//					left++;
//				}
//				else
//				{
//					right--;
//				}
//			}
//		}
//		return ans;
//	}
//
//	void sort_(vector<int>& nums)
//	{
//		bool sorted = false;
//		while (!sorted)
//		{
//			sorted = true;
//			for (int i = 0; i < nums.size() - 1; i++)
//			{
//				if (nums[i] > nums[i + 1])
//				{
//					int temp = nums[i];
//					nums[i] = nums[i + 1];
//					nums[i + 1] = temp;
//					sorted = false;
//				}
//			}
//		}
//	}
//	
//
//};
//
//int main()
//{
//	Solution s;
//	vector<int> v;
//	v.push_back(0);
//	v.push_back(0);
//	v.push_back(0);
//	//v.push_back(0);
//	//v.push_back(1);
//	//v.push_back(2);
//	
//	
//	vector<vector<int>> ans = s.threeSum(v);
//	for (int i = 0; i < ans.size(); i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << ans[i][j] << endl;
//		}
//	}
//	return 0;
//}