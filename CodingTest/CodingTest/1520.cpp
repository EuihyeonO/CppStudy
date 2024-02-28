//#include <iostream>
//#include <stack>
//#include <algorithm>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Node
//{
//	int X = 0;
//	int Y = 0;
//
//	std::vector<std::pair<int, int>> Visited;
//};
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//
//	std::cin >> Height;
//	std::cin >> Width;
//
//	std::vector<std::vector<int>> Map(Height, std::vector<int>(Width));
//	std::vector<std::vector<int>> Dp(Height, std::vector<int>(Width));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	std::vector<int> Wx = { -1, 0, 1, 0 };
//	std::vector<int> Wy = { 0, -1, 0, 1 };
//
//	std::stack<Node> DFS;
//	DFS.push({ 0, 0 });
//
//	while (DFS.size() > 0)
//	{
//		Node CurNode = DFS.top();
//		int CurX = CurNode.X;
//		int CurY = CurNode.Y;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurX + Wx[i];
//			int NextY = CurY + Wy[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//			{
//				continue;
//			}
//
//			if (Map[NextY][NextX] >= Map[CurY][CurX])
//			{
//				continue;
//			}
//
//			std::vector<std::pair<int, int>>::iterator FindIter = std::find(CurNode.Visited.begin(), CurNode.Visited.end(), std::pair{NextX, NextY});
//			
//			if (FindIter == CurNode.Visited.end())
//			{
//				std::vector<std::pair<int, int>>& Vec = CurNode.Visited;
//				Vec.push_back({ NextX, NextY });
//
//				DFS.push({NextX, NextY});
//			}
//		}
//	}
//
//	return 0;
//}