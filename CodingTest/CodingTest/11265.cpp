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
//struct Service
//{
//	int Start = 0;
//	int Dest = 0;
//	int Time = 0;
//};
//
//int main()
//{
//	Init();
//
//	int NumPartyLand = 0;
//	int NumService = 0;
//
//	std::cin >> NumPartyLand >> NumService;
//
//	std::vector<std::vector<int>> Cost(NumPartyLand, std::vector<int>(NumPartyLand));
//	for (int i = 0; i < NumPartyLand; i++)
//	{
//		for (int j = 0; j < NumPartyLand; j++)
//		{
//			std::cin >> Cost[i][j];
//		}
//	}
//
//	std::vector<Service> Services(NumService);
//	for (int i = 0; i < NumService; i++)
//	{
//		std::cin >> Services[i].Start >> Services[i].Dest >> Services[i].Time;
//	}
//
//	for (int i = 0; i < NumPartyLand; i++)
//	{
//		for (int j = 0; j < NumPartyLand; j++)
//		{
//			for (int k = 0; k < NumPartyLand; k++)
//			{
//				Cost[j][k] = std::min(Cost[j][k], Cost[j][i] + Cost[i][k]);
//			}
//		}
//	}
//
//	for (int i = 0; i < NumService; i++)
//	{
//		int Start = Services[i].Start - 1;
//		int Dest = Services[i].Dest - 1;
//		int Time = Services[i].Time;
//
//		if (Cost[Start][Dest] <= Time)
//		{
//			std::cout << "Enjoy other party" << "\n";
//		}
//		else
//		{
//			std::cout << "Stay here" << "\n";
//		}
//	}
//
//	return 0;
//}