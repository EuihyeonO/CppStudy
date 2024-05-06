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
//
//int Height = 0;
//int Width = 0;
//
//std::vector<std::vector<char>> Field;
//std::vector<std::vector<bool>> isVisit;
//
//std::vector<int> DirX = { 1, 0, -1, 0 };
//std::vector<int> DirY = { 0, 1, 0, -1 };
//
//int DFS(int _CurX, int _CurY, char _Team)
//{
//	isVisit[_CurY][_CurX] = true;
//
//	int Answer = 1;
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
//		if (isVisit[NextY][NextX] == true)
//		{
//			continue;
//		}
//
//		if (Field[NextY][NextX] != _Team)
//		{
//			continue;
//		}
//
//		Answer += DFS(NextX, NextY, _Team);
//	}
//
//	return Answer;
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> Width >> Height;
//
//	Field.resize(Height, std::vector<char>(Width, '0'));
//	isVisit.resize(Height, std::vector<bool>(Width, false));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Field[i][j];
//		}
//	}
//
//	int WCount = 0;
//	int BCount = 0;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (isVisit[i][j] == true)
//			{
//				continue;
//			}
//
//			int Count = DFS(j, i, Field[i][j]);
//
//			if (Field[i][j] == 'W')
//			{
//				WCount += Count * Count;
//			}
//			else
//			{
//				BCount += Count * Count;
//			}
//		}
//	}
//
//	std::cout << WCount << " " << BCount;
//
//	return 0;
//}