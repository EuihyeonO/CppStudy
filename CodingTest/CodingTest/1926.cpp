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
//int BFS(std::queue<std::pair<int, int>>& _Queue, std::vector<std::vector<int>>& _Paper)
//{
//	std::vector<int> WY = { 1, 0, -1, 0 };
//	std::vector<int> WX = { 0, 1, 0, -1 };
//
//	int Count = 1;
//
//	int Height = _Paper.size();
//	int Width = _Paper[0].size();
//
//	while (_Queue.size() > 0)
//	{
//		int CurY = _Queue.front().first;
//		int CurX = _Queue.front().second;
//		_Queue.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextY = CurY + WY[i];
//			int NextX = CurX + WX[i];
//
//			if (NextY < 0 || NextX < 0 || NextY >= Height || NextX >= Width)
//			{
//				continue;
//			}
//
//			if (_Paper[NextY][NextX] == 0)
//			{
//				continue;
//			}
//
//			_Paper[NextY][NextX] = 0;
//
//			_Queue.push({ NextY, NextX });
//			Count++;
//		}
//	}
//
//	return Count;
//}
//
//int main()
//{
//	Init();
//
//	size_t Height = 0;
//	size_t Width = 0;
//
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Paper(Height, std::vector<int>(Width));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Paper[i][j];
//		}
//	}
//
//	int Answer_Num = 0;
//	int Answer_Area = 0;
//
//	std::queue<std::pair<int, int>> Queue;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (Paper[i][j] == 1)
//			{
//				Queue.push({ i, j });
//				Paper[i][j] = 0;
//
//				Answer_Num++;
//				Answer_Area = std::max(Answer_Area, BFS(Queue, Paper));
//			}
//		}
//	}
//
//	std::cout << Answer_Num << "\n";
//	std::cout << Answer_Area;
//
//	return 0;
//}