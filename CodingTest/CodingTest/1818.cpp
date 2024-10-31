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
//	std::vector<int> Nums(NumSize);
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Nums[i];
//	}
//
//	std::vector<int> LIS;
//	LIS.reserve(NumSize);
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		auto Iter = std::lower_bound(LIS.begin(), LIS.end(), Nums[i]);
//
//		if (Iter != LIS.end())
//		{
//			*Iter = Nums[i];
//		}
//		else
//		{
//			LIS.push_back(Nums[i]);
//		}
//	}
//
//	std::cout << NumSize - LIS.size();
//
//	return 0;
//}