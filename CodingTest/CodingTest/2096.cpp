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
//int Arr[100000][3] = { 0, };
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	std::cin >> Height;
//
//	std::vector<int> PrevDP(3, 0);
//	std::vector<int> CurDP(3, 0);
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			std::cin >> Arr[i][j];
//		}
//	}
//
//	PrevDP[0] = Arr[0][0];
//	PrevDP[1] = Arr[0][1];
//	PrevDP[2] = Arr[0][2];
//
//	for (int i = 0; i < Height - 1; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (j - 1 >= 0)
//			{
//				CurDP[j - 1] = std::max(CurDP[j - 1], Arr[i + 1][j - 1] + PrevDP[j]);
//			}
//
//			if (j + 1 < 3)
//			{
//				CurDP[j + 1] = std::max(CurDP[j + 1], Arr[i + 1][j + 1] + PrevDP[j]);
//			}
//
//			CurDP[j] = std::max(CurDP[j], Arr[i + 1][j] + PrevDP[j]);
//		}
//
//		for (int j = 0; j < 3; j++)
//		{
//			PrevDP[j] = CurDP[j];
//			CurDP[j] = 0;
//		}
//	}
//
//	int Max = 0;
//
//	Max = std::max(PrevDP[0], PrevDP[1]);
//	Max = std::max(Max, PrevDP[2]);
//
//	//ÃÖ¼Ò
//	PrevDP[0] = Arr[0][0];
//	PrevDP[1] = Arr[0][1];
//	PrevDP[2] = Arr[0][2];
//
//	CurDP[0] = 1000000000;
//	CurDP[1] = 1000000000;
//	CurDP[2] = 1000000000;
//
//	for (int i = 0; i < Height - 1; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (j - 1 >= 0)
//			{
//				CurDP[j - 1] = std::min(CurDP[j - 1], Arr[i + 1][j - 1] + PrevDP[j]);
//			}
//
//			if (j + 1 < 3)
//			{
//				CurDP[j + 1] = std::min(CurDP[j + 1], Arr[i + 1][j + 1] + PrevDP[j]);
//			}
//
//			CurDP[j] = std::min(CurDP[j], Arr[i + 1][j] + PrevDP[j]);
//		}
//
//		for (int j = 0; j < 3; j++)
//		{
//			PrevDP[j] = CurDP[j];
//			CurDP[j] = 1000000000;
//		}
//	}
//
//	int Min = 0;
//
//	Min = std::min(PrevDP[0], PrevDP[1]);
//	Min = std::min(Min, PrevDP[2]);
//
//	std::cout << Max << " " << Min;
//
//	return 0;
//}