//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2; // ���������ַ���
//	int len1 = s1.size();
//	int len2 = s2.size(); // ��������ַ����ĳ���
//
//	// ������ά����
//	int** arr = new int*[len1];
//	for (int i = 0; i < len1; i++)
//	{
//		arr[i] = new int[len2];
//	}
//	
//	// ��ʼ������
//	for (int i = 0; i < len1; i++)
//	{
//		for (int j = 0; j < len2; j++)
//		{
//			arr[i][j] = 0; // ��ʼ������Ϊ0
//		}
//	}
//
//
//	int max_end = 0; // ��Ӵ�������i
//	int max_len = 0; // ��ִ��ĳ���
//	// ��ʼ���ַ����������ֵ
//	for (int i = 0; i < len1; i++)
//	{
//		for (int j = 0; j < len2; j++)
//		{
//			if (s1.at(i) == s2.at(j)) // ��������ַ���ȵĻ�
//			{
//				if (i == 0 || j == 0) // ����ڱ߽���
//				{
//					arr[i][j] = 1;
//				}
//				else
//				{
//					arr[i][j] = arr[i - 1][j - 1] + 1; // ����һ����1
//				}
//				if (arr[i][j] > max_len)
//				{
//					max_len = arr[i][j];
//					max_end = i;
//				}
//			}
//		}
//	}
//
//	// ��ӡһ������Ӵ�������max_end�ҵ�����λ�ã�Ȼ����ǰ��max_len��������Ӵ�
//	for (int i = max_end - max_len+1; i < max_end + 1; i++)
//	{
//		cout << s1[i];
//	}
//
//
//
//	return 0;
//}