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
//int main()
//{
//	Init();
//
//	int Width = 0;
//	std::cin >> Width;
//
//	std::vector<std::vector<int>> Map(Width, std::vector<int>(Width));
//	std::vector<std::vector<int>> Cost(Width, std::vector<int>(Width, INT_MAX));
//
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push({ 0, 0 });
//	Cost[0][0] = 0;
//
//	std::vector<int> DirX = { 0, 1 };
//	std::vector<int> DirY = { 1, 0 };
//
//	int Count = 0;
//
//	while (BFS.size() > 0)
//	{
//		Count++;
//
//		std::pair<int, int> CurPos = BFS.front();
//		BFS.pop();
//
//		for (int i = 0; i < 2; i++)
//		{
//			int NextX = CurPos.second + DirX[i];
//			int NextY = CurPos.first + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Width)
//			{
//				continue;
//			}
//
//			if (Map[NextY][NextX] < Map[CurPos.first][CurPos.second])
//			{
//				if (Cost[NextY][NextX] <= Cost[CurPos.first][CurPos.second])
//				{
//					continue;
//				}
//
//				BFS.push({ NextY, NextX });
//				Cost[NextY][NextX] = Cost[CurPos.first][CurPos.second];
//			}
//			else
//			{
//				int NextCost = Cost[CurPos.first][CurPos.second] + Map[NextY][NextX] - Map[CurPos.first][CurPos.second] + 1;
//
//				if (Cost[NextY][NextX] <= NextCost)
//				{
//					continue;
//				}
//
//				BFS.push({ NextY, NextX });
//				Cost[NextY][NextX] = std::min(NextCost, Cost[NextY][NextX]);
//			}
//		}
//	}
//
//	std::cout << Cost[Width - 1][Width - 1];
//
//	return 0;
//}