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
//		// �ж�һ������
//		if (nums.size() < 3)
//		{
//			return ans;
//		}
//
//		// �����Ÿ���
//		sort_(nums);
//
//		for (int i = 0; i < nums.size() - 2; i++)
//		{
//			if (nums[i] > 0)
//			{
//				break; // ������ֵ�Ѿ�����0�ˣ��������ұ߿϶�������������ô������
//			}
//			if (i > 0 && nums[i] == nums[i - 1]) // ȥ��
//			{
//				continue; // ֱ�ӵ���һ��ȥ
//			}
//			int left = i + 1;
//			int right = nums.size() - 1;  // ����ָ��
//			while (left < right)
//			{
//				int sum = nums[left] + nums[right] + nums[i];
//				if (sum == 0) // ����������
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
//				else if (sum < 0) // ��ߵ�̫С��
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