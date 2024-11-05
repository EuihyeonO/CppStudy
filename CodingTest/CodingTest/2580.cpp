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
//bool Check(std::vector<std::vector<int>>& _Board, const std::pair<int, int>& _CheckPos, int _CheckNum)
//{
//	//가로
//	for (int i = 0; i < 9; i++)
//	{
//		if (_Board[_CheckPos.first][i] == _CheckNum)
//		{
//			return false;
//		}
//	}
//
//	//세로
//	for (int i = 0; i < 9; i++)
//	{
//		if (_Board[i][_CheckPos.second] == _CheckNum)
//		{
//			return false;
//		}
//	}
//
//	//사각형
//	int XStart = _CheckPos.second - (_CheckPos.second % 3);
//	int YStart = _CheckPos.first - (_CheckPos.first % 3);
//
//	for (int i = YStart; i < YStart + 3; i++)
//	{
//		for (int j = XStart; j < XStart + 3; j++)
//		{
//			if (_Board[i][j] == _CheckNum)
//			{
//				return false;
//			}
//		}
//	}
//
//	return true;
//}
//
//void DFS(std::vector<std::vector<int>>& _Board, std::vector<std::pair<int, int>>& _EmptyPos, int _CurIndex)
//{
//
//	if (_CurIndex == _EmptyPos.size())
//	{
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				std::cout << _Board[i][j] << " ";
//			}
//
//			std::cout << "\n";
//		}
//
//		exit(0);
//		return;
//	}
//
//	auto [CurY, CurX] = _EmptyPos[_CurIndex];
//
//	for (int i = 1; i <= 9; i++)
//	{
//		if (Check(_Board, _EmptyPos[_CurIndex], i) == true)
//		{
//			_Board[CurY][CurX] = i;
//			DFS(_Board, _EmptyPos, _CurIndex + 1);
//			_Board[CurY][CurX] = 0;
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::vector<std::vector<int>> Board(9, std::vector<int>(9));
//	std::vector<std::pair<int, int>> EmptyPos;
//	
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			std::cin >> Board[i][j];
//
//			if (Board[i][j] == 0)
//			{
//				EmptyPos.push_back({i, j});
//			}
//		}
//	}
//
//	DFS(Board, EmptyPos, 0);
//
//	return 0;
//}