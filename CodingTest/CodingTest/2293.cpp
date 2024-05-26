//#include <iostream>
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
//	int NumCoin = 0;
//	int TargetMoney = 0;
//	std::cin >> NumCoin >> TargetMoney;
//
//	std::vector<int> Coins(NumCoin);
//	std::vector<int> DP(TargetMoney + 1);
//
//	for (int i = 0; i < NumCoin; i++)
//	{
//		std::cin >> Coins[i];
//	}
//
//	DP[0] = 1;
//
//	for (int i = 0; i < NumCoin; i++)
//	{
//		for (int j = Coins[i]; j <= TargetMoney; j++)
//		{
//			DP[j] += DP[j - Coins[i]];
//		}
//	}
//
//	std::cout << DP[TargetMoney];
//
//	return 0;
//}