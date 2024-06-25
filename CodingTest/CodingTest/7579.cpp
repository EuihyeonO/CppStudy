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
//	int NumApp = 0;
//	int TargetMem = 0;
//	
//	std::cin >> NumApp >> TargetMem;
//
//	std::vector<int> AppMemories(NumApp + 1, 0);
//	std::vector<int> AppCosts(NumApp + 1, 0);
//
//	for (int i = 1; i <= NumApp; i++)
//	{
//		std::cin >> AppMemories[i];
//	}
//
//	for (int i = 1; i <= NumApp; i++)
//	{
//		std::cin >> AppCosts[i];
//	}
//
//	std::vector<std::vector<int>> DP(NumApp + 1, std::vector<int>(10001, 0));
//
//	for (int i = 1; i <= NumApp; i++)
//	{
//		for (int j = 0; j <= 10000; j++)
//		{
//			if (j >= AppCosts[i])
//			{
//				DP[i][j] = std::max(DP[i - 1][j], DP[i - 1][j - AppCosts[i]] + AppMemories[i]);
//			}
//			else
//			{
//				DP[i][j] = DP[i - 1][j];
//			}
//		}
//	}
//
//	int Answer = 0;
//
//	for (int i = 0; i <= 10000; i++)
//	{
//		if (DP[NumApp][i] >= TargetMem)
//		{
//			Answer = i;
//			break;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}