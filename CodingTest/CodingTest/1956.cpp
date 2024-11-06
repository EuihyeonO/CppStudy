//#include <iostream>
//#include <algorithm>
//#include <vector>
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
//	int NumCity = 0, NumEdge = 0;
//	std::cin >> NumCity >> NumEdge;
//
//	std::vector<std::vector<int>> MinDist(NumCity, std::vector<int>(NumCity, 999999999));
//	for (int i = 0; i < NumCity; i++)
//	{
//		MinDist[i][i] = 0;
//	}
//
//	for (int i = 0; i < NumEdge; i++)
//	{
//		int Start = 0, End = 0, Cost = 0;
//		std::cin >> Start >> End >> Cost;
//		--Start, --End;
//
//		MinDist[Start][End] = Cost;
//	}
//
//	for (int i = 0; i < NumCity; i++)
//	{
//		for (int j = 0; j < NumCity; j++)
//		{
//			for (int k = 0; k < NumCity; k++)
//			{
//				MinDist[j][k] = std::min(MinDist[j][k], MinDist[j][i] + MinDist[i][k]);
//			}
//		}
//	}
//
//	int MinCycle = INT_MAX;
//
//	for (int i = 0; i < NumCity; i++)
//	{
//		for (int j = i + 1; j < NumCity; j++)
//		{
//			if (MinDist[i][j] != 999999999 && MinDist[j][i] != 999999999)
//			{
//				MinCycle = std::min(MinCycle, MinDist[i][j] + MinDist[j][i]);
//			}
//		}
//	}
//
//	if (MinCycle == INT_MAX)
//	{
//		MinCycle = -1;
//	}
//
//	std::cout << MinCycle;
//
//	return 0;
//}