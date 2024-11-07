//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//#include <algorithm>
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
//	int HorseCount = 0;
//	std::cin >> HorseCount;
//
//	int Width = 0, Height = 0;
//	std::cin >> Width >> Height;
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
//	std::vector<std::vector<std::vector<bool>>> IsVisit(31, std::vector<std::vector<bool>>(Height, std::vector<bool>(Width)));
//	IsVisit[0][0][0] = true;
//
//	std::queue<std::tuple<int, int, int, int>> BFS;
//	BFS.push({ 0, 0, 0, HorseCount });
//
//	std::vector<int> DirX = { 0, 1, 0, -1 };
//	std::vector<int> DirY = { 1, 0, -1, 0 };
//
//	std::vector<int> HorseDirX = { -2, -2, -1, -1, 1, 1, 2, 2 };
//	std::vector<int> HorseDirY = { -1, 1, -2, 2, -2, 2, -1, 1 };
//
//	int Answer = INT_MAX;
//
//	while (BFS.size() > 0)
//	{
//		auto [CurY, CurX, MoveCount, CurHorseCount] = BFS.front();
//		BFS.pop();
//
//		if (CurY == Height - 1 && CurX == Width - 1)
//		{
//			Answer = std::min(Answer, MoveCount);
//			continue;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurX + DirX[i];
//			int NextY = CurY + DirY[i];
//
//			if (NextY == 4 && NextX == 4)
//			{
//				int a = 0;
//			}
//
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//			{
//				continue;
//			}
//
//			if (IsVisit[CurHorseCount][NextY][NextX] == true)
//			{
//				continue;
//			}
//
//			if (Board[NextY][NextX] == 1)
//			{
//				continue;
//			}
//
//			IsVisit[CurHorseCount][NextY][NextX] = true;
//			BFS.push({ NextY, NextX, MoveCount + 1, CurHorseCount });
//		}
//
//		if (CurHorseCount == 0)
//		{
//			continue;
//		}
//
//		for (int i = 0; i < 8; i++)
//		{
//			int NextX = CurX + HorseDirX[i];
//			int NextY = CurY + HorseDirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//			{
//				continue;
//			}
//
//			if (IsVisit[CurHorseCount - 1][NextY][NextX] == true)
//			{
//				continue;
//			}
//
//			if (Board[NextY][NextX] == 1)
//			{
//				continue;
//			}
//
//			IsVisit[CurHorseCount - 1][NextY][NextX] = true;
//			BFS.push({ NextY, NextX, MoveCount + 1, CurHorseCount - 1 });
//		}
//	}
//
//	if (Answer == INT_MAX)
//	{
//		Answer = -1;
//	}
//
//	std::cout << Answer;
//	return 0;
//}