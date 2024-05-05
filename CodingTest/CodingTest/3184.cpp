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
//std::vector<std::vector<char>> Map;
//std::vector<std::vector<bool>> isVisit;
//
//std::vector<int> DirX = { -1, 0, 1, 0 };
//std::vector<int> DirY = { 0, 1, 0, -1 };
//
//int NumOfSheep = 0;
//int NumOfWolf = 0;
//
//int Height = 0;
//int Width = 0;
//
//void DFS(int _CurX, int _CurY, int& _NumOfSheep, int& _NumOfWolf)
//{
//	isVisit[_CurY][_CurX] = true;
//
//	if (Map[_CurY][_CurX] == 'o')
//	{
//		_NumOfSheep++;
//	}
//	else if (Map[_CurY][_CurX] == 'v')
//	{
//		_NumOfWolf++;
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
//		if (isVisit[NextY][NextX] == true)
//		{
//			continue;
//		}
//
//		if (Map[NextY][NextX] == '#')
//		{
//			continue;
//		}
//
//		DFS(NextX, NextY, _NumOfSheep, _NumOfWolf);
//	}	
//}
//
//int main()
//{
//	Init();
//	
//	std::cin >> Height >> Width;
//
//	Map.resize(Height, std::vector<char>(Width, '\0'));
//	isVisit.resize(Height, std::vector<bool>(Width, false));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if (Map[i][j] == 'o')
//			{
//				NumOfSheep++;
//			}
//			else if (Map[i][j] == 'v')
//			{
//				NumOfWolf++;
//			}
//		}
//	}
//
//	int AreaSheep = 0;
//	int AreaWolf = 0;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (Map[i][j] != '#' && isVisit[i][j] == false)
//			{
//				DFS(j, i, AreaSheep, AreaWolf);
//
//				if (AreaSheep > AreaWolf)
//				{
//					NumOfWolf -= AreaWolf;
//				}
//				else
//				{
//					NumOfSheep -= AreaSheep;
//				}
//				
//				AreaSheep = 0;
//				AreaWolf = 0;
//			}
//		}
//	}
//
//	std::cout << NumOfSheep << " " << NumOfWolf;
//
//	return 0;
//}