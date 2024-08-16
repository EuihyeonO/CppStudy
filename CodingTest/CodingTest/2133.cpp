//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//#include <queue>
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
//	int Width = 0;
//	std::cin >> Width;
//
//	if (Width % 2 == 1)
//	{
//		std::cout << 0;
//		return 0;
//	}
//
//	std::vector<int> DP(31);
//	
//	DP[0] = 1;
//	DP[2] = 3;
//
//	for (int i = 4; i <= Width; i += 2)
//	{
//		DP[i] += DP[i - 2] * 3;
//
//		for (int j = 4; i - j >= 0; j += 2)
//		{
//			DP[i] += DP[i - j] * 2;
//		}
//	}
//
//	std::cout << DP[Width];
//
//	return 0;
//}