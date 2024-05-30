//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
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
//int BFSFunc(std::vector<std::vector<int>>& _Board, std::vector<std::vector<bool>>& _isVisit)
//{
//	for (int i = 0; i < _isVisit.size(); i++)
//	{
//		std::fill(_isVisit[i].begin(), _isVisit[i].end(), false);
//	}
//
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push({ 0, 0 });
//	_isVisit[0][0] = true;
//
//	std::set<std::pair<int, int>> CheesePos;
//
//	int EmptyCount = 1;
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurPos = BFS.front();
//		BFS.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurPos.second + DirX[i];
//			int NextY = CurPos.first + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= _Board[0].size() || NextY >= _Board.size())
//			{
//				continue;
//			}
//
//			if (_Board[NextY][NextX] == 0 && _isVisit[NextY][NextX] == false)
//			{
//				_isVisit[NextY][NextX] = true;
//				BFS.push({ NextY, NextX });
//
//				EmptyCount++;
//			}
//
//			if (_Board[NextY][NextX] == 1)
//			{
//				CheesePos.insert({ NextY, NextX });
//			}
//		}
//	}
//
//	std::set<std::pair<int, int>>::iterator CurIter = CheesePos.begin();
//	std::set<std::pair<int, int>>::iterator EndIter = CheesePos.end();
//
//	while (CurIter != EndIter)
//	{
//		std::pair<int, int> CurPos = *CurIter;
//
//		int Count = 0;
//
//		for (int k = 0; k < 4; k++)
//		{
//			int NextX = CurPos.second + DirX[k];
//			int NextY = CurPos.first + DirY[k];
//
//			if (_isVisit[NextY][NextX] == true)
//			{
//				Count++;
//			}
//
//			if (Count >= 2)
//			{
//				_Board[CurPos.first][CurPos.second] = 0;
//				break;
//			}
//		}
//
//		CurIter++;
//	}
//
//	return EmptyCount;
//}
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Board(Height, std::vector<int>(Width, 0));
//	std::vector<std::vector<bool>> isVisit(Height, std::vector<bool>(Width, false));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Board[i][j];
//		}
//	}
//
//	int TimeCount = 0;
//
//	while (BFSFunc(Board, isVisit) < Height * Width)
//	{
//		TimeCount++;
//	}
//
//	std::cout << TimeCount;
//
//	return 0;
//}
//
