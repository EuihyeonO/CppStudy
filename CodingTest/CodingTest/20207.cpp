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
//	int InputSize = 0;
//	std::cin >> InputSize;
//
//	std::vector<std::pair<int, int>> Schedules(InputSize);
//
//	for (int i = 0; i < InputSize; i++)
//	{
//		std::cin >> Schedules[i].first >> Schedules[i].second;
//	}
//
//	std::vector<int> Days(367);
//
//	for (int i = 0; i < InputSize; i++)
//	{
//		for (int j = Schedules[i].first; j <= Schedules[i].second; j++)
//		{
//			Days[j]++;
//		}
//	}
//
//	int Start = 0;
//	int MaxY = 0;
//	int Sum = 0;
//
//	for (int i = 1; i <= 366; i++)
//	{
//		if (Days[i - 1] != 0 && Days[i] == 0)
//		{
//			Sum += MaxY * (i - Start);
//			MaxY = -1;
//		}
//		else if (Days[i - 1] == 0 && Days[i] != 0)
//		{
//			Start = i;
//		}
//
//		if (Days[i] != 0)
//		{
//			MaxY = std::max(MaxY, Days[i]);
//		}
//	}
//
//	std::cout << Sum;
//
//	return 0;
//}