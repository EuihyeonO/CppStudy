//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n, vector<int> lost, vector<int> reserve) 
//{
//	std::vector<int> Students;
//	Students.resize(n, 1);
//
//	for (int i = 0; i < lost.size(); i++)
//	{
//		Students[lost[i] - 1] = 0;
//	}
//
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		Students[reserve[i] - 1]++;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (Students[i] == 0)
//		{
//			if (i != 0 && Students[i - 1] == 2)
//			{
//				Students[i - 1] = 1;
//				Students[i] = 1;
//			}
//			else if(i != n - 1 && Students[i + 1] == 2)
//			{
//				Students[i + 1] = 1;
//				Students[i] = 1;
//			}
//		}
//	}
//
//	int Count = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (Students[i] >= 1)
//		{
//			Count++;
//		}
//	}
//
//	return Count;
//}
//
//int main()
//{
//	return 0;
//}