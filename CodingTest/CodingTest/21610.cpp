//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void WaterCopy(std::vector<std::pair<int, int>>& _Clouds, std::vector<std::vector<int>>& _Field, const std::pair<int, int>& _Dir, int _Dist)
//{
//	int Width = _Field.size();
//	int NumOfClouds = _Clouds.size();
//
//	std::map<std::pair<int, int>, int> CloudTrail;
//
//	for (int i = 0; i < NumOfClouds; i++)
//	{
//		//1
//		_Clouds[i].first += _Dist * _Dir.first;
//		_Clouds[i].second += _Dist * _Dir.second;
//
//		if (_Clouds[i].first < 0)
//		{
//			_Clouds[i].first = Width - abs((_Clouds[i].first + 1) % Width) - 1;
//		}
//		else if (_Clouds[i].first >= Width)
//		{
//			_Clouds[i].first = _Clouds[i].first % Width;
//		}
//
//		if (_Clouds[i].second < 0)
//		{
//			_Clouds[i].second = Width - abs((_Clouds[i].second + 1) % Width) - 1;
//		}
//		else if (_Clouds[i].second >= Width)
//		{
//			_Clouds[i].second = _Clouds[i].second % Width;
//		}
//
//		//2
//		_Field[_Clouds[i].first][_Clouds[i].second] += 1;
//
//		CloudTrail[{_Clouds[i].first, _Clouds[i].second}] = -1;
//	}
//
//	//3
//
//	//4
//	std::vector<std::pair<int, int>> Diagonals(4);
//	Diagonals[0] = { -1, -1 };
//	Diagonals[1] = { -1,  1 };
//	Diagonals[2] = {  1, -1 };
//	Diagonals[3] = {  1,  1 };
//
//	for (int i = 0; i < NumOfClouds; i++)
//	{
//		std::pair<int, int> CurPos = _Clouds[i];
//
//		int DiagonalCount = 0;
//
//		for (int j = 0; j < 4; j++)
//		{
//			std::pair<int, int> NextPos = { CurPos.first + Diagonals[j].first, CurPos.second + Diagonals[j].second };
//			
//			if (NextPos.first < 0 || NextPos.second < 0 || NextPos.first >= Width || NextPos.second >= Width)
//			{
//				continue;
//			}
//
//			if (_Field[NextPos.first][NextPos.second] > 0)
//			{
//				DiagonalCount++;
//			}
//		}
//
//		_Field[CurPos.first][CurPos.second] += DiagonalCount;
//	}
//
//	_Clouds.clear();
//
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::pair<int, int> CurPos = { i, j };
//
//			if (_Field[i][j] >= 2 && CloudTrail[{i, j}] != -1)
//			{
//				_Clouds.push_back({ i, j });
//				_Field[i][j] -= 2;
//			}
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	int Width = 0;
//	int MoveCount = 0;
//
//	std::cin >> Width >> MoveCount;
//
//	std::vector<std::vector<int>> Field(Width, std::vector<int>(Width, 0));
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Field[i][j];
//		}
//	}
//
//	std::vector<int> DirX = { -1, -1, 0, 1, 1, 1, 0, -1};
//	std::vector<int> DirY = { 0, -1, -1, -1, 0, 1, 1, 1};
//
//	std::vector<std::pair<int, int>> Clouds(4);
//	Clouds.reserve(Width * Width);
//
//	Clouds[0] = { Width - 1, 0 };
//	Clouds[1] = { Width - 1, 1 };
//	Clouds[2] = { Width - 2, 0 };
//	Clouds[3] = { Width - 2, 1 };
//
//	for (int i = 0; i < MoveCount; i++)
//	{
//		int Dir = 0;
//		int Dist = 0;
//
//		std::cin >> Dir >> Dist;
//
//		WaterCopy(Clouds, Field, { DirY[Dir - 1], DirX[Dir - 1] }, Dist);
//	}
//
//	int Answer = 0;
//
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			Answer += Field[i][j];
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}