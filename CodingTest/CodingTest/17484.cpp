//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<int> DirX = {-1, 0, 1};
//std::vector<int> DirY = {1, 1, 1};
//
//struct Node
//{
//	int X = 0;
//	int Y = 0;
//
//	int PrevDirIndex = 0;
//
//	int Cost = 0;
//};
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Map(Height, std::vector<int>(Width, 0));
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	std::queue<Node> BFS;
//	for (int i = 0; i < Width; i++)
//	{
//		BFS.push({ i, 0, -1, Map[0][i]});
//	}
//
//	int Answer = INT_MAX;
//
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		if (CurNode.Y == Height - 1)
//		{
//			Answer = std::min(Answer, CurNode.Cost);
//			continue;
//		}
//
//		for (int i = 0; i < 3; i++)
//		{
//			if (CurNode.PrevDirIndex == i)
//			{
//				continue;
//			}
//
//			int NextX = CurNode.X + DirX[i];
//			int NextY = CurNode.Y + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//			{
//				continue;
//			}
//
//			BFS.push({ NextX, NextY, i, CurNode.Cost + Map[NextY][NextX] });
//		}
//	}
//
//	std::cout << Answer;
//	return 0;
//}