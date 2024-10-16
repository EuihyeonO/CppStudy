//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::string StrTree = "";
//std::vector<std::vector<int>> Link;
//
//std::string Answer = "";
//
//struct Node
//{
//	int CurIndex = 0;
//	int PrevIndex = 0;
//	int Depth = 0;
//};
//
//void BFS()
//{
//	std::queue<Node> Queue;
//	Queue.push({0, -1, 1});
//
//	Answer += StrTree[0];
//
//	while (Queue.size() > 0)
//	{
//		int Cur = Queue.front().CurIndex;
//		int Prev = Queue.front().PrevIndex;
//		int Depth = Queue.front().Depth;
//
//		Queue.pop();
//
//		if (Depth > 1 && Answer[Depth - 2] != StrTree[Prev])
//		{
//			if (Answer[Depth - 1] == StrTree[Cur])
//			{
//				Answer[Depth - 1] = 0;
//			}
//
//			continue;
//		}
//
//		for (int i = 0; i < Link[Cur].size(); i++)
//		{
//			int NextIndex = Link[Cur][i];
//
//			if (NextIndex == Prev)
//			{
//				continue;
//			}
//
//			if (Answer.size() == Depth)
//			{
//				if (Answer[Depth - 1] == StrTree[Cur])
//				{
//					Answer += StrTree[NextIndex];
//					Queue.push({ NextIndex, Cur, Depth + 1 });
//				}
//			}
//			else if (Answer.size() > Depth && Answer[Depth] <= StrTree[NextIndex])
//			{
//				Answer[Depth] = StrTree[NextIndex];
//				Queue.push({ NextIndex, Cur, Depth + 1 });
//			}
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumOfNode = 0;
//	std::cin >> NumOfNode;
//	
//	StrTree.resize(NumOfNode);
//	std::cin >> StrTree;
//
//	Link.resize(NumOfNode, std::vector<int>());
//
//	for (int i = 0; i < NumOfNode - 1; i++)
//	{
//		int Start = 0;
//		int End = 0;
//
//		std::cin >> Start >> End;
//
//		Link[Start - 1].push_back(End - 1);
//		Link[End - 1].push_back(Start - 1);
//	}
//
//	BFS();
//
//	std::cout << Answer;
//	
//	return 0;
//}