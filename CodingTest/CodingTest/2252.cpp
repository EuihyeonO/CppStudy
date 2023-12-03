//#include <iostream>
//#include <vector>
//#include <set>
//#include <queue>
//
//int main()
//{
//	int NumOfStudent = 0;
//	int CompareCount = 0;
//
//	std::cin >> NumOfStudent >> CompareCount;
//
//	int ArrSize = NumOfStudent + 1;
//	std::vector<std::vector<int>> Backs(ArrSize);
//	std::vector<int> LinkCount(ArrSize);
//
//	for (int i = 0; i < CompareCount; i++)
//	{
//		int First = 0;
//		int Second = 0;
//
//		std::cin >> First >> Second;
//
//		Backs[First].push_back(Second);
//		LinkCount[Second]++;
//	}
//
//	std::queue<int> Queue;
//	std::vector<int> SortedStd;
//
//	for (int i = 1; i <= NumOfStudent; i++)
//	{
//		if (LinkCount[i] == 0)
//		{
//			Queue.push(i);
//			SortedStd.push_back(i);
//		}
//	}
//
//	while (Queue.size() > 0)
//	{
//		int Index = Queue.front();
//		Queue.pop();
//		
//		for (int i = 0; i < Backs[Index].size(); i++)
//		{
//			int BackStdNumber = Backs[Index][i];
//			LinkCount[BackStdNumber]--;
//
//			if (LinkCount[BackStdNumber] <= 0)
//			{
//				Queue.push(BackStdNumber);
//				SortedStd.push_back(BackStdNumber);
//			}
//		}
//	}
//
//	for (int i = 0; i < NumOfStudent; i++)
//	{
//		std::cout << SortedStd[i] << "\n";
//	}
//
//	return 0;
//}