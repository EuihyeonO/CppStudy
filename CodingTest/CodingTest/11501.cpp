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
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<long long> Answers;
//	Answers.reserve(NumOfTestCase);
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		int Days = 0;
//		std::cin >> Days;
//
//		std::vector<int> Stocks(Days);
//		for (int i = 0; i < Days; i++)
//		{
//			std::cin >> Stocks[i];
//		}
//
//		long long MaxStock = 0;
//		long long Profit = 0;
//
//		for (int i = Days - 1; i >= 0; i--)
//		{
//			if (MaxStock < Stocks[i])
//			{
//				MaxStock = Stocks[i];
//			}
//			else
//			{
//				Profit += MaxStock - Stocks[i];
//			}
//		}
//
//		Answers.push_back(Profit);
//	}
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}