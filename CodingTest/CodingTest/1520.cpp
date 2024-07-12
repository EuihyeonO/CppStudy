//#include <iostream>
//#include <stack>
//#include <algorithm>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<int> DirX = { -1, 0, 1, 0 };
//std::vector<int> DirY = { 0, -1, 0, 1 };
//
//std::vector<std::vector<int>> Map;
//std::vector<std::vector<int>> DP;
//
//int Recursive(int _CurX, int _CurY)
//{
//	if (_CurX == Map[0].size() - 1 && _CurY == Map.size() - 1)
//	{
//		return 1;
//	}
//
//	if (DP[_CurY][_CurX] != -1)
//	{
//		return DP[_CurY][_CurX];
//	}
//
//	DP[_CurY][_CurX] = 0;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _CurX + DirX[i];
//		int NextY = _CurY + DirY[i];
//
//		if (NextX < 0 || NextY < 0 || NextX >= Map[0].size() || NextY >= Map.size())
//		{
//			continue;
//		}
//
//		if (Map[NextY][NextX] >= Map[_CurY][_CurX])
//		{
//			continue;
//		}
//
//		DP[_CurY][_CurX] += Recursive(NextX, NextY);
//	}
//
//	return DP[_CurY][_CurX];
//}
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//
//	std::cin >> Height;
//	std::cin >> Width;
//
//	Map.resize(Height, std::vector<int>(Width, 0));
//	DP.resize(Height, std::vector<int>(Width, -1));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	Recursive(0, 0);
//
//	std::cout << DP[0][0];
//
//	return 0;
//}