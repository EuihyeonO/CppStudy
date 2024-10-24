//#include <iostream>
//#include <vector>
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
//	int BuildingTypes = 0, NumRelation = 0, NumLog = 0;
//	std::cin >> BuildingTypes >> NumRelation >> NumLog;
//
//	std::vector<std::vector<int>> Relation(BuildingTypes + 1);
//	std::vector<int> InDegree(BuildingTypes + 1);
//
//	std::vector<int> CanBuilt(BuildingTypes + 1);
//	std::vector<int> NumBuilt(BuildingTypes + 1, 0);
//
//	for (int i = 0; i < NumRelation; ++i)
//	{
//		int Need = 0, CurBuilding = 0;
//		std::cin >> Need >> CurBuilding;
//
//		Relation[Need].push_back(CurBuilding);
//		++InDegree[CurBuilding];
//	}
//
//	for (int i = 0; i < NumLog; i++)
//	{
//		int Type = 0, Building = 0;
//		std::cin >> Type >> Building;
//
//		//°Ç¼³
//		if (Type == 1)
//		{
//			if (CanBuilt[Building] < InDegree[Building])
//			{
//				std::cout << "Lier!";
//				return 0;
//			}
//
//			if(NumBuilt[Building] == 0)
//			{
//				for (int i = 0; i < Relation[Building].size(); ++i)
//				{
//					++CanBuilt[Relation[Building][i]];
//				}
//			}
//
//			++NumBuilt[Building];
//		}
//		else
//		{
//			if (NumBuilt[Building] == 0)
//			{
//				std::cout << "Lier!";
//				return 0;
//			}
//
//			--NumBuilt[Building];
//
//			if (NumBuilt[Building] == 0)
//			{
//				for (int i = 0; i < Relation[Building].size(); --i)
//				{
//					--CanBuilt[Relation[Building][i]];
//				}
//			}
//		}
//	}
//
//	std::cout << "King-God-Emperor";
//	return 0;
//}