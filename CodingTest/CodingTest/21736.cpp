//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
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
//	int Height = 0;
//	int Width = 0;
//	std::cin >> Height >> Width;
//
//	std::pair<int, int> StartPos;
//
//	std::vector<std::vector<char>> Map(Height, std::vector<char>(Width));
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if (Map[i][j] == 'I')
//			{
//				StartPos = { i, j };
//			}
//		}
//	}
//
//	std::vector<std::vector<bool>> isVisit(Height, std::vector<bool>(Width, false));
//	std::queue<std::pair<int, int>> BFS;
//
//	isVisit[StartPos.first][StartPos.second] = true;
//	BFS.push(StartPos);
//
//	std::vector<int> DirX = { 0, 1, 0, -1 };
//	std::vector<int> DirY = { 1, 0, -1, 0 };
//
//	int Answer = 0;
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurPos = BFS.front();
//		BFS.pop();
//		
//		if(Map[CurPos.first][CurPos.second] == 'P')
//		{
//			Answer++;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurPos.second + DirX[i];
//			int NextY = CurPos.first + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//			{
//				continue;
//			}
//
//			if (Map[NextY][NextX] == 'X')
//			{
//				continue;
//			}
//
//			if (isVisit[NextY][NextX] == true)
//			{
//				continue;
//			}
//
//			isVisit[NextY][NextX] = true;
//			BFS.push({ NextY, NextX });
//		}
//	}
//
//	if (Answer == 0)
//	{
//		std::cout << "TT";
//
//	}
//	else
//	{
//		std::cout << Answer;
//	}
//
//	return 0;
//}
