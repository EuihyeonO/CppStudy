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
//bool Compare_1(const std::pair<int, int>& _Left, const std::pair<int, int>& _Right)
//{
//	if (_Left.first == _Right.first)
//	{
//		return _Left.second < _Right.second;
//	}
//
//	return _Left.first > _Right.first;
//}
//
//int main()
//{
//	Init();
//
//	int NumMan = 0;
//	int NumGroup = 0;
//
//	std::cin >> NumMan >> NumGroup;
//	
//	std::vector<int> Heights(NumMan);
//
//	for (int i = 0; i < NumMan; i++)
//	{
//		std::cin >> Heights[i];
//	}
//
//	std::vector<std::pair<int, int>> Gaps(NumMan - 1);
//
//	int Cost = 0;
//
//	for (int i = 0; i < NumMan - 1; i++)
//	{
//		Gaps[i].first = Heights[i + 1] - Heights[i];
//		Gaps[i].second = i;
//
//		Cost += Gaps[i].first;
//	}
//
//	std::sort(Gaps.begin(), Gaps.end(), Compare_1);
//
//	for (int i = 0; i < NumGroup - 1; i++)
//	{
//		Cost -= Gaps[i].first;
//	}
//
//	std::cout << Cost;
//
//	return 0;
//}