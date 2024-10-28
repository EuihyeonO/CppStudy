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
//std::vector<int> Nums;
//
//int NumSize = 0;
//int Devide = 0;
//
//bool CanDevide(int _MinGap, int _MaxDevide)
//{
//	int Min = Nums[0];
//	int Max = Nums[0];
//
//	int Count = 1;
//
//	for (int i = 1; i < Nums.size(); i++)
//	{
//		Min = std::min(Min, Nums[i]);
//		Max = std::max(Max, Nums[i]);
//
//		if (Max - Min > _MinGap)
//		{
//			Count++;
//
//			Min = Nums[i];
//			Max = Nums[i];
//		}
//	}
//
//	return Count <= _MaxDevide;
//}
//
//int Binary_Search()
//{
//	int Left = 0;
//	int Right = *std::max_element(Nums.begin(), Nums.end());
//
//	int Answer = 10001;
//
//	while (Left <= Right)
//	{
//		int Mid = (Left + Right) / 2;
//
//		if(CanDevide(Mid, Devide) == true)
//		{
//			Answer = std::min(Answer, Mid);
//			Right = Mid - 1;
//		}
//		else
//		{
//			Left = Mid + 1;
//		}
//	}
//
//	return Answer;
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> NumSize >> Devide;
//
//	Nums.resize(NumSize);
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Nums[i];
//	}
//
//	std::cout << Binary_Search();
//
//	return 0;
//}