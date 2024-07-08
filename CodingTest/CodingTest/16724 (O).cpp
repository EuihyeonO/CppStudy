//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::map<char, std::pair<int, int>> Direction;
//std::vector<std::vector<bool>> isVisit;
//std::vector<std::vector<char>> Map;
//std::vector<std::vector<std::pair<int, int>>> Dests;
//int Answer = 0;
//
//void GetDest(int _X, int _Y)
//{
//	if (Dests[_Y][_X].first != -1 && Dests[_Y][_X].second != -1)
//	{
//		return;
//	}
//
//	for(int i = 0; i < isVisit.size(); i++)
//	{
//		std::fill(isVisit[i].begin(), isVisit[i].end(), false);
//	}
//
//	int CurX = _X;
//	int CurY = _Y;
//
//	int NextX = -1;
//	int NextY = -1;
//
//	std::set<std::pair<int, int>> Path;
//
//	while (true)
//	{
//		isVisit[CurY][CurX] = true;
//		Path.insert({ CurY, CurX });
//
//		char CurDir = Map[CurY][CurX];
//
//		NextY = Direction[CurDir].first + CurY;
//		NextX = Direction[CurDir].second + CurX;
//
//		if (NextX < 0 || NextY < 0 || NextX >= Map[0].size() || NextY >= Map.size())
//		{
//			break;
//		}
//
//		if (isVisit[NextY][NextX] == true)
//		{
//			break;
//		}
//
//		CurY = NextY;
//		CurX = NextX;
//	}
//
//	for(const std::pair<int, int>& _Path : Path)
//	{
//		Dests[_Path.first][_Path.second] = { CurY, CurX };
//	}
//}
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//	std::cin >> Height >> Width;
//
//	Map.resize(Height, std::vector<char>(Width));
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	Dests.resize(Height, std::vector<std::pair<int, int>>(Width, {-1, -1}));
//	isVisit.resize(Height, std::vector<bool>(Width, false));
//
//	Direction['D'] = { 1, 0 };
//	Direction['U'] = { -1, 0 };
//	Direction['L'] = { 0, -1 };
//	Direction['R'] = { 0, 1 };
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			GetDest(j, i);
//		}
//	}
//
//	std::set<std::pair<int, int>> SafeZones;
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			SafeZones.insert(Dests[i][j]);
//		}
//	}
//
//	std::cout << SafeZones.size();
//
//	return 0;
//}