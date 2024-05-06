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
//int TargetDist = 0;
//int Answer = 0;
//
//std::vector<std::vector<char>> Map;
//std::vector<std::vector<bool>> isVisit;
//
//std::vector<int> DirX = { 1, 0, -1, 0 };
//std::vector<int> DirY = { 0, 1, 0, -1 };
//
//void DFS(int _CurX, int _CurY, int _Depth)
//{
//	isVisit[_CurY][_CurX] = true;
//
//	if (_CurX == Width - 1 && _CurY == 0)
//	{
//		if (_Depth == TargetDist)
//		{
//			Answer++;
//		}
//
//		isVisit[_CurY][_CurX] = false;
//
//		return;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _CurX + DirX[i];
//		int NextY = _CurY + DirY[i];
//
//		if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//		{
//			continue;
//		}
//
//		if (Map[NextY][NextX] == 'T')
//		{
//			continue;
//		}
//
//		if (isVisit[NextY][NextX] == true)
//		{
//			continue;
//		}
//
//		DFS(NextX, NextY, _Depth + 1);
//	}
//
//	isVisit[_CurY][_CurX] = false;
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> Height >> Width >> TargetDist;
//	
//	Map.resize(Height, std::vector<char>(Width, 0));
//	isVisit.resize(Height, std::vector<bool>(Width, false));
//	
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	DFS(0, Height - 1, 1);
//
//	std::cout << Answer;
//
//	return 0;
//}