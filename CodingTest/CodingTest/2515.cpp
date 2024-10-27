//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<std::pair<int, int>> DrawingInfo;
//std::vector<int> DP;
//
//int NumDrawing = 0;
//int Threshold = 0;
//
//int main()
//{
//	Init();
//	std::cin >> NumDrawing >> Threshold;
//
//	//높이, 가격
//	DrawingInfo.resize(NumDrawing);
//	DP.resize(NumDrawing);
//
//	for (int i = 0; i < NumDrawing; i++)
//	{
//		std::cin >> DrawingInfo[i].first >> DrawingInfo[i].second;
//	}
//
//	std::sort(DrawingInfo.begin(), DrawingInfo.end());
//	DP[0] = DrawingInfo[0].second;
//
//	for (int i = 1; i < NumDrawing; i++)
//	{
//		DP[i] = std::max(DrawingInfo[i].second, DP[i - 1]);
//
//		auto FindIter = std::lower_bound(DrawingInfo.begin(), DrawingInfo.begin() + i, std::make_pair<int, int>(DrawingInfo[i].first - Threshold, INT_MAX));
//		
//		if (FindIter != DrawingInfo.begin())
//		{
//			FindIter--;
//			int index = FindIter - DrawingInfo.begin();
//
//			DP[i] = std::max(DP[i], DP[index] + DrawingInfo[i].second);
//		}
//	}
//
//	std::cout << DP[NumDrawing - 1] << "\n";
//
//	return 0;
//}
