//#include <iostream>
//#include <vector>
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
//	int NumOfHouse = 0;
//	std::cin >> NumOfHouse;
//
//	std::vector<std::vector<int>> Cost(NumOfHouse, std::vector<int>(3, 0));
//	for (int i = 0; i < NumOfHouse; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			std::cin >> Cost[i][j];
//		}
//	}
//
//	int Answer = 99999999;
//
//	std::vector<std::vector<int>> DP(NumOfHouse, std::vector<int>(3, 99999999));
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < DP.size(); j++)
//		{
//			std::fill(DP[j].begin(), DP[j].end(), 99999999);
//		}
//
//		DP[0][0] = Cost[0][0];
//		DP[0][1] = Cost[0][1];
//		DP[0][2] = Cost[0][2];
//
//		for (int j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//
//			DP[1][j] = DP[0][i] + Cost[1][j];
//		}
//
//		for (int j = 2; j < NumOfHouse; j++)
//		{
//			DP[j][0] = std::min(DP[j - 1][1] + Cost[j][0], DP[j - 1][2] + Cost[j][0]);
//			DP[j][1] = std::min(DP[j - 1][0] + Cost[j][1], DP[j - 1][2] + Cost[j][1]);
//			DP[j][2] = std::min(DP[j - 1][0] + Cost[j][2], DP[j - 1][1] + Cost[j][2]);
//		}
//
//		for (int j = 0; j < 3; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//
//			Answer = std::min(Answer, DP[NumOfHouse - 1][j]);
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}