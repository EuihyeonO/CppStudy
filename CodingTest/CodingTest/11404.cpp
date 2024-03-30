//#include <iostream>
//#include <vector>
//#include <climits>
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
//	int NumOfCity = 0;
//	int NumOfBus = 0;
//
//	std::cin >> NumOfCity >> NumOfBus;
//
//	std::vector<std::vector<int>> Cost(NumOfCity, std::vector<int>(NumOfCity, 50000000));
//	
//	for (int i = 0; i < NumOfBus; i++)
//	{
//		int Start = 0;
//		int End = 0;
//		int BusCost = 0;
//
//		std::cin >> Start >> End >> BusCost;
//
//		Cost[Start - 1][End - 1] = std::min(Cost[Start - 1][End - 1], BusCost);
//	}
//
//	for (int i = 0; i < NumOfCity; i++)
//	{
//		Cost[i][i] = 0;
//	}
//
//	for (int i = 0; i < NumOfCity; i++)
//	{
//		for (int j = 0; j < NumOfCity; j++)
//		{
//			for (int k = 0; k < NumOfCity; k++)
//			{
//				Cost[j][k] = std::min(Cost[j][k], Cost[j][i] + Cost[i][k]);
//			}
//		}
//	}
//
//	for (int i = 0; i < NumOfCity; i++)
//	{
//		for (int j = 0; j < NumOfCity; j++)
//		{
//			if (Cost[i][j] == 50000000)
//			{
//				Cost[i][j] = 0;
//			}
//
//			std::cout << Cost[i][j] << " ";
//		}
//
//		std::cout << "\n";
//	}
//
//	return 0;
//}