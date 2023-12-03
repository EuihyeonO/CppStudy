//#include <iostream>
//#include <vector>
//#include <queue>
//
//struct Building
//{
//	int Order = 0;
//	int BuildTime = 0;
//
//	int EntryNum = 0;
//	std::vector<int> PriorIndexs;
//
//	int SortedOrder = 0;
//	bool isSorted = false;
//};
//
//int main()
//{
//	int NumOfBuilding = 0;
//	std::cin >> NumOfBuilding;
//
//	std::vector<Building> Buildings;
//	std::queue<Building> Queue;
//
//	for (int i = 0; i < NumOfBuilding; i++)
//	{
//		Building NewBuilding;
//		NewBuilding.Order = i + 1;
//
//		std::cin >> NewBuilding.BuildTime;
//
//		while (true)
//		{
//			int Input = 0;
//			std::cin >> Input;
//			
//			if (Input == -1)
//			{
//				break;
//			}
//
//			NewBuilding.PriorIndexs.push_back(Input);
//		}
//
//		NewBuilding.EntryNum = NewBuilding.PriorIndexs.size();
//
//		Buildings.push_back(NewBuilding);
//		Queue.push(NewBuilding);
//	}
//
//	std::vector<Building> SortedBuilding;
//
//	//위상정렬
//	while (Queue.size() > 0)
//	{
//		Building CurBuilding = Queue.front();
//		Queue.pop();
//
//		for (size_t i = 0; i < CurBuilding.PriorIndexs.size(); i++)
//		{
//			if (CurBuilding.PriorIndexs[i] == -1)
//			{
//				continue;
//			}
//
//			int Order = CurBuilding.PriorIndexs[i] - 1;
//			
//			if (Buildings[Order].isSorted == true)
//			{
//				CurBuilding.PriorIndexs[i] = -1;
//				CurBuilding.EntryNum--;
//			}
//		}
//
//		if (CurBuilding.EntryNum <= 0)
//		{
//			int CurOrder = CurBuilding.Order - 1;
//
//			Buildings[CurOrder].isSorted = true;
//			Buildings[CurOrder].SortedOrder = SortedBuilding.size();
//
//			SortedBuilding.push_back(Buildings[CurOrder]);
//			continue;
//		}
//
//		Queue.push(CurBuilding);
//	}
//
//	std::vector<int> DP(NumOfBuilding, 0);
//
//	for (int i = 0; i < NumOfBuilding; i++)
//	{
//		Building CurBuilding = SortedBuilding[i];
//
//		if (CurBuilding.EntryNum == 0)
//		{
//			DP[i] = CurBuilding.BuildTime;
//			continue;
//		}
//
//		int MaxTime = 0;
//
//		for (size_t j = 0; j < CurBuilding.PriorIndexs.size(); j++)
//		{
//			int OriginOrder = CurBuilding.PriorIndexs[j] - 1;
//			MaxTime = std::max(MaxTime, DP[Buildings[OriginOrder].SortedOrder]);
//		}
//
//		DP[i] = MaxTime + CurBuilding.BuildTime;
//	}
//
//	for (int i = 0; i < DP.size(); i++)
//	{
//		std::cout << DP[Buildings[i].SortedOrder] << "\n";
//	}
//
//	return 0;
//}