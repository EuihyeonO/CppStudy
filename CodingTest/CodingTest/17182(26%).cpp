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
//int main()
//{
//	Init();
//	int NumPlanet = 0;
//	int Start = 0;
//	std::cin >> NumPlanet >> Start;
//
//	std::vector<std::vector<int>> Cost(NumPlanet, std::vector<int>(NumPlanet, 0));
//	for (int i = 0; i < NumPlanet; i++)
//	{
//		for (int j = 0; j < NumPlanet; j++)
//		{
//			std::cin >> Cost[i][j];
//		}
//	}
//
//	std::vector<std::vector<int>> FW(NumPlanet, std::vector<int>(NumPlanet, 99999999));
//	for (int i = 0; i < NumPlanet; i++)
//	{
//		for (int j = 0; j < NumPlanet; j++)
//		{
//			FW[i][j] = Cost[i][j];
//		}
//	}
//
//	for (int i = 0; i < NumPlanet; i++)
//	{
//		for (int j = 0; j < NumPlanet; j++)
//		{
//			for (int k = 0; k < NumPlanet; k++)
//			{
//				FW[j][k] = std::min(FW[j][k], FW[j][i] + FW[i][k]);
//			}
//		}
//	}
//
//	std::vector<bool> isVisit(NumPlanet);
//	
//	int CurIndex = Start;
//	isVisit[CurIndex] = true;
//	int SumTime = 0;
//
//	while (true)
//	{
//		int NearIndex = 0;
//		int NearTime = 100000000;
//
//		bool isAbleGo = false;
//
//		for (int i = 0; i < NumPlanet; i++)
//		{
//			if (FW[CurIndex][i] < NearTime && isVisit[i] == false)
//			{
//				NearIndex = i;
//				NearTime = FW[CurIndex][i];
//
//				isAbleGo = true;
//			}
//		}
//
//		if (isAbleGo == false)
//		{
//			break;
//		}
//
//		isVisit[NearIndex] = true;
//
//		SumTime += NearTime;
//		CurIndex = NearIndex;
//	}
//
//	std::cout << SumTime;
//
//	return 0;
//}