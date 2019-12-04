//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val)
//	{
//		if (nums.size() == 0) // 特殊情况判定
//		{
//			return 0;
//		}
//
//		int left = 0;
//		int right = 0;
//		for (; right < nums.size(); right++)
//		{
//			if (nums[right] != val)
//			{
//				nums[left] = nums[right];
//				left++;
//			}
//		}
//		return left;
//
//	}
//};
