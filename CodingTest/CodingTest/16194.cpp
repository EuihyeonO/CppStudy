//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
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
//	int TargetNum = 0;
//	std::cin >> TargetNum;
//
//	std::vector<int> Prices(TargetNum + 1);
//	for (int i = 1; i <= TargetNum; i++)
//	{
//		std::cin >> Prices[i];
//	}
//
//	std::vector<int> DP(TargetNum + 1, 0);
//	DP[1] = Prices[1];
//	DP[2] = std::min(DP[1] + DP[1], Prices[2]);
//
//	for (int i = 3; i <= TargetNum; i++)
//	{
//		DP[i] = Prices[i];
//
//		for (int j = 1; j < i; j++)
//		{
//			DP[i] = std::min(DP[i - j] + DP[j], DP[i]);
//		}
//	}
//
//	std::cout << DP[TargetNum];
//
//	return 0;
//}