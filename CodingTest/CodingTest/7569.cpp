//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct TomatoPos
//{
//	int Length = 0;
//	int Width = 0;
//	int Height = 0;
//};
//
//int main()
//{
//	Init();
//
//	가로, 세로, 높이
//	int Length = 0;
//	int Width = 0;
//	int Height = 0;
//
//	std::cin >> Length >> Width >> Height;
//
//	std::vector<std::vector<std::vector<int>>> Box(Height, std::vector<std::vector<int>>(Width, std::vector<int>(Length, 0)));
//	std::queue<TomatoPos> IkTomato;
//
//	int AnIkCount = 0;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			for (int k = 0; k < Length; k++)
//			{
//				std::cin >> Box[i][j][k];
//
//				if (Box[i][j][k] == 1)
//				{
//					IkTomato.push({ k, j, i });
//				}
//				else if (Box[i][j][k] == 0)
//				{
//					AnIkCount++;
//				}
//			}
//		}
//	}
//
//	if (AnIkCount == 0)
//	{
//		std::cout << 0;
//		return 0;
//	}
//
//	std::vector<int> DirX = { 1, 0, -1, 0, 0, 0 };
//	std::vector<int> DirY = { 0, 1, 0, -1, 0, 0 };
//	std::vector<int> DirZ = { 0, 0, 0, 0, 1, -1 };
//
//	int Answer = 0;
//
//	while (true)
//	{
//		std::queue<TomatoPos> NextIkTomato;
//
//		while (IkTomato.size() > 0)
//		{
//			TomatoPos CurTomatoPos = IkTomato.front();
//			IkTomato.pop();
//
//			for (int i = 0; i < 6; i++)
//			{
//				int NextX = CurTomatoPos.Length + DirX[i];
//				int NextY = CurTomatoPos.Width + DirY[i];
//				int NextZ = CurTomatoPos.Height + DirZ[i];
//
//				if (NextX < 0 || NextY < 0 || NextZ < 0 || NextX >= Length || NextY >= Width || NextZ >= Height)
//				{
//					continue;
//				}
//
//				if (Box[NextZ][NextY][NextX] == 0)
//				{
//					NextIkTomato.push({ NextX, NextY, NextZ });
//					Box[NextZ][NextY][NextX] = -2;
//				}
//			}
//		}
//
//		if (NextIkTomato.size() == 0)
//		{
//			break;
//		}
//
//		while (NextIkTomato.size() > 0)
//		{
//			TomatoPos CurTomatoPos = NextIkTomato.front();
//			NextIkTomato.pop();
//
//			Box[CurTomatoPos.Height][CurTomatoPos.Width][CurTomatoPos.Length] = 1;
//			IkTomato.push(CurTomatoPos);
//
//			AnIkCount--;
//		}
//
//		Answer++;
//	}
//
//	if (AnIkCount > 0)
//	{
//		std::cout << -1;
//	}
//	else
//	{
//		std::cout << Answer;
//	}
//
//	return 0;
//}