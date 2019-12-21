#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size(); // 第一个向量的长度
        int m = nums2.size(); // 第二个向量的长度
        // 假如是偶数的话，中间有两个值，左右，如果是奇数的话，会同一个值求两遍结果一样
        int left = (n + m + 1) / 2;
        int right = (n + m + 2) / 2;

        // 调用函数
        return (double)(getKth(nums1, 0, n - 1, nums2, 0, m - 1, left) + getKth(nums1, 0, n - 1, nums2, 0, m - 1, right)) / 2;
    }

    int getKth(vector<int> &nums1, int start1, int end1, vector<int> &nums2, int start2, int end2, int k)
    {
        int len1 = end1 - start1 + 1;
        int len2 = end2 - start2 + 1;
        //让 len1 的长度小于 len2，这样就能保证如果有数组空了，一定是 len1 为0
        if (len1 > len2)
            return getKth(nums2, start2, end2, nums1, start1, end1, k);
        if (len1 == 0)
            return nums2[start2 + k - 1];

        if (k == 1)
            return min(nums1[start1], nums2[start2]); // k为1的时候已经可以取出最小的了

        int i = start1 + min(len1, k / 2) - 1; // 确定下一个起点
        int j = start2 + min(len2, k / 2) - 1;

        if (nums1[i] > nums2[j])
        {
            return getKth(nums1, start1, end1, nums2, j + 1, end2, k - (j - start2 + 1));
        }
        else
        {
            return getKth(nums1, i + 1, end1, nums2, start2, end2, k - (i - start1 + 1));
        }
    }
};

int main()
{
    Solution s;
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);

    v2.push_back(3);
    v2.push_back(4);

    cout << s.findMedianSortedArrays(v1, v2);
    return 0;
}