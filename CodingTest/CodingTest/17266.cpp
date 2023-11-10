//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int RoadLength = 0;
//	int NumOfPointLight = 0;
//	
//	std::vector<int> PL_Pos;
//
//	std::cin >> RoadLength >> NumOfPointLight;
//
//	PL_Pos.resize(NumOfPointLight);
//
//	for (int i = 0; i < NumOfPointLight; i++)
//	{
//		std::cin >> PL_Pos[i];
//	}
//
//	int Answer = 0;
//
//	int LeftEndDist = PL_Pos[0];
//	int RightEndDist = RoadLength - PL_Pos[NumOfPointLight - 1];
//	
//	int MaxEndDist = std::max(LeftEndDist, RightEndDist);
//
//	if(NumOfPointLight > 1)
//	{
//		int MaxDist = PL_Pos[1] - PL_Pos[0];
//
//		for (int i = 1; i < NumOfPointLight; i++)
//		{
//			int CurDist = PL_Pos[i] - PL_Pos[i - 1];
//
//			if (CurDist > MaxDist)
//			{
//				MaxDist = CurDist;
//			}
//		}
//		
//		int NeedHeight = (MaxDist % 2 == 0) ? MaxDist / 2 : MaxDist / 2 + 1;
//		Answer = std::max(MaxEndDist, NeedHeight);
//	}
//	else
//	{
//		Answer = MaxEndDist;
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}