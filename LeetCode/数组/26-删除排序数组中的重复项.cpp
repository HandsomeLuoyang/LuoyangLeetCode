//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums)
//	{
//		if (nums.size() < 2) // �������
//		{
//			return nums.size();
//		}
//		int left = 0; // ��ָ��
//		int right = 1; // ��ָ��
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