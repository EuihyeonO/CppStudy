//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//std::vector<std::vector<char>> Board;
//std::vector<bool> isVisit;
//
//int MaxDist = 0;
//
//std::vector<std::pair<int, int>> Dir = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
//
//void DFS(int _X, int _Y, int _Depth)
//{
//	char CurChar = Board[_Y][_X];
//	isVisit[CurChar - 'A'] = true;
//
//	bool CanGo = false;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _X + Dir[i].first;
//		int NextY = _Y + Dir[i].second;
//
//		if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//		{
//			continue;
//		}
//
//		char NextChar = Board[NextY][NextX];
//		if (isVisit[NextChar - 'A'] == true)
//		{
//			continue;
//		}
//
//		CanGo = true;
//
//		DFS(NextX, NextY, _Depth + 1);
//	}
//
//	isVisit[CurChar - 'A'] = false;
//
//	if (CanGo == false)
//	{
//		MaxDist = std::max(MaxDist, _Depth);
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> Height >> Width;
//
//	Board.resize(Height, std::vector<char>(Width));
//	isVisit.resize(26);
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Board[i][j];
//		}
//	}
//
//	DFS(0, 0, 1);
//
//	std::cout << MaxDist;
//
//	return 0;
//}