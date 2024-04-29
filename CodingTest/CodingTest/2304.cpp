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
//	int NumOfPillar = 0;
//	std::cin >> NumOfPillar;
//
//	std::pair<int, int> MaxLeftPillar = { -1, -1 };
//	std::pair<int, int> MaxRightPillar = { -1, -1 };
//
//	std::vector<std::pair<int, int>> Pillars(NumOfPillar, { 0, 0 });
//	for (int i = 0; i < NumOfPillar; i++)
//	{
//		std::cin >> Pillars[i].first;
//		std::cin >> Pillars[i].second;
//	}
//
//	std::sort(Pillars.begin(), Pillars.end());
//
//	for (int i = 0; i < NumOfPillar; i++)
//	{
//		if (i == 0)
//		{
//			MaxLeftPillar = Pillars[i];
//			MaxRightPillar = Pillars[i];
//		}
//		else
//		{
//			if (MaxLeftPillar.second == Pillars[i].second)
//			{
//				MaxRightPillar = Pillars[i];
//			}
//			else if (MaxLeftPillar.second < Pillars[i].second)
//			{
//				MaxLeftPillar = Pillars[i];
//				MaxRightPillar = Pillars[i];
//			}
//		}
//	}
//
//	int MaxIndex = Pillars[0].first;
//	int MaxHeight = Pillars[0].second;
//
//	int CurIndex = 1;
//	int Area = 0;
//
//	while (CurIndex < NumOfPillar)
//	{
//		if (Pillars[CurIndex].second > MaxHeight)
//		{
//			int Width = Pillars[CurIndex].first - MaxIndex;
//			int Height = MaxHeight;
//
//			Area += Width * Height;
//
//			MaxIndex = Pillars[CurIndex].first;
//			MaxHeight = Pillars[CurIndex].second;
//		}
//
//		CurIndex++;
//	}
//
//	MaxIndex = Pillars[NumOfPillar - 1].first;
//	MaxHeight = Pillars[NumOfPillar - 1].second;
//	CurIndex = NumOfPillar - 2;
//
//	while (CurIndex > 0)
//	{
//		if (Pillars[CurIndex].second > MaxHeight)
//		{
//			int Width = MaxIndex - Pillars[CurIndex].first;
//			int Height = MaxHeight;
//
//			Area += Width * Height;
//
//			MaxIndex = Pillars[CurIndex].first;
//			MaxHeight = Pillars[CurIndex].second;
//		}
//
//		CurIndex--;
//	}
//
//	Area += (MaxRightPillar.first - MaxLeftPillar.first + 1) * MaxLeftPillar.second;
//
//	std::cout << Area;
//
//	return 0;
//}