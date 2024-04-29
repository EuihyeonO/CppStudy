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
//	std::vector<int> NumCount(100001, 0);
//
//	int NumSize = 0;
//	int SameCount = 0;
//
//	std::cin >> NumSize >> SameCount;
//
//	std::vector<int> Sequence(NumSize);
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//
//	int Left = 0;
//	int Right = 0;
//
//	int MaxLength = 0;
//
//	while (Right < NumSize)
//	{
//		int CurNum = Sequence[Right];
//		NumCount[CurNum]++;
//
//		if (NumCount[CurNum] > SameCount)
//		{
//			MaxLength = std::max(MaxLength, Right - Left);
//
//			while (NumCount[CurNum] > SameCount)
//			{
//				int Num = Sequence[Left];
//				NumCount[Num]--;
//				Left++;
//			}
//		}
//
//		Right++;
//	}
//
//	MaxLength = std::max(MaxLength, NumSize - Left);
//
//	std::cout << MaxLength;
//	return 0;
//}