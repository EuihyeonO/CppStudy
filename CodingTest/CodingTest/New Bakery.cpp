//#include <iostream>
//#include <vector>
//
//long long GetProfit(long long _K, long long _NumOfBun, long long _BasicPrice, long long _FirstModifiedPrice)
//{
//	long long SumProfit = 0;
//
//	SumProfit += _FirstModifiedPrice * (_FirstModifiedPrice + 1) / 2;
//	SumProfit -= (_FirstModifiedPrice - _K) * (_FirstModifiedPrice - _K + 1) / 2;
//	SumProfit += _BasicPrice * (_NumOfBun - _K);
//
//	return SumProfit;
//}
//
//int main()
//{
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<long long> Answers(NumCase);
//
//	for (long long Case = 0; Case < NumCase; Case++)
//	{
//		long long NumOfBun = 0;
//		long long BasicPrice = 0;
//		long long FirstModifiedPrice = 0;
//
//		std::cin >> NumOfBun >> BasicPrice >> FirstModifiedPrice;
//
//		long long K = std::max((long long)0, std::min(NumOfBun, FirstModifiedPrice - BasicPrice));
//		long long Answer = GetProfit(K, NumOfBun, BasicPrice, FirstModifiedPrice);
//
//		Answers[Case] = Answer;
//	}
//
//	for (int i = 0; i < NumCase; i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}