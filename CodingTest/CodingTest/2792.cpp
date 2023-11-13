//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//
//int main()
//{
//	int NumOfChild = 0;
//	int NumOfjewelryColor = 0;
//
//	std::vector<int> Jewelries;
//
//	std::cin >> NumOfChild >> NumOfjewelryColor;
//	Jewelries.resize(NumOfjewelryColor);
//
//	for (int i = 0; i < NumOfjewelryColor; i++)
//	{
//		std::cin >> Jewelries[i];
//	}
//
//	sort(Jewelries.begin(), Jewelries.end());
//
//	int MaxJewelry = Jewelries[Jewelries.size() - 1];
//
//	int Start = 1;
//	int End = MaxJewelry;
//	int Mid = (Start + End) / 2;
//
//	int Answer = INT_MAX;
//
//	while (Start <= End)
//	{
//		Mid = (Start + End) / 2;
//		int DevideCount = 0;
//
//		for (int i = 0; i < Jewelries.size(); i++)
//		{
//			int Num = Jewelries[i];
//
//			DevideCount += (Num / Mid);
//			if (Num % Mid != 0)
//			{
//				DevideCount++;
//			}
//		}
//		
//		if (DevideCount <= NumOfChild)
//		{
//			Answer = std::min(Answer, Mid);
//
//			End = Mid - 1;
//		}
//		else
//		{
//			Start = Mid + 1;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}