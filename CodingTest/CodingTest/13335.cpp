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
//	int NumTruck = 0;
//	int Length = 0;
//	int MaxWeight = 0;
//	std::cin >> NumTruck >> Length >> MaxWeight;
//
//	std::vector<int> Trucks(NumTruck);
//	for (int i = 0; i < NumTruck; i++)
//	{
//		std::cin >> Trucks[i];
//	}
//
//	//입장시간, 트럭무게
//	std::queue<std::pair<int, int>> OnBridge;
//	
//	int CurWeight = 0;
//	int CurTime = 0;
//	int TruckIdx = 0;
//
//	while (true)
//	{
//		CurTime++;
//
//		if (OnBridge.size() > 0)
//		{
//			std::pair<int, int> FrontTruck = OnBridge.front();
//
//			if (CurTime - FrontTruck.first >= Length)
//			{
//				OnBridge.pop();
//				CurWeight -= FrontTruck.second;
//			}
//		}
//
//		if (TruckIdx >= NumTruck && OnBridge.size() == 0)
//		{
//			break;
//		}
//
//		if (OnBridge.size() < Length && TruckIdx < NumTruck && CurWeight + Trucks[TruckIdx] <= MaxWeight)
//		{
//			CurWeight += Trucks[TruckIdx];
//			OnBridge.push({ CurTime, Trucks[TruckIdx] });
//			TruckIdx++;
//		}
//	}
//
//	std::cout << CurTime;
//	return 0;
//}