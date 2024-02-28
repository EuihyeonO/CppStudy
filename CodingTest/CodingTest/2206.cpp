//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
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
//	bool isDistroy = false;
//};
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//
//	std::cin >> Height >> Width;
//
//	std::vector<std::vector<int>> Map(Height, std::vector<int>(Width, 0));
//	for (int i = 0; i < Height; i++)
//	{
//		std::string Input;
//		std::cin >> Input;
//
//		for (int j = 0; j < Width; j++)
//		{
//			Map[i][j] = Input[j] - '0';
//		}
//	}
//
//	std::vector<std::vector<std::vector<bool>>> isVisit(2, std::vector<std::vector<bool>>(Height, std::vector<bool>(Width, false)));
//	std::vector<std::vector<std::vector<int>>> DP(2, std::vector<std::vector<int>>(Height, std::vector<int>(Width, false)));
//
//	std::vector<int> Wx = { -1, 0, 1, 0 };
//	std::vector<int> Wy = { 0, 1, 0, -1 };
//
//	Node StartNode;
//	StartNode = { 0, 0, false };
//
//	isVisit[0][0][0] = true;
//	isVisit[1][0][0] = true;
//	DP[0][0][0] = 1;
//	DP[1][0][0] = 1;
//
//	std::queue<Node> BFS;
//	BFS.push(StartNode);
//
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurNode.X + Wx[i];
//			int NextY = CurNode.Y + Wy[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= Width || NextY >= Height)
//			{
//				continue;
//			}
//
//			if (CurNode.isDistroy == true)
//			{
//				if (Map[NextY][NextX] == 0 && isVisit[1][NextY][NextX] == false)
//				{
//					isVisit[1][NextY][NextX] = true;
//					BFS.push({ NextX, NextY, true });
//
//					DP[1][NextY][NextX] = DP[1][CurNode.Y][CurNode.X] + 1;
//				}
//			}
//			else
//			{
//				if (Map[NextY][NextX] == 0 && isVisit[0][NextY][NextX] == false)
//				{
//					isVisit[0][NextY][NextX] = true;
//					BFS.push({ NextX, NextY, false });
//
//					DP[0][NextY][NextX] = DP[0][CurNode.Y][CurNode.X] + 1;
//				}
//				else if (Map[NextY][NextX] == 1 && isVisit[0][NextY][NextX] == false)
//				{
//					isVisit[1][NextY][NextX] = true;
//					BFS.push({ NextX, NextY, true });
//
//					DP[1][NextY][NextX] = DP[0][CurNode.Y][CurNode.X] + 1;
//				}
//			}
//		}
//	}
//
//	bool NotDestroy = isVisit[0][Height - 1][Width - 1];
//	bool Destroy = isVisit[1][Height - 1][Width - 1];
//
//	if (NotDestroy == false && Destroy == false)
//	{
//		std::cout << -1;
//	}
//	else if (NotDestroy == true && Destroy == false)
//	{
//		std::cout << DP[0][Height - 1][Width - 1];
//	}
//	else if (NotDestroy == false && Destroy == true)
//	{
//		std::cout << DP[1][Height - 1][Width - 1];
//	}
//	else
//	{
//		std::cout << std::min(DP[0][Height - 1][Width - 1], DP[1][Height - 1][Width - 1]);
//	}
//
//	return 0;
//}