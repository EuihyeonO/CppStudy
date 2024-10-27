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
//std::vector<std::vector<std::pair<int, int>>> Link;
//std::vector<int> DistFrom2;
//std::vector<int> DP;
//int Answer = 0;
//
//void Dijk()
//{
//	DistFrom2[1] = 0;
//
//	//¿Œµ¶Ω∫, ∞≈∏Æ
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> PQ;
//	PQ.push({ 1, 0 });
//
//	while (PQ.size() > 0)
//	{
//		std::pair<int, int> CurNode = PQ.top();
//		PQ.pop();
//
//		for (int i = 0; i < Link[CurNode.first].size(); i++)
//		{
//			int NextIndex = Link[CurNode.first][i].first;
//			int Weight = Link[CurNode.first][i].second;
//
//			if (DistFrom2[NextIndex] > CurNode.second + Weight)
//			{
//				DistFrom2[NextIndex] = CurNode.second + Weight;
//				PQ.push({ NextIndex, DistFrom2[NextIndex] });
//			}
//		}
//	}
//}
//
//int DFS(int _Index)
//{
//	if (_Index == 1)
//	{
//		DP[_Index] = 1;
//		return DP[_Index];
//	}
//
//
//	if (DP[_Index] != 0)
//	{
//		return DP[_Index];
//	}
//
//	for (int i = 0; i < Link[_Index].size(); i++)
//	{
//		int NextIndex = Link[_Index][i].first;
//		int Weight = Link[_Index][i].second;
//
//		if (DistFrom2[_Index] > DistFrom2[NextIndex])
//		{
//			DP[_Index] += DFS(NextIndex);
//		}
//	}
//
//	return DP[_Index];
//}
//
//int main()
//{
//	Init();
//
//	int NumOfVertex = 0, NumOfEdge = 0;
//	std::cin >> NumOfVertex >> NumOfEdge;
//
//	Link.resize(NumOfVertex);
//	DistFrom2.resize(NumOfVertex, INT_MAX);
//	DP.resize(NumOfVertex, 0);
//
//	for (int i = 0; i < NumOfEdge; i++)
//	{
//		int Start = 0, End = 0, Weight = 0;
//		std::cin >> Start >> End >> Weight;
//
//		Link[Start - 1].push_back({ End - 1, Weight });
//		Link[End - 1].push_back({ Start - 1, Weight });
//	}
//
//	Dijk();
//	Answer = DFS(0);
//
//	std::cout << Answer;
//
//	return 0;
//}