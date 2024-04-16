//#include <iostream>
//#include <vector>
//#include <chrono>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//#define EMPTY 0
//#define QUEEN 1
//
//int Width = 0;
//int Answer = 0;
//
//std::vector<std::pair<int, int>> QueenPos;
//
//bool isAble(int _X, int _Y)
//{
//	for (int i = 0; i < _Y; i++)
//	{
//		if (QueenPos[i].second == _X)
//		{
//			return false;
//		}
//
//		if (abs(QueenPos[i].first - _Y) == abs(QueenPos[i].second - _X))
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//void SetQueen(int _X, int _Y)
//{
//	if (_Y == Width - 1)
//	{
//		Answer++;
//		return;
//	}
//
//	QueenPos[_Y] = { _Y, _X };
//
//	for (int i = 0; i < Width; i++)
//	{
//		if (isAble(i, _Y + 1) == true)
//		{
//			SetQueen(i, _Y + 1);
//		}
//	}
//
//	return;
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> Width;
//	QueenPos.resize(Width);
//
//	for (int i = 0; i < Width; i++)
//	{
//		SetQueen(i, 0);
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}