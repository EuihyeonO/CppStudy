//#include <iostream>
//#include <vector>
//#include <climits>
//#include <cmath>
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
//	int Size = 0;
//	std::cin >> Size;
//
//	std::vector<std::vector<int>> Cost(Size, std::vector<int>(Size));
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			std::cin >> Cost[i][j];
//
//			if (Cost[i][j] == 0)
//			{
//				Cost[i][j] = INT_MAX / 2;
//			}
//		}
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			for (int k = 0; k < Size; k++)
//			{
//				Cost[j][k] = std::min(Cost[j][k], Cost[j][i] + Cost[i][k]);
// 			}
//		}
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			if (Cost[i][j] == INT_MAX / 2)
//			{
//				Cost[i][j] = 0;
//			}
//			else if(Cost[i][j] != 0)
//			{
//				Cost[i][j] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			std::cout << Cost[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//
//	return 0;
//}