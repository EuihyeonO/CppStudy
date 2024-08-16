//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//#include <queue>
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
//	long long NumSize = 0;
//	std::cin >> NumSize;
//
//	long long Mod = 0;
//	std::cin >> Mod;
//
//	std::vector<long long> Nums(NumSize + 1);
//	
//	for (long long i = 1; i <= NumSize; i++)
//	{
//		long long Input = 0;
//		std::cin >> Input;
//
//		Nums[i] = Input + Nums[i - 1];
//	}
//
//	std::map<long long, long long> ModCount;
//
//	for (long long i = 1; i <= NumSize; i++)
//	{
//		ModCount[Nums[i] % Mod]++;
//	}
//
//	long long Answer = 0;
//
//	for (const std::pair<long long, long long> Count : ModCount)
//	{
//		if (Count.first % Mod == 0)
//		{
//			Answer += Count.second;
//		}
//
//		Answer += Count.second * (Count.second - 1) / 2;
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}