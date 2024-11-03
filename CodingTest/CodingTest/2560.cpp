//#include <iostream>
//#include <vector>
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
//	int StartTime = 0, EndTime = 0, DeathTime = 0, MaxDay = 0;
//	std::cin >> StartTime >> EndTime >> DeathTime >> MaxDay;
//
//	std::vector<int> DP(MaxDay + 1);
//	
//	DP[0] = 1;
//	int BirthBug = 0;
//
//	for(int i = 1; i <= MaxDay; i++)
//	{
//		if (i - StartTime >= 0)
//		{
//			BirthBug += DP[i - StartTime];
//		}
//
//		if (i - EndTime >= 0)
//		{
//			BirthBug -= DP[i - EndTime];
//		}
//
//		DP[i] += BirthBug;
//		DP[i] %= 1000;
//	}
//
//	int Sum = 0;
//
//	for (int i = std::max(0, MaxDay - DeathTime + 1); i <= MaxDay; i++)
//	{
//		Sum += DP[i];
//		Sum %= 1000;
//	}
//
//	std::cout << Sum;
//
//	return 0;
//}