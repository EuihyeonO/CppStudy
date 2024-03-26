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
//struct Node
//{
//	std::pair<int, int> Pos;
//	int MoveCount = 0;
//};
//
//int main()
//{
//	Init();
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<std::pair<int, int>> MoveDir = { {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1} };
//	std::vector<int> Answers(NumOfTestCase);
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		int BoardSize = 0;
//		std::cin >> BoardSize;
//
//		std::pair<int, int> StartPos = { 0, 0 };
//		std::pair<int, int> TargetPos = { 0, 0 };
//	
//		std::cin >> StartPos.first >> StartPos.second;
//		std::cin >> TargetPos.first >> TargetPos.second;
//
//		std::vector<std::vector<bool>> isVisit(BoardSize, std::vector<bool>(BoardSize, false));
//
//		std::queue<Node> BFS;
//		BFS.push({ StartPos, 0 });
//		isVisit[StartPos.first][StartPos.second] = true;
//
//		int MoveCount = 0;
//
//		while (BFS.size() > 0)
//		{
//			std::pair<int, int> CurPos = BFS.front().Pos;
//			int CurMoveCount = BFS.front().MoveCount;
//			BFS.pop();
//			
//			if (CurPos == TargetPos)
//			{
//				MoveCount = CurMoveCount;
//				break;
//			}
//
//			for (int j = 0; j < 8; j++)
//			{
//				std::pair<int, int> NextPos = { CurPos.first + MoveDir[j].first, CurPos.second + MoveDir[j].second };
//
//				if (NextPos.first < 0 || NextPos.second < 0 || NextPos.first >= BoardSize || NextPos.second >= BoardSize)
//				{
//					continue;
//				}
//
//				if (isVisit[NextPos.first][NextPos.second] == true)
//				{
//					continue;
//				}
//
//				BFS.push({NextPos, CurMoveCount + 1});
//				isVisit[NextPos.first][NextPos.second] = true;
//			}
//		}
//
//		Answers[i] = MoveCount;
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}