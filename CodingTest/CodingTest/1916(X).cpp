//#include <iostream>
//#include <vector>
//#include <queue>
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
//struct Bus
//{
//};
//
//int main()
//{
//	Init();
//
//	int NumCity = 0;
//	int NumBus = 0;
//	std::cin >> NumCity >> NumBus;
//
//	std::vector<std::vector<int>> LinkCity(NumCity + 1);
//	std::vector<std::vector<int>> Cost(NumCity + 1, std::vector<int>(NumCity + 1));
//
//	for (int i = 0; i < NumBus; i++)
//	{
//		int Start = 0;
//		int End = 0;
//		int CurCost = 0;
//		
//		std::cin >> Start >> End >> CurCost;
//
//		LinkCity[Start].push_back(End);
//		Cost[Start][End] = CurCost;
//	}
//
//	int Start = 0;
//	int Dest = 0;
//	std::cin >> Start >> Dest;
//
//	std::vector<int> MinCost(NumCity + 1, INT_MAX);
//	
//	//거리, 도시
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> PQ;
//	PQ.push({ 0, Start});
//	MinCost[Start] = 0;
//
//	while (PQ.size() > 0)
//	{
//		int CurCost = PQ.top().first;
//		int CurCity = PQ.top().second;
//
//		PQ.pop();
//
//		for (int i = 0; i < LinkCity[CurCity].size(); i++)
//		{
//			int NextCity = LinkCity[CurCity][i];
//
//			if (MinCost[NextCity] > Cost[CurCity][NextCity] + CurCost)
//			{
//				MinCost[NextCity] = Cost[CurCity][NextCity] + CurCost;
//				PQ.push({ MinCost[NextCity], NextCity });
//			}
//		}
//	}
//
//	std::cout << MinCost[Dest];
//
//	return 0;
//}