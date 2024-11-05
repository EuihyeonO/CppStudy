//#include <iostream>
//#include <queue>
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
//	int NumCity = 0, NumBus = 0;
//	std::cin >> NumCity >> NumBus;
//
//	std::vector<std::vector<std::pair<int, int>>> Link(NumCity);
//
//	for (int i = 0; i < NumBus; i++)
//	{
//		int Start = 0, End = 0, Cost = 0;
//		std::cin >> Start >> End >> Cost;
//
//		Link[Start - 1].push_back({ End - 1, Cost});
//	}
//
//	int StartCity = 0, EndCity = 0;
//	std::cin >> StartCity >> EndCity;
//
//	StartCity--, EndCity--;
//
//	std::vector<int> MinDist(NumCity, INT_MAX);
//	MinDist[StartCity] = 0;
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> Dijk;
//	Dijk.push({ 0, StartCity });
//
//	while (Dijk.size() > 0)
//	{
//		auto [CurCost, CurCity] = Dijk.top();
//		Dijk.pop();
//
//		if (CurCost > MinDist[CurCity])
//		{
//			continue;
//		}
//
//		for (int i = 0; i < Link[CurCity].size(); i++)
//		{
//			int NextCity = Link[CurCity][i].first;
//
//			if (MinDist[NextCity] > CurCost + Link[CurCity][i].second)
//			{
//				MinDist[NextCity] = CurCost + Link[CurCity][i].second;
//				Dijk.push({ MinDist[NextCity], NextCity});
//			}
//		}
//	}
//
//	std::cout << MinDist[EndCity];
//
//	return 0;
//}