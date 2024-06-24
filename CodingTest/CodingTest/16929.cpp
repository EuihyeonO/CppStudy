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
//std::vector<std::vector<char>> Board;
//std::vector<std::vector<bool>> isVisit;
//
//std::vector<int> DirX = { 0, 1, 0, -1 };
//std::vector<int> DirY = { 1, 0, -1, 0 };
//
//bool isFind = false;
//
//void DFS(int _CurX, int _CurY, int _PrevX, int _PrevY)
//{
//	if (isFind == true)
//	{
//		return;
//	}
//
//	isVisit[_CurY][_CurX] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _CurX + DirX[i];
//		int NextY = _CurY + DirY[i];
//
//		if (NextX < 0 || NextY < 0 || NextX >= Board[0].size() || NextY >= Board.size())
//		{
//			continue;
//		}
//
//		if (Board[NextY][NextX] != Board[_CurY][_CurX])
//		{
//			continue;
//		}
//		
//		if (isVisit[NextY][NextX] == true)
//		{
//			if (NextY != _PrevY || NextX != _PrevX)
//			{
//				isFind = true;
//				return;
//			}
//
//			continue;
//		}
//
//		DFS(NextX, NextY, _CurX, _CurY);
//	}
//
//	isVisit[_CurY][_CurX] = false;
//}
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//
//	std::cin >> Height >> Width;
//
//	Board.resize(Height, std::vector<char>(Width));
//	isVisit.resize(Height, std::vector<bool>(Width));
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
//			DFS(j, i, j, i);
//
//			if (isFind == true)
//			{
//				break;
//			}
//		}
//
//		if (isFind == true)
//		{
//			break;
//		}
//	}
//
//	if (isFind == true)
//	{
//		std::cout << "Yes";
//	}
//	else
//	{
//		std::cout << "No";
//	}
//
//	return 0;
//}