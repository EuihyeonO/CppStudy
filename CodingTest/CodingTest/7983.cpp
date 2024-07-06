//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//#include <map>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//bool Compare(const std::pair<int, int>& _Left, const std::pair<int, int>& _Right)
//{
//	return _Left.second > _Right.second;
//}
//
//int main()
//{
//	Init();
//
//	int InputSize = 0;
//	std::cin >> InputSize;
//
//	//걸리는 시간, 마감기한
//	std::vector<std::pair<int, int>> Homeworks(InputSize);
//	for (int i = 0; i < InputSize; i++)
//	{
//		std::cin >> Homeworks[i].first;
//		std::cin >> Homeworks[i].second;
//	}
//
//	std::sort(Homeworks.begin(), Homeworks.end(), Compare);
//
//	int Answer = INT_MAX;
//
//	for (int i = 0; i < InputSize; i++)
//	{
//		if (Answer < Homeworks[i].second)
//		{
//			Answer = Answer - Homeworks[i].first;
//		}
//		else
//		{
//			Answer = Homeworks[i].second - Homeworks[i].first;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}