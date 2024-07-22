//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <climits>
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
//void SetIsland(std::vector<std::vector<int>>& _Map, int _SetCount, int _StartX, int _StartY)
//{
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push({ _StartY, _StartX });
//	_Map[_StartY][_StartX] = _SetCount;
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurNode = BFS.front();
//		BFS.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurNode.second + DirX[i];
//			int NextY = CurNode.first + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= _Map[0].size() || NextY >= _Map.size())
//			{
//				continue;
//			}
//
//			if (_Map[NextY][NextX] != -1)
//			{
//				continue;
//			}
//
//			BFS.push({ NextY, NextX });
//			_Map[NextY][NextX] = _SetCount;
//		}
//	}
//}
//
//struct Data
//{
//	std::pair<int, int> Pos;
//	int Distance = 0;
//};
//
//std::vector<std::vector<bool>> isVisit;
//
//int GetNearDistance(std::vector<std::vector<int>>& _Map, int _StartX, int _StartY)
//{
//	isVisit.clear();
//	isVisit.resize(_Map.size(), std::vector<bool>(_Map[0].size(), false));
//
//	std::queue<Data> BFS;
//	BFS.push({ { _StartY, _StartX }, 0 });
//
//	int Answer = 0;
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurNodePos = BFS.front().Pos;
//		int CurDistance = BFS.front().Distance;
//		BFS.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurNodePos.second + DirX[i];
//			int NextY = CurNodePos.first + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= _Map[0].size() || NextY >= _Map.size())
//			{
//				continue;
//			}
//
//			if (_Map[NextY][NextX] == _Map[_StartY][_StartX])
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
//				Answer = CurDistance;
//				break;
//			}
//
//			BFS.push({ { NextY, NextX }, CurDistance + 1 });
//			isVisit[NextY][NextX] = true;
//		}
//
//		if (Answer != 0)
//		{
//			break;
//		}
//	}
//
//	return Answer;
//}
//
//int main()
//{
//	Init();
//
//	int Size = 0; 
//	std::cin >> Size;
//
//	std::vector<std::vector<int>> Map(Size, std::vector<int>(Size));
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if(Map[i][j] == 1)
//			{
//				Map[i][j] = -1;
//			}
//		}
//	}
//
//	int IslandCount = 1;
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			if (Map[i][j] == -1)
//			{
//				SetIsland(Map, IslandCount, j, i);
//				IslandCount++;
//			}
//		}
//	}
//
//	int Answer = INT_MAX;
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			if(Map[i][j] != 0)
//			{
//				int Dist = GetNearDistance(Map, j, i);
//
//				if (Dist != 0)
//				{
//					Answer = std::min(Answer, Dist);
//				}
//			}
//		}
//	}
//	
//	std::cout << Answer;
//
//	return 0;
//}