//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
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
//	long long NumOfficer = 0;
//	long long NumMan = 0;
//	
//	std::cin >> NumOfficer >> NumMan;
//
//	std::vector<long long> TimeCosts(NumOfficer);
//	for (long long i = 0; i < NumOfficer; i++)
//	{
//		std::cin >> TimeCosts[i];
//	}
//
//	std::sort(TimeCosts.begin(), TimeCosts.end());
//
//	long long Start = 0;
//	long long End = TimeCosts.front() * NumMan;
//
//	long long Mid = 0;
//	long long Answer = LLONG_MAX;
//	
//	while (Start <= End)
//	{
//		Mid = (Start + End) / 2;
//
//		long long ManCount = 0;
//
//		for (long long i = 0; i < TimeCosts.size(); i++)
//		{
//			ManCount += Mid / TimeCosts[i];
//		}
//
//		if (ManCount >= NumMan)
//		{
//			Answer = std::min(Mid, Answer);
//			End = Mid - 1;
//		}
//		else if(ManCount < NumMan)
//		{
//			Start = Mid + 1;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}