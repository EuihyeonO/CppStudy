//#include <iostream>
//#include <algorithm>
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
//	int Days = 0;
//	std::cin >> Days;
//
//	std::vector<std::pair<int, int>> Task(Days + 1);
//	for (int i = 1; i <= Days; i++)
//	{
//		std::cin >> Task[i].first;
//		std::cin >> Task[i].second;
//	}
//	
//	std::vector<int> DP(Days + 1);
//	for (int i = 1; i <= Days; i++)
//	{
//		int EndDay = Task[i].first + i - 1;
//
//		if (EndDay <= Days)
//		{
//			DP[EndDay] = std::max(DP[EndDay], DP[i - 1] + Task[i].second);
//		}
//
//		DP[i] = std::max(DP[i], DP[i - 1]);
//	}
//
//	std::cout << DP[Days];
//
//	return 0;
//}