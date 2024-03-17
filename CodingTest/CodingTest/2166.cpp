//#include <iostream>
//#include <vector>
//#include <stdio.h>
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
//	int DotNum = 0;
//	std::cin >> DotNum;
//
//	std::vector<std::pair<long long, long long>> Positions(DotNum);
//
//	for(int i = 0; i < DotNum; i++)
//	{
//		long long X = 0;
//		long long Y = 0;
//		std::cin >> X >> Y;
//
//		Positions[i] = { X, Y };
//	}
//
//	long long Front = 0;
//	long long Back = 0;
//
//	for (int i = 0; i < DotNum; i++)
//	{
//		std::pair<long long, long long> NextPos;
//		
//		if (i == DotNum - 1)
//		{
//			NextPos = Positions[0];
//		}
//		else
//		{
//			NextPos = Positions[i + 1];
//		}
//
//		Front += Positions[i].first * NextPos.second;
//		Back += NextPos.first * Positions[i].second;
//	}
//
//	long long Answer = std::abs(Front - Back);
//
//	printf("%lld.%lld", Answer / 2, (Answer % 2) * 5);
//
//	return 0;
//}