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
//int GetDist(const std::pair<int, int>& _Left, const std::pair<int, int>& _Right)
//{
//	return std::abs(_Left.first - _Right.first) + std::abs(_Left.second - _Right.second);
//}
//
//#define MAXNUM 999999999999
//
//int main()
//{
//	Init();
//
//	int NumOfMan = 0;
//	std::cin >> NumOfMan;
//
//	std::vector<std::pair<int, int>> Pos(NumOfMan + 1);
//	std::cin >> Pos[0].first >> Pos[0].second;
//
//	for (int i = 1; i <= NumOfMan; i++)
//	{
//		std::cin >> Pos[i].first >> Pos[i].second;
//	}
//
//	std::vector<int> DirX = { 0, 1, 0, -1, 0 };
//	std::vector<int> DirY = { 0, 0, 1, 0, -1 };
//
//	std::vector<std::vector<long long>> MinDist(NumOfMan + 1, std::vector<long long>(5, MAXNUM));
//
//	for (int i = 0; i < 5; i++)
//	{
//		MinDist[0][i] = 0;
//	}
//
//	for (int i = 1; i <= NumOfMan; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::pair<int, int> MyPos = { Pos[i].first - DirX[j], Pos[i].second - DirY[j] };
//			
//			if (i == 1)
//			{
//				std::pair<int, int> PrevPos = Pos[0];
//				int Dist = GetDist(MyPos, PrevPos);
//				MinDist[i][j] = Dist;
//
//				continue;
//			}
//
//			for (int k = 0; k < 5; k++)
//			{
//				std::pair<int, int> PrevPos = { Pos[i - 1].first - DirX[k], Pos[i - 1].second - DirY[k] };
//
//				int Dist = GetDist(MyPos, PrevPos);
//
//				MinDist[i][j] = std::min(MinDist[i][j], Dist + MinDist[i - 1][k]);
//			}
//		}
//	}
//
//	long long Answer = *std::min_element(MinDist[NumOfMan].begin(), MinDist[NumOfMan].end());
//	std::cout << Answer;
//	return 0;
//}