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
//bool BackSort(const std::pair<int, int>& _Left, const std::pair<int, int>& _Right)
//{
//	if (_Left.second == _Right.second)
//	{
//		return _Left.first < _Right.first;
//	}
//
//	return _Left.second < _Right.second;
//}
//
//int main()
//{
//	Init();
//
//	int NumLine = 0;
//	std::cin >> NumLine;
//
//	std::vector<std::pair<int, int>> Data(NumLine);
//
//	for (size_t i = 0; i < NumLine; i++)
//	{
//		std::cin >> Data[i].first >> Data[i].second;
//	}
//
//	std::sort(Data.begin(), Data.end());
//
//	int Max_1 = Data[0].second;
//	int Count_1 = 0;
//
//	for (int i = 1; i < NumLine; i++)
//	{
//		if (Data[i].second < Max_1)
//		{
//			Count_1++;
//		}
//		else if (Data[i].second > Max_1)
//		{
//			Max_1 = Data[i].second;
//		}
//	}
//
//	std::sort(Data.begin(), Data.end(), BackSort);
//
//	int Max_2 = Data[0].first;
//	int Count_2 = 0;
//
//	for (int i = 1; i < NumLine; i++)
//	{
//		if (Data[i].first < Max_2)
//		{
//			Count_2++;
//		}
//		else if (Data[i].first > Max_2)
//		{
//			Max_2 = Data[i].first;
//		}
//	}
//
//	std::cout << std::min(Count_1, Count_2);
//
//	return 0;
//}