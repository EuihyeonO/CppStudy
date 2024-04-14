//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int Height = 0;
//int Width = 0;
//
//int Max = 0;
//
//std::vector<std::vector<int>> Board;
//std::vector<std::pair<int, int>> Dir = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
//
//void DFS(int _X, int _Y, int _PrevX, int _PrevY, int _Sum, int _Depth)
//{
//	if (_Depth == 4)
//	{
//		Max = std::max(Max, _Sum + Board[_Y][_X]);
//		return;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextY = _Y + Dir[i].first;
//		int NextX = _X + Dir[i].second;
//
//		if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//		{
//			continue;
//		}
//
//		if (_PrevX == NextX && _PrevY == NextY)
//		{
//			continue;
//		}
//
//		DFS(NextX, NextY, _X, _Y, _Sum + Board[_Y][_X], _Depth + 1);
//	}
//}
//
//void GetMaxAnother(int _X, int _Y)
//{
//	if (_Y + 2 < Height)
//	{
//		int Sum = Board[_Y][_X] + Board[_Y + 1][_X] + Board[_Y + 2][_X];
//
//		if (_X - 1 >= 0)
//		{
//			Max = std::max(Max, Sum + Board[_Y + 1][_X - 1]);
//		}
//
//		if (_X + 1 < Width)
//		{
//			Max = std::max(Max, Sum + Board[_Y + 1][_X + 1]);
//		}
//	}
//
//	if (_X + 2 < Width)
//	{
//		int Sum = Board[_Y][_X] + Board[_Y][_X + 1] + Board[_Y][_X + 2];
//
//		if (_Y - 1 >= 0)
//		{
//			Max = std::max(Max, Sum + Board[_Y - 1][_X + 1]);
//		}
//
//		if (_Y + 1 < Height)
//		{
//			Max = std::max(Max, Sum + Board[_Y + 1][_X + 1]);
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> Height >> Width;
//
//	Board.resize(Height, std::vector<int>(Width, 0));
//	
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Board[i][j];
//		}
//	}
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			DFS(j, i, -1, -1, 0, 1);
//			GetMaxAnother(j, i);
//		}
//	}
//
//	std::cout << Max;
//
//	return 0;
//}