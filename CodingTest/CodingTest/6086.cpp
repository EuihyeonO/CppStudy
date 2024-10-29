//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
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
//	int NumEdge = 0;
//	std::cin >> NumEdge;
//
//	std::map<int, std::vector<int>> Link;
//	std::vector<std::vector<int>> CurFlow(52, std::vector<int>(52, 0));
//	std::vector<std::vector<int>> MaxFlow(52, std::vector<int>(52, 0));
//
//	for (int i = 0; i < NumEdge; i++)
//	{
//		char Start = 0, End = 0;
//		int Flow = 0;
//
//		std::cin >> Start >> End >> Flow;
//
//		if (Start >= 'A' && Start <= 'Z')
//		{
//			Start -= 'A';
//		}
//		else
//		{
//			Start -= 'a';
//			Start += 26;
//		}
//
//		if (End >= 'A' && End <= 'Z')
//		{
//			End -= 'A';
//		}
//		else
//		{
//			End -= 'a';
//			End += 26;
//		}
//
//		Link[End].push_back(Start);
//		Link[Start].push_back(End);
//		
//		MaxFlow[Start][End] += Flow;
//		MaxFlow[End][Start] += Flow;
//	}
//
//	std::vector<int> Prev(52, -1);
//	int Answer = 0;
//
//	while (true)
//	{
//		std::fill(Prev.begin(), Prev.end(), -1);
//
//		std::queue<int> Queue;
//		Queue.push(0);
//
//		while (Queue.size() > 0)
//		{
//			int CurNode = Queue.front();
//			Queue.pop();
//
//			for (int i = 0; i < Link[CurNode].size(); i++)
//			{
//				int NextNode = Link[CurNode][i];
//
//				if (CurFlow[CurNode][NextNode] < MaxFlow[CurNode][NextNode] && Prev[NextNode] == -1)
//				{
//					Prev[NextNode] = CurNode;
//					Queue.push(NextNode);
//
//					if (NextNode == 'Z' - 'A')
//					{
//						break;
//					}
//				}
//			}
//		}
//
//		if (Prev['Z' - 'A'] == -1)
//		{
//			break;
//		}
//
//		int BTNode = 'Z' - 'A';
//		int MinCapacity = INT_MAX;
//
//		while (BTNode != 0)
//		{
//			MinCapacity = std::min(MinCapacity, MaxFlow[Prev[BTNode]][BTNode] - CurFlow[Prev[BTNode]][BTNode]);
//			BTNode = Prev[BTNode];
//		}
//
//		BTNode = 'Z' - 'A';
//
//		while (BTNode != 0)
//		{
//			CurFlow[Prev[BTNode]][BTNode] += MinCapacity;
//			CurFlow[BTNode][Prev[BTNode]] -= MinCapacity;
//
//			BTNode = Prev[BTNode];
//		}
//
//		Answer += MinCapacity;
//	}
//
//	std::cout << Answer << "\n";
//
//	return 0;
//}