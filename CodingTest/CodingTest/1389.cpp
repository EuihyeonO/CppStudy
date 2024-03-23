//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int main()
//{
//	Init();
//
//	int NumOfUser = 0;
//	std::cin >> NumOfUser;
//
//	int NumOfRelation = 0;
//	std::cin >> NumOfRelation;
//
//	std::vector<std::vector<int>> Link(NumOfUser, std::vector<int>(NumOfUser, INT_MAX / 2 - 1));
//	
//	for (int i = 0; i < NumOfRelation; i++)
//	{
//		int First = 0;
//		int Second = 0;
//		std::cin >> First >> Second;
//
//		Link[First - 1][Second - 1] = 1;
//		Link[Second - 1][First - 1] = 1;
//	}
//
//	for (int i = 0; i < NumOfUser; i++)
//	{
//		for (int j = 0; j < NumOfUser; j++)
//		{
//			for (int k = 0; k < NumOfUser; k++)
//			{
//				long long Sum = Link[j][i] + Link[i][k];
//				Link[j][k] = std::min(Link[j][k], (int)Sum);
//			}
//		}
//	}
//
//	int MinIndex = 0;
//	int MinSum = INT_MAX;
//
//	for (int i = 0; i < NumOfUser; i++)
//	{
//		int Sum = 0;
//
//		for (int j = 0; j < NumOfUser; j++)
//		{
//			Sum += Link[i][j];
//		}
//
//		if (Sum < MinSum)
//		{
//			MinIndex = i;
//			MinSum = Sum;
//		}
//	}
//	
//	std::cout << MinIndex + 1;
//
//	return 0;
//}