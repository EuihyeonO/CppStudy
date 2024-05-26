//#include <iostream>
//#include <vector>
//#include <set>
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
//	int NumCoin = 0;
//	int TargetMoney = 0;
//	std::cin >> NumCoin >> TargetMoney;
//
//	std::set<int> Coins;
//	for (int i = 0; i < NumCoin; i++)
//	{
//		int CurCoin = 0;
//		std::cin >> CurCoin;
//
//		Coins.insert(CurCoin);
//	}
//
//	std::vector<int> DP(TargetMoney + 1, INT_MAX / 2);
//	DP[0] = 0;
//
//	std::set<int>::iterator CurIter = Coins.begin();
//	std::set<int>::iterator EndIter = Coins.end();
//
//	while (CurIter != EndIter)
//	{
//		int CurCoin = *CurIter;
//
//		for (int j = CurCoin; j <= TargetMoney; j++)
//		{
//			DP[j] = std::min(DP[j], DP[j - CurCoin] + 1);
//		}
//
//		CurIter++;
//	}
//
//	if (DP[TargetMoney] == INT_MAX / 2)
//	{
//		std::cout << -1;
//	}
//	else
//	{
//		std::cout << DP[TargetMoney];
//	}
//
//	return 0;
//}