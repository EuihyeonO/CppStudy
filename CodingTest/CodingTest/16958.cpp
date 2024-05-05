//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <climits>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct City
//{
//	int isSpecial = 0;
//
//	int X = 0;
//	int Y = 0;
//
//	int GetCost(const City& _Other, int _TeleportCost)
//	{
//		int XGap = X - _Other.X;
//		int YGap = Y - _Other.Y;
//
//		int Return = std::abs(XGap) + std::abs(YGap);
//
//		if (isSpecial == 1 && _Other.isSpecial == 1)
//		{
//			Return = std::min(Return, _TeleportCost);
//		}
//
//		return Return;
//	}
//};
//
//int main()
//{
//	Init();
//
//	int NumOfCity = 0;
//	int TeleportTime = 0;
//	std::cin >> NumOfCity >> TeleportTime;
//
//	std::vector<City> Cities(NumOfCity);
//	for (int i = 0; i < NumOfCity; i++)
//	{
//		std::cin >> Cities[i].isSpecial >> Cities[i].X >> Cities[i].Y;
//	}
//
//	std::vector<std::vector<int>> Cost(NumOfCity, std::vector<int>(NumOfCity, 0));
//	for (int i = 0; i < NumOfCity; i++)
//	{
//		for (int j = 0; j < NumOfCity; j++)
//		{
//			int ItoJ = Cities[i].GetCost(Cities[j], TeleportTime);
//			Cost[i][j] = ItoJ;
//		} 
//	}
//
//	for (int i = 0; i < NumOfCity; i++)
//	{
//		for (int j = 0; j < NumOfCity; j++)
//		{
//			for (int k = 0; k < NumOfCity; k++)
//			{
//				if (j == k)
//				{
//					continue;
//				}
//
//				Cost[j][k] = std::min(Cost[j][k], Cost[j][i] + Cost[i][k]);
//			}
//		}
//	}
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<int> Answer(NumOfTestCase);
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		int Start = 0;
//		int End = 0;
//		std::cin >> Start >> End;
//
//		Answer[i] = Cost[Start - 1][End - 1];
//	}
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}