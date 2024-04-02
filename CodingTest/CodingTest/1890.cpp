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
//int Width = 0;
//std::vector<std::vector<int>> Board;
//std::vector<std::vector<long long>> DP;
//
//long long DFS(int _X, int _Y)
//{
//	if (_X == Width - 1 && _Y == Width - 1)
//	{
//		return 1;
//	}
//
//	if (Board[_Y][_X] == 0)
//	{
//		return 0;
//	}
//
//	if (DP[_Y][_X] != 0)
//	{
//		return DP[_Y][_X];
//	}
//
//	int CurWeight = Board[_Y][_X];
//
//	{
//		int NextRightX = _X + CurWeight;
//		int NextRightY = _Y;
//
//		if (NextRightX < Width && NextRightY < Width)
//		{
//			DP[_Y][_X] += DFS(NextRightX, NextRightY);
//		}
//	}
//
//	{
//		int NextDownX = _X;
//		int NextDownY = _Y + CurWeight;
//
//		if (NextDownX < Width && NextDownY < Width)
//		{
//			DP[_Y][_X] += DFS(NextDownX, NextDownY);
//		}
//	}
//
//	return DP[_Y][_X];
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> Width;
//
//	Board.resize(Width, std::vector<int>(Width, 0));
//	DP.resize(Width, std::vector<long long>(Width, 0));
//
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Board[i][j];
//		}
//	}
//
//	DFS(0, 0);
//
//	std::cout << DP[0][0];
//
//	return 0;
//}