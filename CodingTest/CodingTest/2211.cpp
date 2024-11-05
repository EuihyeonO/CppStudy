//#include <iostream>
//#include <vector>
//#include <climits>
//#include <queue>
//#include <map>
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
//	int NumComputer = 0, NumLine = 0;
//	std::cin >> NumComputer >> NumLine;
//
//	std::vector<std::vector<std::pair<int, int>>> Link(NumComputer);
//	for (int i = 0; i < NumLine; i++)
//	{
//		int Start = 0, End = 0, Cost = 0;
//		std::cin >> Start >> End >> Cost;
//
//		Link[Start - 1].push_back({ End - 1, Cost });
//		Link[End - 1].push_back({ Start - 1, Cost });
//	}
//
//	std::vector<int> MinDist(NumComputer, INT_MAX);
//	MinDist[0] = 0;
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> Dijk;
//	Dijk.push({ 0, 0 });
//
//	std::map<int, std::pair<int, int>> Answers;
//
//	while (Dijk.size() > 0)
//	{
//		auto [CurNode, CurDist] = Dijk.top();
//		Dijk.pop();
//
//		for (int i = 0; i < Link[CurNode].size(); i++)
//		{
//			int NextNode = Link[CurNode][i].first;
//
//			if (MinDist[NextNode] > CurDist + Link[CurNode][i].second)
//			{
//				MinDist[NextNode] = CurDist + Link[CurNode][i].second;
//				Answers[NextNode] = { CurNode, NextNode };
//
//				Dijk.push({ NextNode, MinDist[NextNode] });
//			}
//		}
//	}
//
//	std::cout << Answers.size() << "\n";
//
//	for (const auto& Pair : Answers)
//	{
//		std::cout << Pair.second.first + 1 << " " << Pair.second.second + 1 << "\n";
//	}
//	
//	return 0;
//}