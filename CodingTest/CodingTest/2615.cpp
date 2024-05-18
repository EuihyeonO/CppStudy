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
//bool Check(const std::vector<std::vector<int>>& _Board, int _X, int _Y)
//{
//	int CurStone = _Board[_Y][_X];
//
//	//우상
//	if (!(_X - 1 >= 0 && _Y + 1 < 19 && _Board[_Y + 1][_X - 1] == CurStone))
//	{
//		int Count = 0;
//
//		for (int i = 0; i < 19; i++)
//		{
//			int NextX = _X + i;
//			int NextY = _Y - i;
//
//			if (NextX >= 19 || NextY < 0)
//			{
//				break;
//			}
//
//			if (_Board[NextY][NextX] == CurStone)
//			{
//				Count++;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		if (Count == 5)
//		{
//			return true;
//		}
//	}
//
//	//우
//	if (!(_X - 1 >= 0 && _Board[_Y][_X - 1] == CurStone))
//	{
//		int Count = 0;
//
//		for (int i = 0; i < 19; i++)
//		{
//			int NextX = _X + i;
//
//			if (NextX >= 19)
//			{
//				break;
//			}
//
//			if (_Board[_Y][NextX] == CurStone)
//			{
//				Count++;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		if (Count == 5)
//		{
//			return true;
//		}
//	}
//
//	//우하
//	if (!(_X - 1 >= 0 && _Y - 1 >= 0 && _Board[_Y - 1][_X - 1] == CurStone))
//	{
//		int Count = 0;
//
//		for (int i = 0; i < 19; i++)
//		{
//			int NextX = _X + i;
//			int NextY = _Y + i;
//
//			if (NextX >= 19 || NextY >= 19)
//			{
//				break;
//			}
//
//			if (_Board[NextY][NextX] == CurStone)
//			{
//				Count++;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		if (Count == 5)
//		{
//			return true;
//		}
//	}
//
//	//하
//	if (!(_Y - 1 >= 0 && _Board[_Y - 1][_X] == CurStone))
//	{
//		int Count = 0;
//
//		for (int i = 0; i < 19; i++)
//		{
//			int NextY = _Y + i;
//
//			if (NextY >= 19)
//			{
//				break;
//			}
//
//			if (_Board[NextY][_X] == CurStone)
//			{
//				Count++;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		if (Count == 5)
//		{
//			return true;
//		}
//	}
//
//	return false;
//}
//
//int main()
//{
//	Init();
//
//	std::vector<std::vector<int>> Board(19, std::vector<int>(19, 0));
//	for (int i = 0; i < 19; i++)
//	{
//		for (int j = 0; j < 19; j++)
//		{
//			std::cin >> Board[i][j];
//		}
//	}
//
//	for (int i = 0; i < 19; i++)
//	{
//		for (int j = 0; j < 19; j++)
//		{
//			if (Board[i][j] == 0)
//			{
//				continue;
//			}
//
//			if (Check(Board, j, i) == true)
//			{
//				std::cout << Board[i][j] << "\n";
//				std::cout << i + 1 << " " << j + 1;
//
//				return 0;
//			}
//		}
//	}
//
//	std::cout << 0;
//
//	return 0;
//}