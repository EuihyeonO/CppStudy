//#include <iostream>
//#include <vector>
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
//	std::string InputStr;
//	std::cin >> InputStr;
//
//	int NumOfA = 0;
//	int NumOfB = 0;
//	for (int i = 0; i < InputStr.size(); i++)
//	{
//		if (InputStr[i] == 'a')
//		{
//			NumOfA++;
//		}
//		else
//		{
//			NumOfB++;
//		}
//	}
//
//	int Answer1 = 0;
//	int Answer2 = 0;
//
//	{
//		int WindowSize = NumOfA;
//		int BCount = 0;
//
//		for (int i = 0; i < WindowSize; i++)
//		{
//			if (InputStr[i] == 'b')
//			{
//				BCount++;
//			}
//		}
//
//		int MinBCount = BCount;
//
//		for (int i = 1; i < InputStr.size() - WindowSize; i++)
//		{
//			if (InputStr[i - 1] == 'b')
//			{
//				BCount--;
//			}
//
//			if (InputStr[i + WindowSize - 1] == 'b')
//			{
//				BCount++;
//			}
//
//			MinBCount = std::min(MinBCount, BCount);
//		}
//
//		Answer1 = MinBCount;
//	}
//
//	{
//		int WindowSize = NumOfB;
//		int ACount = 0;
//
//		for (int i = 0; i < WindowSize; i++)
//		{
//			if (InputStr[i] == 'a')
//			{
//				ACount++;
//			}
//		}
//
//		int MinACount = ACount;
//
//		for (int i = 1; i < InputStr.size() - WindowSize; i++)
//		{
//			if (InputStr[i - 1] == 'a')
//			{
//				ACount--;
//			}
//
//			if (InputStr[i + WindowSize - 1] == 'a')
//			{
//				ACount++;
//			}
//
//			MinACount = std::min(MinACount, ACount);
//		}
//
//		Answer2 = MinACount;
//	}
//
//	int Answer = std::min(Answer1, Answer2);
//
//	std::cout << Answer;
//
//	return 0;
//}