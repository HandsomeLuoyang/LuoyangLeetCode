//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int threeSumClosest(vector<int>& nums, int target)
//	{
//		sort(nums.begin(), nums.end()); // ����
//		int ans = nums[0] + nums[1] + nums[2]; // ��ʼ����
//		for (int i = 0; i < nums.size() - 2; i++)
//		{
//			if (i > 0 && nums[i] == nums[i - 1])
//			{
//				continue;
//			}
//			int left = i + 1;
//			int right = nums.size() - 1;
//			while (left < right)
//			{
//				int sum = nums[i] + nums[left] + nums[right];
//				if (abs(sum - target) < abs(ans - target))
//				{
//					ans = sum;
//					while (left < right &&nums[left] == nums[left + 1])
//					{
//						left++;
//					}
//					while (left < right && nums[right] == nums[right - 1])
//					{
//						right--;
//					}
//				}
//				if (sum - target < 0)
//				{
//					left++;
//				}
//				if (sum - target > 0)
//				{
//					right--;
//				}
//				if (sum - target == 0)
//				{
//					return target;
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
//
//	return 0;
//}