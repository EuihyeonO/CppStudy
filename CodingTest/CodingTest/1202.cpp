//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <cmath>
//#include <climits>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Compare
//{
//	bool operator()(const std::pair<int, int>& _Left, const std::pair<int, int>& _Right)
//	{
//		if (_Left.first == _Right.first)
//		{
//			return _Left.second > _Right.second;
//		}
//
//		return _Left.first < _Right.first;
//	}
//};
//
//int main()
//{
//	Init();
//
//	int NumJewerly = 0;
//	int NumBag = 0;
//	std::cin >> NumJewerly >> NumBag;
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Compare> Jewerlies;
//
//	for (int i = 0; i < NumJewerly; i++)
//	{
//		int Weight = 0, Value = 0;
//		std::cin >> Weight >> Value;
//
//		Jewerlies.push({Value, Weight});
//	}
//
//	std::multiset<int> Bags;
//	for (int i = 0; i < NumBag; i++)
//	{
//		int BagWeight = 0;
//		std::cin >> BagWeight;
//
//		Bags.insert(BagWeight);
//	}
//
//	long long Answer = 0;
//	
//	while (Jewerlies.size() > 0)
//	{
//		auto [CurValue, CurWeight] = Jewerlies.top();
//		Jewerlies.pop();
//		
//		auto FindIter = Bags.lower_bound(CurWeight);
//
//		if (FindIter != Bags.end())
//		{
//			Answer += CurValue;
//			Bags.erase(FindIter);
//		}
//
//		if (Bags.size() ==  0)
//		{
//			break;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}
