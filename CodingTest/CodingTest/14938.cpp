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
//int main()
//{
//	Init();
//
//	int NumField = 0;
//	int SeekRange = 0;
//	int NumRoad = 0;
//
//	std::cin >> NumField >> SeekRange >> NumRoad;
//	
//	std::vector<int> Items(NumField);
//	for (int i = 0; i < NumField; i++)
//	{
//		std::cin >> Items[i];
//	}
//
//	std::vector<std::vector<std::pair<int, int>>> Links(NumField);
//	for (int i = 0; i < NumRoad; i++)
//	{
//		int Start = 0;
//		int End = 0;
//		int Weight = 0;
//
//		std::cin >> Start >> End >> Weight;
//		
//		Start--;
//		End--;
//		
//		Links[Start].push_back({ End, Weight });
//		Links[End].push_back({ Start, Weight });
//	}
//
//	std::vector<std::vector<int>> Cost(NumField, std::vector<int>(NumField, INT_MAX / 2 - 1));
//	
//	for (int i = 0; i < NumField; i++)
//	{
//		for (int j = 0; j < Links[i].size(); j++)
//		{
//			Cost[i][Links[i][j].first] = Links[i][j].second;
//		}
//	}
//
//	for (int i = 0; i < NumField; i++)
//	{
//		for (int j = 0; j < NumField; j++)
//		{
//			for (int k = 0; k < NumField; k++)
//			{
//				Cost[j][k] = std::min(Cost[j][k], Cost[j][i] + Cost[i][k]);
//			}
//		}
//	}
//
//	for (int k = 0; k < NumField; k++)
//	{
//		Cost[k][k] = 0;
//	}
//
//	int MaxItemSum = 0;
//
//	for (int i = 0; i < NumField; i++)
//	{
//		int CurItemSum = 0;
//
//		for (int j = 0; j < NumField; j++)
//		{
//			if (Cost[i][j] <= SeekRange)
//			{
//				CurItemSum += Items[j];
//			}
//		}
//
//		if (MaxItemSum < CurItemSum)
//		{
//			MaxItemSum = CurItemSum;
//		}
//	}
//
//	std::cout << MaxItemSum;
//
//	return 0;
//}