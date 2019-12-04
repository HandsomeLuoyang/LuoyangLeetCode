//#include <iostream>
//#include<string>
//using namespace std;
//
//class P_quene
//{
//public:
//	P_quene(int s = 100);
//	~P_quene();
//
//	void insert(int x); //插入函数
//	void find(int x);  //找到符合条件的并输出
//	void decrease(int i, int v); //减小优先级
//private:
//	int currentsize;
//	int *Array;     //存储二叉堆的数组
//	int maxsize;
//
//	void precolateDown(int hole);  //向下过滤的工具函数
//
//};
//
//
//P_quene::P_quene()
//{
//	int s = 20000;
//	Array = new int[s];
//	maxsize = s;
//	currentsize = 0;
//}
//
//P_quene::~P_quene()
//{
//	delete[] Array;
//}
//
//
//void P_quene::insert(int x)
//{
//	int hole = ++currentsize;
//	for (; hole > 1 && x < Array[hole / 2]; hole /= 2)
//		Array[hole] = Array[hole / 2];    //向上过滤
//	Array[hole] = x;
//}
//
//void P_quene::precolateDown(int hole)
//{
//	int child;
//	int tem = Array[hole];
//
//	for (; hole * 2 <= currentsize; hole = child)
//	{
//		child = hole * 2;
//		if (child != currentsize && Array[child + 1] < Array[child])
//			child++;
//		if (Array[child] < tem) Array[hole] = Array[child];
//		else break;
//
//	}
//	Array[hole] = tem;
//}
//
//void P_quene::find(int x)
//{
//
//	int i = 1;
//	int s = 0;
//	int p = 0;
//	for (; i <= currentsize; i++)
//	{
//		{
//			p = Array[i];
//			s = i;
//			break;
//		}
//	}
//	for (; i <= currentsize; i++)
//	{
//		if (Array[i] > x && Array[i] < p)
//		{
//			p = Array[i];
//			s = i;
//		}
//	}
//	cout << s << endl;
//}
//
//void P_quene::decrease(int i, int v)
//{
//	Array[i] -= v;
//	int x = Array[i];
//	for (; i > 1 && x < Array[i / 2]; i /= 2)
//		Array[i] = Array[i / 2];    //向上过滤
//	Array[i] = x;
//}
//
//
//int main()
//{
//	P_quene que;
//	int N;
//	cin >> N;
//	for (int j = 0; j < N; j++)
//	{
//		string p;
//		getline(cin, p);
//		switch (p[0])
//		{
//		case 'i':
//		{
//			int num = 0;
//			bool state = false;
//			int i = 0;
//			while (p[i]<'0' || p[i]>'9')
//			{
//				i++;
//			}
//			state = true;
//			while (p[i] >= '0'&&p[i] <= '9'&&state)
//			{
//				num = p[i] - '0' + num * 10;
//				i++;
//				if (p[i]<'0' || p[i]>'9')state = false;
//			}
//			que.insert(num);
//
//		}
//		break;
//		case 'f':
//		{
//			int num = 0;
//			bool state = false;
//			int i = 0;
//			while (p[i]<'0' || p[i]>'9')
//			{
//				i++;
//			}
//			state = true;
//			while (p[i] >= '0'&&p[i] <= '9'&&state)
//			{
//				num = p[i] - '0' + num * 10;
//				i++;
//				if (p[i]<'0' || p[i]>'9')state = false;
//			}
//			que.find(num);
//		}
//		break;
//		case 'd':
//		{
//			int num1 = 0, num2 = 0;
//			bool state1 = false, state2 = false;
//			int i = 0;
//			while (p[i]<'0' || p[i]>'9')
//			{
//				i++;
//			}
//			state1 = true;
//			while (p[i] >= '0'&&p[i] <= '9'&&state1)
//			{
//				num1 = p[i] - '0' + num1 * 10;
//				i++;
//				if (p[i]<'0' || p[i]>'9')state1 = false;
//			}
//
//			while (p[i]<'0' || p[i]>'9')
//			{
//				i++;
//			}
//			state2 = true;
//			while (p[i] >= '0'&&p[i] <= '9'&&state2)
//			{
//				num2 = p[i] - '0' + num2 * 10;
//				i++;
//				if (p[i]<'0' || p[i]>'9')state2 = false;
//			}
//			que.decrease(num1, num2);
//
//		}
//		break;
//		}
//	}
//
//	return 0;
//}