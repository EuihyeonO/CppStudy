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
//int main()
//{
//	Init();
//
//	int NumSize = 0;
//	std::cin >> NumSize;
//
//	std::vector<int> NegNum;
//	std::vector<int> PosNum;
//
//	NegNum.reserve(50);
//	PosNum.reserve(50);
//
//	int Input = 0;
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Input;
//
//		if (Input <= 0)
//		{
//			NegNum.push_back(Input);
//		}
//		else if (Input > 0)
//		{
//			PosNum.push_back(Input);
//		}
//	}
//
//	std::sort(NegNum.begin(), NegNum.end());
//	std::sort(PosNum.rbegin(), PosNum.rend());
//
//	int Sum = 0;
//
//	for (int i = 0; i + 1 < NegNum.size(); i += 2)
//	{
//		Sum += std::max(NegNum[i] * NegNum[i + 1], NegNum[i] + NegNum[i + 1]);
//	}
//
//	if (NegNum.size() % 2 == 1)
//	{
//		Sum += NegNum.back();
//	}
//
//	for (int i = 0; i + 1< PosNum.size(); i += 2)
//	{
//		Sum += std::max(PosNum[i] * PosNum[i + 1], PosNum[i] + PosNum[i + 1]);
//	}
//
//	if (PosNum.size() % 2 == 1)
//	{
//		Sum += PosNum.back();
//	}
//
//	std::cout << Sum;
//
//	return 0;
//}