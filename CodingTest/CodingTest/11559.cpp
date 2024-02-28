//#include <iostream>
//#include <vector>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<std::pair<int, int>> BFS(std::vector<std::vector<char>>& _Field, std::vector<std::vector<bool>>& _IsVisit, int _Y, int _X)
//{
//	std::queue<std::pair<int, int>> Queue;
//	Queue.push({ _Y, _X });
//	_IsVisit[_Y][_X] = true;
//	
//	std::vector<int> WY = { -1, 0, 1, 0 };
//	std::vector<int> WX = { 0, 1, 0, -1 };
//
//	std::vector<std::pair<int, int>> Puyos;
//	Puyos.reserve(72);
//
//	while (Queue.size() > 0)
//	{
//		int CurY = Queue.front().first;
//		int CurX = Queue.front().second;
//
//		Puyos.push_back({ CurY, CurX });
//		Queue.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurX + WX[i];
//			int NextY = CurY + WY[i];
//
//			if (NextX >= 6 || NextY >=12 || NextX < 0 || NextY < 0)
//			{
//				continue;
//			}
//
//			if (_IsVisit[NextY][NextX] == true)
//			{
//				continue;
//			}
//
//			if (_Field[CurY][CurX] != _Field[NextY][NextX])
//			{
//				continue;
//			}
//
//			_IsVisit[NextY][NextX] = true;
//			Queue.push({ NextY, NextX });
//		}
//	}
//
//	return Puyos;
//}
//
//bool Boom(std::vector<std::vector<char>>& _Field, std::vector<std::vector<bool>>& _IsVisit)
//{
//	int Count = 0;
//
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (_Field[i][j] == '.')
//			{
//				continue;
//			}
//
//			std::vector<std::pair<int, int>> Puyos = BFS(_Field, _IsVisit, i, j);
//
//			if (Puyos.size() >= 4)
//			{
//				for (int i = 0; i < Puyos.size(); i++)
//				{
//					_Field[Puyos[i].first][Puyos[i].second] = '.';
//				}
//
//				Count++;
//			}
//		}
//	}
//
//	return Count > 0;
//}
//
//void Falling(std::vector<std::vector<char>>& _Field)
//{
//	for (int i = 10; i >= 0; i--)
//	{
//		for (int j = 5; j >= 0; j--)
//		{
//			if (_Field[i][j] == '.')
//			{
//				continue;
//			}
//
//			int PosY = i + 1;
//			char NextChar = _Field[PosY][j];
//
//			while (NextChar == '.')
//			{
//				PosY++;
//
//				if (PosY >= 12)
//				{
//					PosY;
//					break;
//				}
//
//				NextChar = _Field[PosY][j];
//			}
//
//			if (PosY != i + 1)
//			{
//				_Field[PosY - 1][j] = _Field[i][j];
//				_Field[i][j] = '.';
//			}
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::vector<std::vector<char>> Field(12, std::vector<char>(6, 0));
//
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			std::cin >> Field[i][j];
//		}
//	}
//
//	int Count = 0;
//
//	while (true)
//	{
//		std::vector<std::vector<bool>> IsVisit(12, std::vector<bool>(6, false));
//		
//		bool isBoom = Boom(Field, IsVisit);
//		if (isBoom == false)
//		{
//			break;
//		}
//
//		Falling(Field);
//		Count++;
//	}
//
//	std::cout << Count;
//
//	return 0;
//}