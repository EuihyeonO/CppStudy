//#include <iostream>
//#include <map>
//#include <cmath>
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
//	std::vector<long long> DevisorSum(1000001);
//	DevisorSum[1] = 0;
//
//	for (int i = 1; i <= 1000000; i++)
//	{
//		for (int j = i; j <= 1000000; j += i)
//		{
//			DevisorSum[j] += i;
//		}
//	}
//
//	for (int i = 2; i <= 1000000; i++)
//	{
//		DevisorSum[i] += DevisorSum[i - 1];
//	}
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int TargetNum = 0;
//		std::cin >> TargetNum;
//
//		std::cout << DevisorSum[TargetNum] << "\n";
//	}
//
//	return 0;
//}