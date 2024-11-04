//#include <iostream>
//#include <vector>
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
//int main()
//{
//	Init();
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int NumNode = 0, NumEdge = 0;
//		std::cin >> NumNode >> NumEdge;
//
//		std::vector<std::vector<int>> Link(NumNode);
//		std::vector<int> GroupTypes(NumNode);
//		std::vector<bool> IsVisit(NumNode);
//
//		for (int i = 0; i < NumEdge; i++)
//		{
//			int Start = 0, End = 0;
//			std::cin >> Start >> End;
//
//			Link[Start - 1].push_back(End - 1);
//			Link[End - 1].push_back(Start - 1);
//		}
//
//		bool IsBG = true;
//
//		while (true)
//		{
//			auto Iter = std::find(IsVisit.begin(), IsVisit.end(), false);
//
//			if (Iter == IsVisit.end())
//			{
//				break;
//			}
//
//			int Index = Iter - IsVisit.begin();
//
//			std::queue<int> BFS;
//			BFS.push(Index);
//
//			IsVisit[Index] = true;
//			GroupTypes[Index] = 1;
//
//			while (BFS.size() > 0)
//			{
//				int CurNode = BFS.front();
//				BFS.pop();
//
//				for (int i = 0; i < Link[CurNode].size(); i++)
//				{
//					int NextNode = Link[CurNode][i];
//
//					if (GroupTypes[NextNode] == GroupTypes[CurNode])
//					{
//						IsBG = false;
//						break;
//					}
//
//					if (IsVisit[NextNode] == false)
//					{
//						GroupTypes[NextNode] = -GroupTypes[CurNode];
//						IsVisit[NextNode] = true;
//						BFS.push(NextNode);
//					}
//				}
//			}
//		}
//
//		(IsBG == true) ? std::cout << "YES\n" : std::cout << "NO\n";
//	}
//
//	return 0;
//}