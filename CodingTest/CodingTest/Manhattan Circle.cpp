//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int Height = 0;
//		int Width = 0;
//
//		std::cin >> Height >> Width;
//
//		std::pair<int, int> LeftPos = { 9999999,9999999 };
//		std::pair<int, int> RightPos = { -9999999, -9999999 };
//
//		for (int i = 0; i < Height; i++)
//		{
//			for (int j = 0; j < Width; j++)
//			{
//				char Input = 0;
//				std::cin >> Input;
//
//				if (Input == '#')
//				{
//					if (LeftPos.second > j)
//					{
//						LeftPos = { i, j };
//					}
//
//					if(RightPos.second < j)
//					{
//						RightPos = { i, j };
//					}
//				}
//			}
//		}
//
//		std::pair<int, int> Answer = { LeftPos.first + RightPos.first + 2, LeftPos.second + RightPos.second + 2};
//		
//		Answer.first /= 2;
//		Answer.second /= 2;
//
//		std::cout << Answer.first << " " << Answer.second << "\n";
//	}
//
//
//	return 0;
//}