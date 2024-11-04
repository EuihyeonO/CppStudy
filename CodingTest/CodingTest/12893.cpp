//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <tuple>
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
//	int NumMan = 0, NumRelation = 0;
//	std::cin >> NumMan >> NumRelation;
//
//	std::vector<std::vector<int>> Link(NumMan);
//	std::vector<int> Relation(NumMan);
//	std::vector<bool> isVisit(NumMan);
//
//	for (int i = 0; i < NumRelation; i++)
//	{
//		int Start = 0, End = 0;
//		std::cin >> Start >> End;
//
//		Link[Start - 1].push_back(End - 1);
//		Link[End - 1].push_back(Start - 1);
//	}
//
//	while (true)
//	{
//		auto FindIter = std::find(isVisit.begin(), isVisit.end(), false);
//
//		if (FindIter == isVisit.end())
//		{
//			break;
//		}
//
//		int Index = FindIter - isVisit.begin();
//
//		std::queue<int> BFS;
//		BFS.push(Index);
//
//		isVisit[Index] = true;
//		Relation[Index] = 1;
//
//		while (BFS.size() > 0)
//		{
//			int CurIndex = BFS.front();
//			BFS.pop();
//
//			for (int i = 0; i < Link[CurIndex].size(); i++)
//			{
//				int NextNode = Link[CurIndex][i];
//
//				if (Relation[NextNode] == Relation[CurIndex])
//				{
//					std::cout << 0;
//					return 0;
//				}
//
//				if (isVisit[NextNode] == false)
//				{
//					BFS.push(NextNode);
//					Relation[NextNode] = -Relation[CurIndex];
//					isVisit[NextNode] = true;
//				}
//			}
//		}
//	}
//
//	std::cout << 1;
//
//	return 0;
//}