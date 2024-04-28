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
//	int NumOfSpace = 0;
//	int NumOfCar = 0;
//	std::cin >> NumOfSpace >> NumOfCar;
//	
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> Spaces;
//	for (int i = 0; i < NumOfSpace; i++)
//	{
//		int Price = 0;
//		std::cin >> Price;
//
//		Spaces.push({ i + 1, Price });
//	}
//	
//	std::vector<int> CarWeights(NumOfCar + 1);
//	for (int i = 1; i <= NumOfCar; i++)
//	{
//		std::cin >> CarWeights[i];
//	}
//
//	std::queue<int> InAndOut;
//	for (int i = 0; i < 2 * NumOfCar; i++)
//	{
//		int Record = 0;
//		std::cin >> Record;
//		InAndOut.push(Record);
//	}
//
//	std::vector<std::pair<int, int>> CarStopSpace(NumOfCar + 1);
//	std::queue<int> WaitQueue;
//
// 	int Revenue = 0;
//	while (InAndOut.size() > 0)
//	{
//		int CurRecord = InAndOut.front();
//		InAndOut.pop();
//
//		if (CurRecord > 0)
//		{
//			if (Spaces.size() == 0)
//			{
//				WaitQueue.push(CurRecord);
//			}
//			else
//			{
//				CarStopSpace[CurRecord] = Spaces.top();
//				Spaces.pop();
//			}
//		}
//		else
//		{
//			int CurCar = abs(CurRecord);
//			Spaces.push(CarStopSpace[CurCar]);
//
//			Revenue += CarStopSpace[CurCar].second * CarWeights[CurCar];
//
//			if (WaitQueue.size() > 0)
//			{
//				CarStopSpace[WaitQueue.front()] = Spaces.top();
//				Spaces.pop();
//				WaitQueue.pop();
//			}
//		}
//	}
//
//	std::cout << Revenue;
//
//	return 0;
//}