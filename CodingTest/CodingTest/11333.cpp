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
//	for(int i = 0; i < NumCase; i++)
//	{
//		long long  N = 0;
//		std::cin >> N;
//		std::vector<long long> DP(N + 1);
//		DP[3] = 3;
//
//		if (N <= 5)
//		{
//			std::cout << DP[5];
//			continue;
//		}
//
//		long long Case_3 = 3;
//		long long Case_6 = 4;
//
//		DP[6] = 13;
//
//		for (long long i = 9; i <= N; i += 3)
//		{
//			DP[i] += (long long)std::pow(Case_3, i / 3);
//			DP[i] %= 1000000007;
//
//			for (long long j = 6; j <= i; j += 6)
//			{
//				long long SpaceCount = (i - j) / 3 + 1;
//				long long BlockCount = j / 6;
//
//				long long CaseCount = 1;
//
//				for (long long k = SpaceCount; k > SpaceCount - BlockCount; k--)
//				{
//					CaseCount *= k;
//				}
//
//				for (long long k = 1; k <= BlockCount; k++)
//				{
//					CaseCount /= k;
//				}
//
//				DP[i] += CaseCount * Case_6 * std::pow(Case_3, SpaceCount - 1);
//				DP[i] %= 1000000007;
//			}
//
//			DP[i] %= 1000000007;
//		}
//
//		std::cout << DP[N];
//	}
//
//	return 0;
//}