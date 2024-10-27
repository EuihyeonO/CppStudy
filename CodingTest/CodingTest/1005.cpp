//#include <iostream>
//#include <vector>
//#include <queue>
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
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Answer(NumCase);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int NumBuilding = 0;
//		std::cin >> NumBuilding;
//
//		int NumOrder = 0;
//		std::cin >> NumOrder;
//
//		std::vector<std::vector<int>> NextBuilding(NumBuilding + 1);
//
//		std::vector<int> Times(NumBuilding + 1);
//		std::vector<int> InDegree(NumBuilding + 1);
//
//		for (int i = 1; i <= NumBuilding; i++)
//		{
//			std::cin >> Times[i];
//		}
//
//		for (int i = 1; i <= NumOrder; i++)
//		{
//			int First = 0, Second = 0;
//			std::cin >> First >> Second;
//
//			NextBuilding[First].push_back(Second);
//
//			InDegree[Second]++;
//		}
//
//		std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> Queue;
//		
//		for (int i = 1; i <= NumBuilding; i++)
//		{
//			if (InDegree[i] == 0)
//			{
//				Queue.push({ Times[i], i });
//			}
//		}
//
//		int TargetBuilding = 0;
//		std::cin >> TargetBuilding;
//
//		while (Queue.size() > 0)
//		{
//			std::pair<int, int> CurPair = Queue.top();
//			Queue.pop();
//
//			if (CurPair.second == TargetBuilding)
//			{
//				break;
//			}
//
//			for (int i = 0; i < NextBuilding[CurPair.second].size(); i++)
//			{
//				int NextIndex = NextBuilding[CurPair.second][i];
//
//				InDegree[NextIndex]--;
//
//				if (InDegree[NextIndex] == 0)
//				{
//					Times[NextIndex] += Times[CurPair.second];
//					Queue.push({ Times[NextIndex], NextIndex});
//				}
//			}
//		}
//
//		Answer[Case] = Times[TargetBuilding];
//	}
//
//	for (int CurAnswer : Answer)
//	{
//		std::cout << CurAnswer << "\n";
//	}
//
//	return 0;
//}

