//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
////¼­ 1 ºÏ 2 µ¿ 4 ³² 8
//
//void SetEWSN(std::vector<bool>& _EWSN, int _MapX, int _MapY, int _MapNum)
//{
//	int EWSNNumber = _MapNum;
//
//	while (EWSNNumber > 0)
//	{
//		if (EWSNNumber >= 8)
//		{
//			EWSNNumber -= 8;
//			_EWSN[3] = true;
//		}
//		else if (EWSNNumber >= 4)
//		{
//			EWSNNumber -= 4;
//			_EWSN[2] = true;
//		}
//		else if (EWSNNumber >= 2)
//		{
//			EWSNNumber -= 2;
//			_EWSN[1] = true;
//		}
//		else if (EWSNNumber >= 1)
//		{
//			EWSNNumber -= 1;
//			_EWSN[0] = true;
//		}
//	}
//
//}
//
//std::vector<int> DirX = { -1, 0, 1, 0 };
//std::vector<int> DirY = { 0, -1, 0, 1 };
//
//int BFS(const std::vector<std::vector<int>>& _Map, std::vector<std::vector<int>>& _RoomNumbers, int _StartX, int _StartY, int _RoomNumber)
//{
//	std::queue<std::pair<int, int>> BFS;
//
//	BFS.push({ _StartY, _StartX });
//	_RoomNumbers[_StartY][_StartX] = _RoomNumber;
//
//	int SizeCount = 1;
//
//	std::vector<bool> EWSN(4, false);
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurPos = BFS.front();
//		BFS.pop();
//
//		SetEWSN(EWSN, CurPos.second, CurPos.first, _Map[CurPos.first][CurPos.second]);
//
//		for (int i = 0; i < 4; i++)
//		{
//			if (EWSN[i] == true)
//			{
//				continue;
//			}
//
//			int NextX = CurPos.second + DirX[i];
//			int NextY = CurPos.first + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= _Map[0].size() || NextY >= _Map.size())
//			{
//				continue;
//			}
//
//			if (_RoomNumbers[NextY][NextX] != 0)
//			{
//				continue;
//			}
//
//			BFS.push({ NextY, NextX });
//			_RoomNumbers[NextY][NextX] = _RoomNumber;
//			SizeCount++;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			EWSN[i] = false;
//		}
//	}
//
//	return SizeCount;
//}
//int main()
//{
//	Init();
//	
//	int Width = 0;
//	int Height = 0;
//	
//	std::cin >> Width >> Height;
//
//	std::vector<std::vector<int>> Map(Height, std::vector<int>(Width, 0));
//	
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	std::vector<std::vector<int>> RoomNumbers(Height, std::vector<int>(Width, 0));
//	int RoomNumber = 0;
//
//	std::map<int, int> RoomSizes;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (RoomNumbers[i][j] != 0)
//			{
//				continue;
//			}
//
//			int RoomSize = BFS(Map, RoomNumbers, j, i, ++RoomNumber);
//			RoomSizes[RoomNumber] = RoomSize;
//		}
//	}
//
//	int MaxRoomSize = 0;
//	int MergeRoomSize = 0;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			MaxRoomSize = std::max(MaxRoomSize, RoomSizes[RoomNumbers[i][j]]);
//
//			for (int k = 0; k < 4; k++)
//			{
//				int NextX = j + DirX[k];
//				int NextY = i + DirY[k];
//
//				if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//				{
//					continue;
//				}
//
//				if (RoomNumbers[i][j] != RoomNumbers[NextY][NextX])
//				{
//					MergeRoomSize = std::max(MergeRoomSize, RoomSizes[RoomNumbers[i][j]] + RoomSizes[RoomNumbers[NextY][NextX]]);
//				}
//			}
//		}
//	}
//
//	std::cout << RoomNumber << "\n" << MaxRoomSize << "\n" << MergeRoomSize;
//
//	return 0;
//}