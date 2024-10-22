//#include <iostream>
//#include <algorithm>
//#include <vector>
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
//	int NumOfTire = 0;
//	int NumOfStd = 0;
//
//	int ScoreSum = 0;
//
//	std::cin >> NumOfTire >> NumOfStd;
//
//	std::vector<std::vector<int>> DP(NumOfTire + 1, std::vector<int>(NumOfStd + 1, 0));
//	
//	for (int i = 1; i <= NumOfTire; ++i)
//	{
//		int TireScore = 0;
//		int MinCost = 0;
//
//		std::cin >> TireScore >> MinCost;
//		ScoreSum += TireScore;
//
//		for (int j = 0; j <= NumOfStd; ++j)
//		{
//			if (j > MinCost)
//			{
//				DP[i][j] = std::max({ DP[i - 1][j - (MinCost + 1)] + 2 * TireScore, DP[i - 1][j - (MinCost)] + TireScore, DP[i - 1][j] });
//			}
//			else if (j == MinCost)
//			{
//				DP[i][j] = std::max(DP[i - 1][j - MinCost] + TireScore, DP[i - 1][j]);
//			}
//			else
//			{
//				DP[i][j] = DP[i - 1][j];
//			}
//		}
//	}
//
//	int MaxScore = DP[NumOfTire][NumOfStd];
//	MaxScore *= 2;
//	ScoreSum *= 2;
//
//	if (MaxScore > ScoreSum)
//	{
//		std::cout << "W";
//	}
//	else if (MaxScore == ScoreSum)
//	{
//		std::cout << "D";
//	}
//	else
//	{
//		std::cout << "L";
//	}
//
//	return 0;
//}