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
//int main()
//{
//	Init();
//
//	int NumOfNode = 0;
//	int NumOfEdge = 0;
//	std::cin >> NumOfNode >> NumOfEdge;
//
//	std::vector<std::vector<std::pair<int, int>>> Link(NumOfNode);
//
//	for(int i = 0; i < NumOfEdge; i++)
//	{
//		int Start = 0;
//		int End = 0;
//		int CurCost = 0;
//		std::cin >> Start >> End >> CurCost;
//
//		Link[Start - 1].push_back({ End - 1, CurCost });
//		Link[End - 1].push_back({ Start - 1, CurCost });
//	}
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> Queue;
//	Queue.push({ 0, 0 });
//
//	std::vector<int> MinCosts(NumOfNode, INT_MAX);
//
//	while (Queue.size() > 0)
//	{
//		std::pair<int, int> CurPair = Queue.top();
//		Queue.pop();
//
//		int CurCost = CurPair.first;
//		int CurNode = CurPair.second;
//
//		if (MinCosts[CurNode] < CurCost)
//		{
//			continue;
//		}
//
//		for (int i = 0; i < Link[CurNode].size(); i++)
//		{
//			int NextNode = Link[CurNode][i].first;
//
//			if (CurCost + Link[CurNode][i].second < MinCosts[NextNode])
//			{
//				MinCosts[NextNode] = CurCost + Link[CurNode][i].second;
//				Queue.push({ MinCosts[NextNode], NextNode });
//			}
//		}
//	}
//
//	std::cout << MinCosts[NumOfNode - 1];
//
//	return 0;
//}