//#include <iostream>
//#include <vector>
//#include <cmath>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int GetDist(const std::pair<int, int>& _Start, const std::pair<int, int>& _End)
//{
//	return std::abs(_Start.first - _End.first) + std::abs(_Start.second - _End.second);
//}
//
//int main()
//{
//	Init();
//
//	int NumOfCP = 0;
//	std::cin >> NumOfCP;
//
//	std::vector<std::pair<int, int>> CPs(NumOfCP);
//	for (int i = 0; i < NumOfCP; i++)
//	{
//		std::cin >> CPs[i].first;
//		std::cin >> CPs[i].second;
//	}
//
//	int MaxGap = 0;
//
//	for (int i = 0; i < NumOfCP - 2; i++)
//	{
//		int NormalDistance = GetDist(CPs[i], CPs[i + 1]) + GetDist(CPs[i + 1], CPs[i + 2]);
//		int SkipDistance = GetDist(CPs[i], CPs[i + 2]);
//
//		int Gap = NormalDistance - SkipDistance;
//		
//		if (Gap > MaxGap)
//		{
//			MaxGap = Gap;
//		}
//	}
//
//	int SumDist = 0;
//
//	for (int i = 0; i < NumOfCP - 1; i++)
//	{
//		SumDist += GetDist(CPs[i], CPs[i + 1]);
//	}
//
//	SumDist -= MaxGap;
//
//	std::cout << SumDist;
//
//	return 0;
//}