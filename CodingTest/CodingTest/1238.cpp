//#include <iostream>
//#include <vector>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void Dijk(std::vector<int>& _Cost, std::vector<std::vector<std::pair<int, int>>>& _Link, int _StartNode, int _TargetNode)
//{
//	std::fill(_Cost.begin(), _Cost.end(), 999999999);
//
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
//	}
//
//	std::vector<int> Costs(NumMan);
//	int Answer = 0;
//
//	for (int i = 0; i < NumMan; i++)
//	{
//		if (i == PartyNode - 1)
//		{
//			continue;
//		}
//
//		Dijk(Costs, Link, i, PartyNode - 1);
//		int GoCost = Costs[PartyNode - 1];
//
//		Dijk(Costs, Link, PartyNode - 1, i);
//		int ComeCost = Costs[i];
//
//		Answer = std::max(Answer, GoCost + ComeCost);
//	}
//
//	std::cout << Answer;
//	
//	return 0;
//}