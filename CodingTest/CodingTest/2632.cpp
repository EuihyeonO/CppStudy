//#include <iostream>
//#include <vector>
//#include <map>
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
//	int TargetSize = 0;
//	int ASize = 0;
//	int BSize = 0;
//
//	std::cin >> TargetSize >> ASize >> BSize;
//
//	std::vector<int> APiece(ASize);
//	std::vector<int> BPiece(BSize);
//
//	int ASum = 0;
//	int BSum = 0;
//
//	for (int i = 0; i < ASize; i++)
//	{
//		std::cin >> APiece[i];
//		ASum += APiece[i];
//	}
//
//	for (int i = 0; i < BSize; i++)
//	{
//		std::cin >> BPiece[i];
//		BSum += BPiece[i];
//	}
//	
//	std::vector<int> APieceCase(2000001);
//	std::vector<int> BPieceCase(2000001);
//
//	std::vector<int> PrefixA(ASize * 2 + 1, 0);
//	std::vector<int> PrefixB(BSize * 2+ 1, 0);
//
//	for (int i = 1; i <= ASize * 2; i++) 
//	{
//		PrefixA[i] = PrefixA[i - 1] + APiece[(i - 1) % ASize];
//	}
//
//	for (int i = 1; i <= BSize * 2; i++)
//	{
//		PrefixB[i] = PrefixB[i - 1] + BPiece[(i - 1) % BSize];
//	}
//
//	for (int i = 1; i < ASize; i++) 
//	{
//		for (int j = 0; j < ASize; j++) 
//		{
//			int End = j + i;
//			int Sum = PrefixA[End] - PrefixA[j];
//			APieceCase[Sum]++;
//		}
//	}
//
//	for (int i = 1; i < BSize; i++)
//	{
//		for (int j = 0; j < BSize; j++)
//		{
//			int End = j + i;
//			int Sum = PrefixB[End] - PrefixB[j];
//			BPieceCase[Sum]++;
//		}
//	}
//
//	APieceCase[0] = 1;
//	APieceCase[ASum] = 1;
//
//	BPieceCase[0] = 1;
//	BPieceCase[BSum] = 1;
//
//	int Case = 0;
//
//	for (int i = 0; i <= TargetSize; i++)
//	{
//		Case += APieceCase[i] * BPieceCase[TargetSize - i];
//	}
//
//	std::cout << Case;
//
//	return 0;
//}