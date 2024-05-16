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
//bool isWin(const std::vector<std::vector<int>>& _Board, std::vector<std::vector<std::vector<bool>>>& _isCheck, int _X, int _Y)
//{
//	int CurNum = _Board[_Y][_X];
//
//	if (_isCheck[_Y][_X][0] == false)
//	{
//		int NumCount = 0;
//
//		for (int i = 0; i < _Board.size(); i++)
//		{
//			if (_Y - i < 0 || _X + i >= _Board.size())
//			{
//				break;
//			}
//
//			if (_Board[_Y - i][_X + i] == CurNum)
//			{
//				_isCheck[_Y - i][_X + i][0] = true;
//				NumCount++;
//			}
//
//			if (_Board[_Y - i][_X + i] != CurNum || NumCount > 5)
//			{
//				break;
//			}
//		}
//
//		if (NumCount == 5)
//		{
//			return true;
//		}
//	}
//
//	if (_isCheck[_Y][_X][1] == false)
//	{
//		int NumCount = 0;
//
//		for (int i = _X; i < _Board.size(); i++)
//		{
//			if (_Board[_Y][i] == CurNum)
//			{
//				_isCheck[_Y][i][1] = true;
//				NumCount++;
//			}
//
//			if (_Board[_Y][i] != CurNum || NumCount > 5)
//			{
//				break;
//			}
//		}
//
//		if (NumCount == 5)
//		{
//			return true;
//		}
//	}
//
//	if (_isCheck[_Y][_X][2] == false)
//	{
//		int NumCount = 0;
//
//		for (int i = 0; i < _Board.size(); i++)
//		{
//			if (_X + i >= _Board.size() || _Y + i >= _Board.size())
//			{
//				break;
//			}
//
//			if (_Board[_Y + i][_X + i] == CurNum)
//			{
//				_isCheck[_Y + i][_X + i][2] = true;
//				NumCount++;
//			}
//
//			if (_Board[_Y + i][_X + i] != CurNum || NumCount > 5)
//			{
//				break;
//			}
//		}
//
//		if (NumCount == 5)
//		{
//			return true;
//		}
//	}
//
//	if (_isCheck[_Y][_X][3] == false)
//	{
//		int NumCount = 0;
//
//		for (int i = _Y; i < _Board.size(); i++)
//		{
//			if (_Board[i][_X] == CurNum)
//			{
//				_isCheck[i][_X][3] = true;
//				NumCount++;
//			}
//
//			if (_Board[i][_X] != CurNum || NumCount > 5)
//			{
//				break;
//			}
//		}
//
//		if (NumCount == 5)
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
//	//우상, 우, 우하, 하
//	std::vector<std::vector<std::vector<bool>>> isCheck(19, std::vector<std::vector<bool>>(19, std::vector<bool>(4, 0)));
//
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
//			bool bisWin = isWin(Board, isCheck, j, i);
//
//			if (bisWin == true)
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