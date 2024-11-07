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
//std::vector<int> Dijk(int _StartNode, const std::vector<std::vector<std::pair<int, int>>>& _Link)
//{
//	std::vector<int> MinCost(_Link.size(), 100000000);
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> PQ;
//	PQ.push({ 0, _StartNode });
//	MinCost[_StartNode] = 0;
//
//	while (PQ.size() > 0)
//	{
//		auto [CurCost, CurNode] = PQ.top();
//		PQ.pop();
//
//		for (int i = 0; i < _Link[CurNode].size(); i++)
//		{
//			int NextNode = _Link[CurNode][i].first;
//			int NextCost = _Link[CurNode][i].second + CurCost;
//
//			if (NextCost < MinCost[NextNode])
//			{
//				MinCost[NextNode] = NextCost;
//				PQ.push({ NextCost, NextNode });
//			}
//		}
//	}
//
//	return MinCost;
//}
//
//int main()
//{
//	Init();
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int NumNode = 0, NumEdge = 0, NumEndNode = 0;
//		std::cin >> NumNode >> NumEdge >> NumEndNode;
//
//		int StartNode = 0;
//		std::pair<int, int> FindedEdge;
//
//		std::cin >> StartNode >> FindedEdge.first >> FindedEdge.second;
//		StartNode--, FindedEdge.first--, FindedEdge.second--;
//
//		std::vector<std::vector<std::pair<int, int>>> Link(NumNode);
//		for (int i = 0; i < NumEdge; i++)
//		{
//			int Start = 0, End = 0, Cost = 0;
//			std::cin >> Start >> End >> Cost;
//
//			Link[Start - 1].push_back({ End - 1, Cost });
//			Link[End - 1].push_back({ Start - 1, Cost });
//		}
//
//		std::vector<int> EndNodes(NumEndNode);
//		for (int i = 0; i < NumEndNode; i++)
//		{
//			std::cin >> EndNodes[i];
//			EndNodes[i]--;
//		}
//
//		std::vector<int> MinCostFromStart = Dijk(StartNode, Link);
//		std::vector<int> MinCostFromEdgeF = Dijk(FindedEdge.first, Link);
//		std::vector<int> MinCostFromEdgeS = Dijk(FindedEdge.second, Link);
//	
//		std::vector<int> Answer;
//		Answer.reserve(EndNodes.size());
//
//		for (int i = 0; i < EndNodes.size(); i++)
//		{
//			int CurNode = EndNodes[i];
//
//			int MinCost_1 = MinCostFromStart[CurNode];
//			
//			int MinCost_2 = MinCostFromStart[FindedEdge.first] + MinCostFromEdgeF[FindedEdge.second] + MinCostFromEdgeS[CurNode];
//			int MinCost_3 = MinCostFromStart[FindedEdge.second] + MinCostFromEdgeS[FindedEdge.first] + MinCostFromEdgeF[CurNode];
//
//			if (MinCost_1 == std::min(MinCost_2, MinCost_3))
//			{
//				Answer.push_back(CurNode);
//			}
//		}
//
//		std::sort(Answer.begin(), Answer.end());
//		for (int AnswerNode : Answer)
//		{
//			std::cout << AnswerNode + 1 << " ";
//		}
//
//		std::cout << "\n";
//	}
//
//
//	return 0;
//}