//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int MapSize = 0;
//
//std::vector<std::vector<char>> Map;
//std::vector<std::pair<int, int>> TeacherPos;
//
//bool Test()
//{
//	for (int i = 0; i < TeacherPos.size(); i++)
//	{
//		int CurX = TeacherPos[i].second;
//		int CurY = TeacherPos[i].first;
//
//		for (int j = CurX; j >= 0; j--)
//		{
//			if (Map[CurY][j] == 'O')
//			{
//				break;
//			}
//
//			if (Map[CurY][j] == 'S')
//			{
//				return false;
//			}
//		}
//
//		for (int j = CurX; j < MapSize; j++)
//		{
//			if (Map[CurY][j] == 'O')
//			{
//				break;
//			}
//
//			if (Map[CurY][j] == 'S')
//			{
//				return false;
//			}
//		}
//
//		for (int j = CurY; j >= 0; j--)
//		{
//			if (Map[j][CurX] == 'O')
//			{
//				break;
//			}
//
//			if (Map[j][CurX] == 'S')
//			{
//				return false;
//			}
//		}
//
//		for (int j = CurY; j < MapSize; j++)
//		{
//			if (Map[j][CurX] == 'O')
//			{
//				break;
//			}
//
//			if (Map[j][CurX] == 'S')
//			{
//				return false;
//			}
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> MapSize;
//
//	Map.resize(MapSize, std::vector<char>(MapSize, 0));
//	TeacherPos.reserve(5);
//
//	for (int i = 0; i < MapSize; i++)
//	{
//		for (int j = 0; j < MapSize; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if (Map[i][j] == 'T')
//			{
//				TeacherPos.push_back({ i,j });
//			}
//		}
//	}
//
//	int Square = MapSize * MapSize;
//	bool isAble = false;
//
//	for (int i = 0; i < Square; i++)
//	{
//		int IX = i % MapSize;
//		int IY = i / MapSize;
//
//		if (Map[IY][IX] != 'X')
//		{
//			continue;
//		}
//
//		Map[IY][IX] = 'O';
//
//		for (int j = i + 1; j < Square; j++)
//		{
//			int JX = j % MapSize;
//			int JY = j / MapSize;
//
//			if (Map[JY][JX] != 'X')
//			{
//				continue;
//			}
//
//			Map[JY][JX] = 'O';
//
//			for (int k = j + 1; k < Square; k++)
//			{
//				int KX = k % MapSize;
//				int KY = k / MapSize;
//
//				if (Map[KY][KX] != 'X')
//				{
//					continue;
//				}
//
//				Map[KY][KX] = 'O';
//
//				if (Test() == true)
//				{
//					isAble = true;
//					break;
//				}
//
//				Map[KY][KX] = 'X';
//
//			}
//
//			if (isAble == true)
//			{
//				break;
//			}
//
//			Map[JY][JX] = 'X';
//		}
//
//		if (isAble == true)
//		{
//			break;
//		}
//
//		Map[IY][IX] = 'X';
//	}
//
//	if (isAble == true)
//	{
//		std::cout << "YES";
//	}
//	else
//	{
//		std::cout << "NO";
//	}
//
//	return 0;
//}