//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
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
//	int NumStudent = 0;
//	int MaxNumBlock = 0;
//	int TargetHeight = 0;
//	
//	std::cin >> NumStudent >> MaxNumBlock >> TargetHeight;
//	std::cin.ignore();
//
//	std::vector<std::vector<int>> Blocks(NumStudent + 1);
//	
//	for (int i = 1; i <= NumStudent; i++)
//	{
//		std::string Input;
//		std::getline(std::cin, Input);
//
//		std::stringstream Stream(Input);
//		int BlockHeight = 0;
//
//		while (Stream >> BlockHeight)
//		{
//			Blocks[i].push_back(BlockHeight);
//		}
//	}
//
//	std::vector<std::vector<int>> DP(NumStudent + 1, std::vector<int>(1001, 0));
//	
//	DP[0][0] = 1;
//
//	for (int i = 1; i <= NumStudent; i++)
//	{
//		for (int j = 0; j <= TargetHeight; j++)
//		{
//			for (int k = 0; k < Blocks[i].size(); k++)
//			{
//				int CurBlock = Blocks[i][k];
//				
//				if (CurBlock > j)
//				{
//					continue;
//				}
//
//				DP[i][j] += DP[i - 1][j - CurBlock];
//				DP[i][j] %= 10007;
//			}
//
//			DP[i][j] += DP[i - 1][j];
//			DP[i][j] %= 10007;
//		}
//	}
//
//	std::cout << DP[NumStudent][TargetHeight];
//	return 0;
//}