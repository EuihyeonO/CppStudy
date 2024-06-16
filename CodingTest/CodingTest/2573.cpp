//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<std::vector<bool>> isVisit;
//
//std::vector<int> DirX = { 0, 1, 0, -1 };
//std::vector<int> DirY = { 1, 0, -1, 0 };
//
//void Melt(std::vector<std::vector<int>>& _Map, std::set<std::pair<int, int>>& _IceLocation)
//{
//	std::vector<std::pair<int, int>> EraseIces;
//	EraseIces.reserve(_IceLocation.size());
//
//	std::set<std::pair<int, int>>::iterator CurIter = _IceLocation.begin();
//	std::set<std::pair<int, int>>::iterator EndIter = _IceLocation.end();
//
//	while (CurIter != EndIter)
//	{
//		std::pair<int, int> CurPos = *CurIter;
//
//		int SeaCount = 0;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextY = CurPos.first + DirY[i];
//			int NextX = CurPos.second + DirX[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= _Map[0].size() || NextY >= _Map.size())
//			{
//				continue;
//			}
//
//			if (_Map[NextY][NextX] == 0)
//			{
//				SeaCount++;
//			}
//		}
//
//		if (_Map[CurPos.first][CurPos.second] - SeaCount <= 0)
//		{
//			EraseIces.push_back(CurPos);
//		}
//		else
//		{
//			_Map[CurPos.first][CurPos.second] -= SeaCount;
//		}
//
//		CurIter++;
//	}
//
//	for (int i = 0; i < EraseIces.size(); i++)
//	{
//		std::pair<int, int>& CurPos = EraseIces[i];
//		_IceLocation.erase(CurPos);
//
//		_Map[CurPos.first][CurPos.second] = 0;
//	}
//}
//
//bool isDevided(std::vector<std::vector<int>>& _Map, std::set<std::pair<int, int>>& _IceLocation)
//{
//	std::pair<int, int> StartPos = *_IceLocation.begin();
//	std::queue<std::pair<int, int>> BFS;
//	
//	BFS.push(StartPos);
//	isVisit[StartPos.first][StartPos.second] = true;
//
//	int IceCount = 0;
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurPos = BFS.front();
//		BFS.pop();
//		
//		IceCount++;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextY = CurPos.first + DirY[i];
//			int NextX = CurPos.second + DirX[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= _Map[0].size() || NextY >= _Map.size())
//			{
//				continue;
//			}
//
//			if (isVisit[NextY][NextX] == true)
//			{
//				continue;
//			}
//
//			if (_Map[NextY][NextX] != 0)
//			{
//				isVisit[NextY][NextX] = true;
//				BFS.push({ NextY, NextX });
//			}
//		}
//	}
//
//	std::set<std::pair<int, int>>::iterator CurIter = _IceLocation.begin();
//	std::set<std::pair<int, int>>::iterator EndIter = _IceLocation.end();
//	
//	while (CurIter != EndIter)
//	{
//		std::pair<int, int> CurPos = *CurIter;
//		isVisit[CurPos.first][CurPos.second] = false;
//		CurIter++;
//	}
//
//	return IceCount < _IceLocation.size();
//}
//
//int main()
//{
//	int Height = 0;
//	int Width = 0;
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Map(Height, std::vector<int>(Width, 0));
//	std::set<std::pair<int, int>> IceLocation;
//
//	isVisit.resize(Height, std::vector<bool>(Width, false));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if (Map[i][j] != 0)
//			{
//				IceLocation.insert({ i, j });
//			}
//		}
//	}
//
//	int Years = 0;
//
//	while (IceLocation.size() > 0)
//	{
//		Years++;
//
//		Melt(Map, IceLocation);
//
//		if (isDevided(Map, IceLocation) == true)
//		{
//			std::cout << Years;
//			return 0;
//		}
//	}
//
//	std::cout << 0;
//	return 0;
//}