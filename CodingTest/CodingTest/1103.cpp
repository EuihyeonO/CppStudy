//#include <iostream>
//#include <queue>
//#include <vector>
//#include <tuple>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//
//std::vector<int> DirX = { 1, 0, -1, 0 };
//std::vector<int> DirY = { 0, 1, 0, -1 };
//
//int DFS(const std::vector<std::vector<int>>& _Board, std::vector<std::vector<bool>>& _IsVisit, std::vector<std::vector<int>>& _DP, int _CurY, int _CurX, int _Depth)
//{
//	if (_CurX < 0 || _CurY < 0 || _CurX >= _Board[0].size() || _CurY >= _Board.size())
//	{
//		return 0;
//	}
//
//	if (_Board[_CurY][_CurX] == 'H')
//	{
//		_DP[_CurY][_CurX] = std::max(_DP[_CurY][_CurX], _Depth + 1);
//		return 0;
//	}
//
//	if (_IsVisit[_CurY][_CurX] == true)
//	{
//		std::cout << -1;
//		exit(0);
//	}
//
//	if (_DP[_CurY][_CurX] != 0)
//	{
//		return _DP[_CurY][_CurX];
//	}
//
//	_IsVisit[_CurY][_CurX] = true;
//
//	int MaxValue = 0;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _CurX + DirX[i] * _Board[_CurY][_CurX];
//		int NextY = _CurY + DirY[i] * _Board[_CurY][_CurX];
//
//		int Value = DFS(_Board, _IsVisit, _DP, NextY, NextX, _Depth + 1) + 1;
//		_DP[_CurY][_CurX] = std::max(_DP[_CurY][_CurX], Value);
//	}
//
//	_IsVisit[_CurY][_CurX] = false;
//	return _DP[_CurY][_CurX];
//}
//
//int main()
//{
//	Init();
//
//	int Height = 0, Width = 0;
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Board(Height, std::vector<int>(Width, 0));
//	for (int i = 0; i < Height; i++)
//	{
//		std::string Input = "";
//		std::cin >> Input;
//
//		for (int j = 0; j < Width; j++)
//		{
//			if (Input[j] != 'H')
//			{
//				Board[i][j] = Input[j] - '0';
//			}
//			else
//			{
//				Board[i][j] = 'H';
//			}
//		}
//	}
//
//	std::vector<std::vector<bool>> IsVisit(Height, std::vector<bool>(Width));
//	std::vector<std::vector<int>> DP(Height, std::vector<int>(Width, 0));
//
//	DFS(Board, IsVisit, DP, 0, 0, 0);
//
//	std::cout << DP[0][0];
//	return 0;
//}