//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
//	{
//		if (intervals.size() == 0 || newInterval[0] > intervals[intervals.size() - 1][1]) // 特殊情况判定
//		{
//			intervals.push_back(newInterval);
//			return intervals;
//		}
//
//		for (int i = 0; i < intervals.size(); i++) // 因为传进来的intervals本身是个有序序列，所以我们只要自己找对地方插入，会比全部重排要快很多
//		{
//			if (newInterval[0] <= intervals[i][0])
//			{
//				intervals.insert(intervals.begin() + i, newInterval);
//				break;
//			}
//			intervals.push_back(newInterval);
//		}
//
//		// 这一部分全部重排，舍弃了
//		// intervals.push_back(newInterval);  
//		// sort(intervals.begin(), intervals.end());
//		vector<vector<int>> ans;
//		ans.push_back(intervals[0]);
//		for (int i = 0; i < intervals.size(); i++)
//		{
//			if (ans.back()[1] >= intervals[i][0])
//			{
//				ans.back()[1] = max(ans.back()[1], intervals[i][1]);
//				continue;
//			}
//			else
//			{
//				ans.push_back(intervals[i]);
//			}
//		}
//		return ans;
//	}
//};
//
//
//int main()
//{
//	//Solution s;
//	//vector<vector<int>> intervals;
//	//vector<int> v1 = { 3,5 };
//	//vector<int> v2 = { 18,22 };
//	////vector<int> v3 = { 6,7 };
//	////vector<int> v4 = { 8,10 };
//	////vector<int> v5 = { 12,16 };
//	//intervals.push_back(v1);
//	//intervals.push_back(v2);
//	////intervals.push_back(v3);
//	////intervals.push_back(v4);
//	////intervals.push_back(v5);
//	//vector<int> n = { 7,11 };
//	//intervals = s.insert(intervals, n);
//	//for (int i = 0; i < intervals.size(); i++)
//	//{
//	//	cout << intervals[i][0] << endl;
//	//	cout << intervals[i][1] << endl;
//	//}
//
//	char a[] = { '1','2','3' };
//	for (auto& i : a)
//	{
//		cout << i << endl;
//	}
//
//	return 0;
//}