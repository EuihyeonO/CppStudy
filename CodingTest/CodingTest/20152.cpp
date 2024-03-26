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
//int main()
//{
//	Init();
//
//	int StartPos = 0;
//	int TargetPos = 0;
//
//	std::cin >> StartPos >> TargetPos;
//
//	if (StartPos == TargetPos)
//	{
//		std::cout << 1;
//
//		return 0;
//	}
//	else if (StartPos < TargetPos)
//	{
//		//우, 상만 가능
//		int Answer = 0;
//		int Width = TargetPos - StartPos + 1;
//		std::vector<std::vector<long long>> DP(Width, std::vector<long long>(Width));
//		DP[0][0] = 1;
//
//		for (int i = 0; i < Width; i++)
//		{
//			for (int j = 0; j < Width; j++)
//			{
//				std::pair<long long, long long> LeftPos = { StartPos + i, StartPos + j - 1 };
//				std::pair<long long, long long> DownPos = { StartPos + i - 1, StartPos + j };
//
//				bool isLeftValid = true;
//				bool isDownvalid = true;
//
//				if (LeftPos.first > LeftPos.second || LeftPos.first < StartPos || LeftPos.second < StartPos || LeftPos.first > TargetPos || LeftPos.second > TargetPos)
//				{
//					isLeftValid = false;
//				}
//
//				if (DownPos.first > DownPos.second || DownPos.first < StartPos || DownPos.second < StartPos || DownPos.first > TargetPos || DownPos.second > TargetPos)
//				{
//					isDownvalid = false;
//				}
//
//				if (isLeftValid == true && isDownvalid == true)
//				{
//					DP[i][j] = DP[i - 1][j] + DP[i][j - 1];
//				}
//				else if (isLeftValid == true && isDownvalid == false)
//				{
//					DP[i][j] = DP[i][j - 1];
//				}
//				else if (isLeftValid == false && isDownvalid == true)
//				{
//					DP[i][j] = DP[i - 1][j];
//				}
//			}
//		}
//
//		std::cout << DP[Width - 1][Width - 1];
//		return 0;
//	}
//	else
//	{
//		//좌 하만 가능
//		int Answer = 0;
//		int Width = StartPos - TargetPos + 1;
//		std::vector<std::vector<long long>> DP(Width, std::vector<long long>(Width));
//		DP[0][0] = 1;
//
//		for (int i = 0; i < Width; i++)
//		{
//			for (int j = 0; j < Width; j++)
//			{
//				std::pair<long long, long long> LeftPos = { TargetPos + i, TargetPos + j - 1 };
//				std::pair<long long, long long> DownPos = { TargetPos + i - 1, TargetPos + j };
//
//				bool isLeftValid = true;
//				bool isDownvalid = true;
//
//				if (LeftPos.first > LeftPos.second || LeftPos.first < TargetPos || LeftPos.second < TargetPos || LeftPos.first > StartPos || LeftPos.second > StartPos)
//				{
//					isLeftValid = false;
//				}
//
//				if (DownPos.first > DownPos.second || DownPos.first < TargetPos || DownPos.second < TargetPos || DownPos.first > StartPos || DownPos.second > StartPos)
//				{
//					isDownvalid = false;
//				}
//
//				if (isLeftValid == true && isDownvalid == true)
//				{
//					DP[i][j] = DP[i - 1][j] + DP[i][j - 1];
//				}
//				else if (isLeftValid == true && isDownvalid == false)
//				{
//					DP[i][j] = DP[i][j - 1];
//				}
//				else if (isLeftValid == false && isDownvalid == true)
//				{
//					DP[i][j] = DP[i - 1][j];
//				}
//			}
//		}
//
//		std::cout << DP[Width - 1][Width - 1];
//		return 0;
//	}
//
//	return 0;
//}