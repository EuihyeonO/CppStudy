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
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Answers(NumCase);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int ArraySize = 0;
//		std::cin >> ArraySize;
//
//		std::vector<long long> Array(ArraySize);
//		for (int i = 0; i < ArraySize; i++)
//		{
//			std::cin >> Array[i];
//		}
//
//		int GoodCount = 0;
//
//		long long MaxNum = 0;
//		long long Sum = 0;
//
//		for (int i = 0; i < ArraySize; i++)
//		{
//			Sum += Array[i];
//			MaxNum = std::max(Array[i], MaxNum);
//
//			if (MaxNum * 2 == Sum)
//			{
//				GoodCount++;
//			}
//		}
//
//		Answers[Case] = GoodCount;
//	}
//
//	for (int i = 0; i < NumCase; i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}