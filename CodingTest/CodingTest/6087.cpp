//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int Answer = 99999999;
//
//std::vector<int> DirX = { 0, 1, 0, -1 };
//std::vector<int> DirY = { -1, 0, 1, 0 };
//
//std::vector<std::vector<char>> Map;
//std::vector<std::vector<bool>> isVisit;
//
//void Recursive(int _X, int _Y, int _MirrorCount, bool _isStart, int _PrevDirX)
//{
//	if (_MirrorCount >= Answer)
//	{
//		return;
//	}
//
//	if (_isStart == false && Map[_Y][_X] == 'C')
//	{
//		Answer = std::min(Answer, _MirrorCount);
//		return;
//	}
//
//	isVisit[_Y][_X] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _X + DirX[i];
//		int NextY = _Y + DirY[i];
//
//		if (NextX < 0 || NextY < 0 || NextX >= Map[0].size() || NextY >= Map.size())
//		{
//			continue;
//		}
//
//		if (isVisit[NextY][NextX] == true)
//		{
//			continue;
//		}
//
//		if (Map[NextY][NextX] == '*')
//		{
//			continue;
//		}
//
//		int NextMirrorCount = _MirrorCount;
//
//		if (_isStart == false && abs(_PrevDirX) != abs(DirX[i]))
//		{
//			NextMirrorCount++;
//		}
//
//		Recursive(NextX, NextY, NextMirrorCount, false, DirX[i]);
//	}
//
//	isVisit[_Y][_X] = false;
//}
//
//int main()
//{
//	Init();
//
//	int Width = 0;
//	int Height = 0;
//	std::cin >> Width >> Height;
//
//	Map.resize(Height, std::vector<char>(Width, 0));
//	isVisit.resize(Height, std::vector<bool>(Width, false));
//
//	std::pair<int, int> Start = { 0, 0 };
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if (Map[i][j] == 'C')
//			{
//				Start = { i, j };
//			}
//		}
//	}
//
//	Recursive(Start.second, Start.first, 0, true, -1);
//
//	std::cout << Answer;
//
//	return 0;
//}