//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
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
//	if (_Left.first == _Right.first)
//	{
//		return _Left.second < _Right.second;
//	}
//
//	return _Left.first < _Right.first;
//}
//
//int main()
//{
//	Init(); 
//    
//	int NumSize = 0;
//	std::cin >> NumSize;
//
//	std::vector<std::pair<int, int>> Nums(NumSize);
//
//	for (int i = 0; i < Nums.size(); i++)
//	{
//		std::cin >> Nums[i].first;
//		Nums[i].second = i;
//	}
//
//	std::sort(Nums.begin(), Nums.end(), Compare);
//	
//	int Answer = -1;
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		Answer = std::max(Answer, Nums[i].second - i);
//	}
//
//	std::cout << Answer + 1;
//
//	return 0;
//}