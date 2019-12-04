//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums)
//	{
//		if (nums.size() < 2) // 特殊情况
//		{
//			return nums.size();
//		}
//		int left = 0; // 左指针
//		int right = 1; // 右指针
//		for (; right < nums.size(); right++)
//		{
//			if (nums[left] != nums[right])
//			{
//				left++;
//				nums[left] = nums[right];
//			}
//		}
//		return left + 1;
//	}
//};