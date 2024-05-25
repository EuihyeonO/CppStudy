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
//std::vector<std::vector<int>> Map;
//
//#define HORIZON 0
//#define CROSS 1
//#define VERTICAL 2
//
//std::vector<int> DirX = { 1, 1, 0 };
//std::vector<int> DirY = { 0, 1, 1 };
//
//int Count = 0;
//
//void DFS(int _X, int _Y, int _Dir)
//{
//	if (_X == Map.size() - 1 && _Y == Map.size() - 1)
//	{
//		Count++;
//		return;
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (_Dir == HORIZON && i == VERTICAL)
//		{
//			continue;
//		}
//
//		if (_Dir == VERTICAL && i == HORIZON)
//		{
//			continue;
//		}
//
//		int NextX = _X + DirX[i];
//		int NextY = _Y + DirY[i];
//
//		if (NextX < 0 || NextY < 0 || NextX >= Map.size() || NextY >= Map.size())
//		{
//			continue;
//		}
//
//		if (Map[NextY][NextX] == 1)
//		{
//			continue;
//		}
//
//		if (i == CROSS && (Map[NextY - 1][NextX] == 1 || Map[NextY][NextX - 1] == 1))
//		{
//			continue;
//		}
//
//		DFS(NextX, NextY, i);
//	}
//}
//
//int main()
//{
//	Init();
//	
//	int Width = 0;
//	std::cin >> Width;
//
//	Map.resize(Width, std::vector<int>(Width));
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	DFS(1, 0, HORIZON);
//
//	std::cout << Count;
//
//	return 0;
//}