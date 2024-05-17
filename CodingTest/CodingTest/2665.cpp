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
//struct Node
//{
//	int Y = 0;
//	int X = 0;
//};
//
//int main()
//{
//	Init();
//
//	int Size = 0;
//	std::cin >> Size;
//
//	std::vector<std::vector<int>> Map(Size, std::vector<int>(Size));
//	for (int i = 0; i < Size; i++)
//	{
//		std::string Input;
//		std::cin >> Input;
//
//		for (int j = 0; j < Size; j++)
//		{
//			Map[i][j] = Input[j] - '0';
//		}
//	}
//
//	std::vector<std::vector<int>> ChangeCount(Size, std::vector<int>(Size, 10000000));
//
//	ChangeCount[0][0] = 1 - Map[0][0];
//
//	std::queue<Node> BFS;
//	BFS.push({ 0, 0});
//
//	std::vector<int> DirX = { 0, 1, 0, -1 };
//	std::vector<int> DirY = { -1, 0, 1, 0 };
//
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int NextX = CurNode.X + DirX[i];
//			int NextY = CurNode.Y + DirY[i];
//
//			if (NextX < 0 || NextY < 0 || NextX >= Size || NextY >= Size)
//			{
//				continue;
//			}
//			
//			if (Map[NextY][NextX] == 0)
//			{
//				if (ChangeCount[CurNode.Y][CurNode.X] + 1 >= ChangeCount[NextY][NextX])
//				{
//					continue;
//				}
//				else
//				{
//					ChangeCount[NextY][NextX] = ChangeCount[CurNode.Y][CurNode.X] + 1;
//					BFS.push({ NextY, NextX });
//				}
//			}
//			else
//			{
//				if (ChangeCount[CurNode.Y][CurNode.X] >= ChangeCount[NextY][NextX])
//				{
//					continue;
//				}
//				else
//				{
//					ChangeCount[NextY][NextX] = ChangeCount[CurNode.Y][CurNode.X];
//					BFS.push({ NextY, NextX });
//				}
//			}
//		}
//	}
//
//	std::cout << ChangeCount[Size - 1][Size - 1];
//
//	return 0;
//}