//#include <iostream>
//#include <vector>
//#include <climits>
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
//	int AnswerCount = 0;
//	std::cin >> AnswerCount;
//
//	std::vector<std::vector<int>> DP(Size, std::vector<int>(Size));
//
//	for (int i = 0; i < Size; i++)
//	{
//		for(int j = 0; j < Size; j++)
//		{
//			if (j == 0)
//			{
//				std::cin >> DP[i][j];
//			}
//			else
//			{
//				int Input = 0;
//				std::cin >> Input;
//
//				DP[i][j] = DP[i][j - 1] + Input;
//			}
//		}
//	}
//
//	for (int i = 1; i < Size; i++)
//	{
//		for (int j = 0; j < Size; j++)
//		{
//			DP[i][j] += DP[i - 1][j];
//		}
//	}
//
//	std::vector<int> Answers(AnswerCount);
//
//	for (int i = 0; i < AnswerCount; i++)
//	{
//		int StartX = 0;
//		int StartY = 0;
//		int EndX = 0;
//		int EndY = 0;
//
//		std::cin >> StartY >> StartX >> EndY >> EndX;
//		
//		StartX--;
//		StartY--;
//		EndX--;
//		EndY--;
//
//		int Sum = DP[EndY][EndX];
//
//		if (StartX > 0)
//		{
//			Sum -= DP[EndY][StartX - 1];
//		}
//
//		if (StartY > 0)
//		{
//			Sum -= DP[StartY - 1][EndX];
//		}
//
//		if (StartX > 0 && StartY > 0)
//		{
//			Sum += DP[StartY - 1][StartX - 1];
//		}
//
//		Answers[i] = Sum;
//	}
//
//	for (int Answer : Answers)
//	{
//		std::cout << Answer << "\n";
//	}
//
//	return 0; 
//}