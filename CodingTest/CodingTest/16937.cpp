//#include <iostream>
//#include <vector>
//#include <queue>
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
//	int Height = 0, Width = 0;
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Board(Height, std::vector<int>(Width));
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Board[i][j];
//		}
//	}
//
//	std::pair<int, int> RectSize, StartPos, EndPos;
//	std::cin >> RectSize.first >> RectSize.second >> StartPos.first >> StartPos.second >> EndPos.first >> EndPos.second;
//	StartPos.first--, StartPos.second--, EndPos.first--, EndPos.second--;
//
//	std::queue<std::tuple<std::pair<int, int>, int>> BFS;
//	BFS.push({ StartPos, 0 });
//
//	std::vector<std::vector<bool>> IsVisit(Height, std::vector<bool>(Width));
//	IsVisit[StartPos.first][StartPos.second] = true;
//
//	std::vector<int> DirX = { 1, -1, 0, 0};
//	std::vector<int> DirY = { 0, 0, 1, -1};
//
//	std::vector<int> CheckX = { RectSize.second, -1, 0, 0 };
//	std::vector<int> CheckY = { 0, 0, RectSize.first, -1 };
//
//	while (BFS.size() > 0)
//	{
//		auto [CurPos, MoveCount] = BFS.front();
//		BFS.pop();
//
//		if (CurPos == EndPos)
//		{
//			std::cout << MoveCount;
//			return 0;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurPos.second + DirX[i];
//			int NextY = CurPos.first + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX > Width - RectSize.second || NextY > Height - RectSize.first)
//			{
//				continue;
//			}
//
//			if (IsVisit[NextY][NextX] == true)
//			{
//				continue;
//			}
//
//			bool CanGo = true;
//
//			for (int j = 0; j < RectSize.first; j++)
//			{
//				if (Board[CurPos.first + j][CurPos.second + CheckX[i]] == 1)
//				{
//					CanGo = false;
//					break;
//				}
//			}
//
//			for (int j = 0; j < RectSize.second; j++)
//			{
//				if (Board[CurPos.first + CheckY[i]][CurPos.second + j] == 1)
//				{
//					CanGo = false;
//					break;
//				}
//			}
//
//			if (CanGo == true)
//			{
//				IsVisit[NextY][NextX] = true;
//				BFS.push({ {NextY, NextX}, MoveCount + 1 });
//			}
//		}
//	}
//
//	std::cout << -1;
//
//	return 0;
//}