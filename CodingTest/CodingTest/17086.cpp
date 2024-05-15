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
//struct Data
//{
//	int X = 0;
//	int Y = 0;
//	int Dist = 0;
//};
//std::vector<int> XDir = { -1, -1, 0, 1, 1, 1, 0, -1};
//std::vector<int> YDir = { 0, -1, -1, -1, 0, 1, 1, 1};
//
//int BFS(const std::vector<std::vector<int>>& _Field, std::vector<std::vector<bool>>& _isVisit, int _StartX, int _StartY)
//{
//	std::queue<Data> BFS;
//	BFS.push({ _StartX, _StartY, 0 });
//
//	int Answer = -1;
//
//	while (BFS.size() > 0)
//	{
//		Data CurData = BFS.front();
//		BFS.pop();
//
//		if (_Field[CurData.Y][CurData.X] == 1)
//		{
//			Answer = CurData.Dist;
//			break;
//		}
//
//		for (int i = 0; i < 8; i++)
//		{
//			int NextX = CurData.X + XDir[i];
//			int NextY = CurData.Y + YDir[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= _Field[0].size() || NextY >= _Field.size())
//			{
//				continue;
//			}
//
//			if (_isVisit[NextY][NextX] == true)
//			{
//				continue;
//			}
//
//			_isVisit[NextY][NextX] = true;
//			BFS.push({ NextX, NextY, CurData.Dist + 1 });
//		}
//	}
//
//	for (int i = 0; i < _isVisit.size(); i++)
//	{
//		for (int j = 0; j < _isVisit[i].size(); j++)
//		{
//			_isVisit[i][j] = false;
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
//	int Height = 0;
//	int Width = 0;
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Field(Height, std::vector<int>(Width, 0));
//	std::vector<std::vector<bool>> isVisit(Height, std::vector<bool>(Width, false));
//	
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Field[i][j];
//		}
//	}
//
//	int MaxDist = -1;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (Field[i][j] == 1)
//			{
//				continue;
//			}
//
//			int CurDist = BFS(Field, isVisit, j, i);
//			
//			MaxDist = std::max(MaxDist, CurDist);
//		}
//	}
//
//	std::cout << MaxDist;
//
//	return 0;
//}