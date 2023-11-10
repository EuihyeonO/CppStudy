//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//
//int main()
//{
//	int Num = 0;
//	int Target = 0;
//
//	std::cin >> Num;
//	std::cin >> Target;
//
//	std::vector<int> Coins;
//	Coins.resize(Num);
//
//	for (int i = 0; i < Num; i++)
//	{
//		std::cin >> Coins[Num - i - 1];
//	}
//
//	int Sum = 0;
//	int CurCoinIndex = 0;
//	int SumCount = 0;
//
//	while (Sum != Target)
//	{
//		int CurCoin = Coins[CurCoinIndex];
//		Sum += CurCoin;
//
//		if (Sum > Target)
//		{
//			Sum -= CurCoin;
//			CurCoinIndex++;
//
//			continue;
//		}
//
//		SumCount++;
//	}
//
//	std::cout << SumCount;
//
//}