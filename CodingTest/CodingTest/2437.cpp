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
//int main()
//{
//	Init();
//
//	int NumOfWeight = 0;
//	std::cin >> NumOfWeight;
//
//	std::vector<int> Weights(NumOfWeight);
//	for (int i = 0; i < NumOfWeight; i++)
//	{
//		std::cin >> Weights[i];
//	}
//
//	std::sort(Weights.begin(), Weights.end());
//
//	int LastNum = 0;
//	int Answer = 0;
//
//	for (int i = 0; i < NumOfWeight; i++)
//	{
//		int MinNum = Weights[i];
//		int MaxNum = Weights[i] + LastNum;
//
//		if (MinNum - LastNum <= 1)
//		{
//			LastNum = MaxNum;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	Answer = LastNum + 1;
//	std::cout << Answer;
//	return 0;
//}