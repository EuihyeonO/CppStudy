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
//int MapSize = 0;
//std::vector<std::vector<int>> Map;
//std::vector<std::vector<int>> DP;
//
//int BackTracking(int _Y, int _X)
//{
//	if (DP[_Y][_X] != -1)
//	{
//		return DP[_Y][_X];
//	}
//	
//	DP[_Y][_X] = 1;
//
//	static std::vector<int> DirX = { 0, 1, 0, -1 };
//	static std::vector<int> DirY = { -1, 0, 1, 0 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _X + DirX[i];
//		int NextY = _Y + DirY[i];
//
//		if (NextX >= MapSize || NextY >= MapSize || NextX < 0 || NextY < 0)
//		{
//			continue;
//		}
//
//		if (Map[NextY][NextX] <= Map[_Y][_X])
//		{
//			continue;
//		}
//
//		DP[_Y][_X] = std::max(DP[_Y][_X], BackTracking(NextY, NextX) + 1);
//	}
//
//	return DP[_Y][_X];
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> MapSize;
//	
//	Map.resize(MapSize, std::vector<int>(MapSize));
//	DP.resize(MapSize, std::vector<int>(MapSize, -1));
//
//	for (int i = 0; i < MapSize; i++)
//	{
//		for (int j = 0; j < MapSize; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//	
//	int Answer = 0;
//
//	for (int i = 0; i < MapSize; i++)
//	{
//		for (int j = 0; j < MapSize; j++)
//		{
//			Answer = std::max(Answer, BackTracking(i, j));
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}