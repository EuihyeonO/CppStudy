//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void Dijk(std::vector<int>& _Cost, std::vector<std::vector<std::pair<int, int>>>& _Link, int _StartNode)
//{
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> Queue;
//	
//	Queue.push({ 0, _StartNode });
//
//	while (Queue.size() > 0)
//	{
//		int CurNode = Queue.top().second;
//		int CurCost = Queue.top().first;
//
//		Queue.pop();
//
//		if (_Cost[CurNode] < CurCost)
//		{
//			continue;
//		}
//
//		for (int j = 0; j < _Link[CurNode].size(); j++)
//		{
//			int NextNode = _Link[CurNode][j].second;
//			int NextCost = _Link[CurNode][j].first;
//
//			int NextCostSum = CurCost + NextCost;
//
//			if (NextCostSum < _Cost[NextNode])
//			{
//				_Cost[NextNode] = NextCostSum;
//				Queue.push({ NextCostSum, NextNode });
//			}
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumMan = 0;
//	int NumRoad = 0;
//	int PartyNode = 0;
//	
//	std::cin >> NumMan >> NumRoad >> PartyNode;
//	
//	std::vector<std::vector<std::pair<int, int>>> Link(NumMan);
//	std::vector<std::vector<std::pair<int, int>>> ReverseLink(NumMan);
//
//	for (int i = 0; i < NumRoad; i++)
//	{
//		int Start = 0;
//		int End = 0;
//		int Cost = 0;
//		
//		std::cin >> Start >> End >> Cost;
//
//		Link[Start - 1].push_back({ Cost, End - 1});
//		ReverseLink[End - 1].push_back({ Cost, Start - 1 });
//	}
//
//	std::vector<int> Costs(NumMan, INT_MAX);
//	std::vector<int> ReverseCosts(NumMan, INT_MAX);
//
//	Dijk(Costs, Link, PartyNode - 1);
//	Dijk(ReverseCosts, ReverseLink, PartyNode - 1);
//
//	int MaxCost = -1;
//
//	Costs[PartyNode - 1] = 0;
//	ReverseCosts[PartyNode - 1] = 0;
//
//	for (int i = 0; i < NumMan; i++)
//	{
//		int CurCost = Costs[i] + ReverseCosts[i];
//		MaxCost = std::max(MaxCost, CurCost);
//	}
//
//	std::cout << MaxCost;
//
//	return 0;
//}