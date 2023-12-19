//#include <iostream>
//#include <vector>
//#include <functional>
//#include <iterator>
//
//void Diffusion(std::vector<std::vector<int>>& _Room)
//{
//	std::vector<std::vector<int>> DiffuseDust(_Room.size(), std::vector<int>(_Room[0].size(), 0));
//
//	std::vector<std::pair<int, int>> EWSN(4);
//	EWSN[0] = { 1 ,  0 };
//	EWSN[1] = { -1,  0 };
//	EWSN[2] = { 0 , -1 };
//	EWSN[3] = { 0 ,  1 };
//
//	for (int i = 0; i < _Room.size(); i++)
//	{
//		for (int j = 0; j < _Room[i].size(); j++)
//		{
//			if (_Room[i][j] == -1)
//			{
//				continue;
//			}
//
//			int DiffuseCount = 0;
//
//			for (int k = 0; k < 4; k++)
//			{
//				int NextY = EWSN[k].first + i;
//				int NextX = EWSN[k].second + j;
//
//				if (NextY < 0 || NextX < 0 || NextY >= _Room.size() || NextX >= _Room[0].size())
//				{
//					continue;
//				}
//
//				if (_Room[NextY][NextX] == -1)
//				{
//					continue;
//				}
//
//				int Dust = _Room[i][j] / 5;
//				DiffuseDust[NextY][NextX] += Dust;
//				DiffuseCount++;
//			}
//
//			_Room[i][j] -= (_Room[i][j] / 5) * DiffuseCount;
//		}
//	}
//
//	for (int i = 0; i < _Room.size(); i++)
//	{
//		for (int j = 0; j < _Room[i].size(); j++)
//		{
//			if (_Room[i][j] == -1)
//			{
//				continue;
//			}
//			
//			_Room[i][j] += DiffuseDust[i][j];
//		}
//	}
//}
//
//void Purification(std::vector<std::vector<int>>& _Room, std::vector<std::pair<int, int>>& _Purifier)
//{
//	int Puri_Y1 =_Purifier[0].first;
//	int Puri_Y2 =_Purifier[1].first;
//
//	int Min = std::min(Puri_Y1, Puri_Y2);
//	int Max = std::max(Puri_Y1, Puri_Y2);
//
//	std::vector<std::vector<int>> Cycle(_Room.size(), std::vector<int>(_Room[0].size(), 0));
//
//	enum class Dir
//	{
//		Up,
//		Down,
//		Left,
//		Right,
//	};
//
//	std::pair<int, int> CurPos = { Min, 0 };
//	Dir CurDir = Dir::Right;
//
//	std::function<void(Dir)> Right = [&](Dir _NextDir)
//	{
//		if (CurPos.second + 1 >= _Room[0].size())
//		{
//			CurDir = _NextDir;
//		}
//		else
//		{
//			Cycle[CurPos.first][CurPos.second + 1] = _Room[CurPos.first][CurPos.second];
//			CurPos.second += 1;
//		}
//	};
//
//	std::function<void(Dir)> Up = [&](Dir _NextDir)
//	{
//		if (CurPos.first - 1 < 0)
//		{
//			CurDir = _NextDir;
//		}
//		else
//		{
//			Cycle[CurPos.first - 1][CurPos.second] = _Room[CurPos.first][CurPos.second];
//			CurPos.first -= 1;
//		}
//	};
//
//	std::function<void(Dir)> Left = [&](Dir _NextDir)
//	{
//		if (CurPos.second - 1 < 0)
//		{
//			CurDir = _NextDir;
//		}
//		else
//		{
//			Cycle[CurPos.first][CurPos.second - 1] = _Room[CurPos.first][CurPos.second];
//			CurPos.second -= 1;
//		}
//	};
//
//	std::function<void(Dir)> Down = [&](Dir _NextDir)
//	{
//		if (CurPos.first + 1 >= _Room.size())
//		{
//			CurDir = _NextDir;
//		}
//		else
//		{
//			Cycle[CurPos.first + 1][CurPos.second] = _Room[CurPos.first][CurPos.second];
//			CurPos.first += 1;
//		}
//	};
//
//	std::vector<std::pair<int, int>> Trace;
//	Trace.reserve(10000);
//
//	//상방순환
//	while (true)
//	{
//		Trace.push_back(CurPos);
//
//		if (CurDir == Dir::Right)
//		{
//			Right(Dir::Up);
//
//			if (Cycle[CurPos.first][CurPos.second] == -1)
//			{
//				Cycle[CurPos.first][CurPos.second] = 0;
//			}
//		}
//		else if (CurDir == Dir::Up)
//		{
//			Up(Dir::Left);
//		}
//		else if (CurDir == Dir::Left)
//		{
//			Left(Dir::Down);
//		}
//
//		else if (CurDir == Dir::Down)
//		{
//			Down(Dir::Down);
//
//			if (_Room[CurPos.first][CurPos.second] == -1)
//			{
//				Cycle[CurPos.first][CurPos.second] = -1;
//				break;
//			}
//		}
//	}
//
//	CurPos = { Max, 0 };
//	CurDir = Dir::Right;
//	
//	//하방순환
//	while (true)
//	{
//		Trace.push_back(CurPos);
//
//		if (CurDir == Dir::Right)
//		{
//			Right(Dir::Down);
//
//			if (Cycle[CurPos.first][CurPos.second] == -1)
//			{
//				Cycle[CurPos.first][CurPos.second] = 0;
//			}
//		}
//		else if (CurDir == Dir::Down)
//		{
//			Down(Dir::Left);
//		}
//		else if (CurDir == Dir::Left)
//		{
//			Left(Dir::Up);
//		}
//		else if (CurDir == Dir::Up)
//		{
//			Up(Dir::Up);
//
//			if (_Room[CurPos.first][CurPos.second] == -1)
//			{
//				Cycle[CurPos.first][CurPos.second] = -1;
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < Trace.size(); i++)
//	{
//		std::pair<int, int> CurTrace = Trace[i];
//		_Room[CurTrace.first][CurTrace.second] = Cycle[CurTrace.first][CurTrace.second];
//	}
//}
//
//int main()
//{
//	int Height = 0;
//	int Width = 0;
//	int TargetSecond = 0;
//	
//	std::cin >> Height >> Width >> TargetSecond;
//
//	std::vector<std::vector<int>> Room(Height, std::vector<int>(Width, 0));
//	std::vector<std::pair<int, int>> AirPurifier;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Room[i][j];
//
//			if (Room[i][j] == -1)
//			{
//				AirPurifier.push_back({ i, j });
//			}
//		}
//	}
//
//	for(int i = 0; i < TargetSecond; i++)
//	{
//		Diffusion(Room);
//		Purification(Room, AirPurifier);
//	}
//
//	int Sum = 0;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (Room[i][j] != -1)
//			{
//				Sum += Room[i][j];
//			}
//		}
//	}
//
//	std::cout << Sum;
//
//	return 0;
//}