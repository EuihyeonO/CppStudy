//#include <iostream>
//#include <vector>
//#include <climits>
//
//int main()
//{
//	int Length = 0;
//	std::cin >> Length;
//
//	std::vector<int> Sequence;
//	Sequence.resize(Length);
//
//	for (int i = 0; i < Length; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//
//	std::vector<int> Dp;
//	Dp.resize(Length);
//
//	Dp[0] = 1;
//	Dp[1] = Sequence[0] > Sequence[1] ? 2 : 1;
//
//	int Index = 2;
//
//	while (Index < Length)
//	{
//		int StartIndex = 0;
//		int EndIndex = Index - 1;
//		
//		std::vector<int> Indexs;
//
//		while (StartIndex <= EndIndex)
//		{
//			if (Sequence[StartIndex] > Sequence[Index])
//			{
//				Indexs.push_back(StartIndex);
//			}
//
//			StartIndex++;
//		}
//
//		StartIndex = 0;
//		EndIndex = Indexs.size() - 1;
//
//		int DpMax = 0;
//		int DpSequence = 0;
//
//		while (StartIndex <= EndIndex)
//		{
//			int DpIndex = Indexs[StartIndex];
//			int DpCount = Dp[DpIndex];
//
//			if (DpCount > DpMax)
//			{
//				DpMax = DpCount;
//				DpSequence = Sequence[DpIndex];
//			}
//			else if (DpCount == DpMax && DpSequence < Sequence[DpIndex])
//			{
//				DpMax = DpCount;
//				DpSequence = Sequence[DpIndex];
//			}
//
//			StartIndex++;
//		}
//
//		Dp[Index] = DpMax + 1;
//		Index++;
//	}
//
//	int DpMax = 0;
//
//	for (int i = 0; i < Dp.size(); i++)
//	{
//		DpMax = std::max(DpMax, Dp[i]);
//	}
//
//	std::cout << DpMax;
//
//	return 0;
//}