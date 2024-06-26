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
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Nums(3);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		std::cin >> Nums[0] >> Nums[1] >> Nums[2];
//
//		std::sort(Nums.begin(), Nums.end());
//
//		int MinSumDist = 99999999;
//
//		for (int i = Nums[0]; i <= Nums[2]; i++)
//		{
//			int SumDist = abs(i - Nums[0]) + abs(i - Nums[1]) + abs(i - Nums[2]);
//			MinSumDist = std::min(MinSumDist, SumDist);
//		}
//
//		std::cout << MinSumDist << "\n";
//	}
//
//	return 0;
//}