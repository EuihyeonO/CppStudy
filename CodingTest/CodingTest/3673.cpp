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
//	long long NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<long long> Answers(NumCase);
//
//	for (long long Case = 0; Case < NumCase; Case++)
//	{
//		long long TargetNumber = 0, NumSize = 0;
//		std::cin >> TargetNumber >> NumSize;
//
//		std::vector<long long> PrefixSum(NumSize);
//
//		for (long long i = 0; i < NumSize; i++)
//		{
//			long long CurNum = 0;
//			std::cin >> CurNum;
//
//			if (i == 0)
//			{
//				PrefixSum[i] = CurNum;
//			}
//			else
//			{
//				PrefixSum[i] += PrefixSum[i - 1] + CurNum;
//			}
//		}
//
//		std::map<long long, long long> Maps;
//
//		for (long long i = 0; i < NumSize; i++)
//		{
//			PrefixSum[i] %= TargetNumber;
//			Maps[PrefixSum[i]]++;
//		}
//
//		long long Count = 0;
//
//		for (std::pair<const long long, long long>& _Pair : Maps)
//		{
//			long long Size = _Pair.second;
//
//			if (_Pair.first == 0)
//			{
//				Count += Size;
//			}
//
//			Count += (Size * (Size - 1)) / 2;
//		}
//
//		Answers[Case] = Count;
//	}
//
//	for (long long Answer : Answers)
//	{
//		std::cout << Answer << "\n";
//	}
//
//	return 0;
//}