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
//	int NumSize = 0;
//	std::cin >> NumSize;
//
//	std::vector<int> Sequence(NumSize);
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//
//	std::vector<int> DP;
//	DP.reserve(NumSize);
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		auto FindIter = std::lower_bound(DP.begin(), DP.end(), Sequence[i]);
//
//		if (FindIter != DP.end())
//		{
//			*FindIter = Sequence[i];
//		}
//		else
//		{
//			DP.push_back(Sequence[i]);
//		}
//	}
//
//	std::cout << DP.size();
//
//	return 0;
//}