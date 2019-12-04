//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//	vector<vector<int>> fourSum(vector<int>& nums, int target)
//	{
//		sort(nums.begin(), nums.end()); // 老规矩，先排个序
//		vector<vector<int>> ans;
//		if (nums.size() < 4)
//		{
//			return ans;
//		}
//		for (int i = 0; i < nums.size() - 3; i++)
//		{
//			if (i > 0 && nums[i] == nums[i - 1])
//			{
//				continue;
//			}
//			if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
//			{
//				break;
//			}
//			if (nums[i] + nums[nums.size() - 1] + nums[nums.size() - 2] + nums[nums.size() - 3] < target)
//			{
//				continue;
//			}
//			for (int j = i + 1; j < nums.size() - 2; j++)
//			{
//				if (j - 1 > i && nums[j] == nums[j - 1])
//				{
//					continue;
//				}
//				int left = j + 1;
//				int right = nums.size() - 1;
//				while (left < right)
//				{
//					int sum = nums[i] + nums[j] + nums[left] + nums[right];
//					if (sum == target)
//					{
//						ans.push_back({ nums[i], nums[j], nums[left], nums[right] });
//						while (left < right && nums[left] == nums[left + 1])
//						{
//							left++;
//						}
//						while (left < right && nums[right] == nums[right - 1])
//						{
//							right--;
//						}
//						left++;
//						right--;
//					}
//					else if (sum < target)
//					{
//						left++;
//					}
//					else
//					{
//						right--;
//					}
//				}
//			}
//		}
//		return ans;
//	}
//};
//
//
//int main()
//{
//	return 0;
//}