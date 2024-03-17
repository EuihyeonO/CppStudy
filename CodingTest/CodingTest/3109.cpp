//#include <iostream>
//#include <vector>
//#include <stack>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
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
//	std::vector<std::vector<char>> Map(Height, std::vector<char>(Width, '\0'));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//		}
//	}
//
//	std::vector<std::vector<bool>> isVisit(Height, std::vector<bool>(Width, false));
//	std::vector<int> Wy = { -1, 0, 1 };
//
//	int Answer = 0;
//	std::stack<std::pair<int, int>> DFS;
//	int StartY = 0;
//
//	while (StartY < Height)
//	{
//		std::pair<int, int> CurPos = { 0, 0 };
//		DFS.push({ StartY, 0 });
//		isVisit[StartY][0] = true;
//
//		while (DFS.size() > 0)
//		{
//			CurPos = DFS.top();
//			DFS.pop();
//
//			for (int i = 0; i < 3; i++)
//			{
//				std::pair<int, int> NextPos = { CurPos.first + Wy[i], CurPos.second + 1 };
//
//				if (NextPos.first < 0 || NextPos.first >= Height || NextPos.second >= Width)
//				{
//					continue;
//				}
//
//				if (isVisit[NextPos.first][NextPos.second] == true)
//				{
//					continue;
//				}
//
//				if (Map[NextPos.first][NextPos.second] == 'x')
//				{
//					continue;
//				}
//
//				isVisit[NextPos.first][NextPos.second] = true;
//
//				if (NextPos.second == Width - 1)
//				{
//					while (DFS.size() > 0)
//					{
//						DFS.pop();
//					}
//
//					Answer++;
//					break;
//				}
//				else
//				{
//					DFS.push(CurPos);
//					DFS.push(NextPos);
//
//					break;
//				}
//			}
//		}
//
//		StartY++;
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}