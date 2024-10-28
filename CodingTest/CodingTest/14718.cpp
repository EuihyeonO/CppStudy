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
//struct Stat
//{
//	int Str = 0;
//	int Dex = 0;
//	int Int = 0;
//};
//
//std::vector<Stat> SoldierStats;
//
//int main()
//{
//	Init();
//
//	int NumSoldier = 0, NeedWin = 0;
//	std::cin >> NumSoldier >> NeedWin;
//
//	SoldierStats.resize(NumSoldier);
//
//	for (int i = 0; i < NumSoldier; i++)
//	{
//		std::cin >> SoldierStats[i].Str >> SoldierStats[i].Dex >> SoldierStats[i].Int;
//	}
//
//	int Answer = 100000000;
//
//	for (int i = 0; i < NumSoldier; i++)
//	{
//		for (int j = 0; j < NumSoldier; j++)
//		{
//			for (int k = 0; k < NumSoldier; k++)
//			{
//				int CurStr = SoldierStats[i].Str;
//				int CurDex = SoldierStats[j].Dex;
//				int CurInt = SoldierStats[k].Int;
//
//				int Count = 0;
//
//				for (int l = 0; l < NumSoldier; l++)
//				{
//					if (SoldierStats[l].Str <= CurStr && SoldierStats[l].Dex <= CurDex && SoldierStats[l].Int <= CurInt)
//					{
//						Count++;
//					}
//
//					if (Count >= NeedWin)
//					{
//						Answer = std::min(Answer, CurStr + CurDex + CurInt);
//						break;
//					}
//				}
//			}
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}