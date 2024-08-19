//#include <iostream>
//#include <vector>
//#include <string>
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
//	int NumSize = 0;
//	std::cin >> NumSize;
//
//	std::vector<int> Prices(NumSize);
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Prices[i];
//	}
//
//	int Money = 0;
//	std::cin >> Money;
//
//	//그 금액에서 만들 수 있는 가장 큰 숫자
//	std::vector<std::string> DP(Money + 1, "");
//
//	for (int i = 1; i <= Money; i++)
//	{
//		for (int j = 0; j < NumSize; j++)
//		{
//			if (i - Prices[j] >= 0)
//			{
//				std::string CurString = DP[i - Prices[j]];
//				
//				if (CurString == "0")
//				{
//					CurString = '0' + j;
//				}
//				else
//				{
//					CurString.push_back('0' + j);
//				}
//
//				std::sort(CurString.begin(), CurString.end(), std::greater<>());
//
//				if (DP[i] == "")
//				{
//					DP[i] = CurString;
//				}
//				else if (DP[i].size() < CurString.size())
//				{
//					DP[i] = CurString;
//				}
//				else if (DP[i].size() == CurString.size() && DP[i] < CurString)
//				{
//					DP[i] = CurString;
//				}
//			}
//		}
//	}
//
//	std::cout << DP[Money];
//
//	return 0;
//}