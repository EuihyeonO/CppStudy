//#include <iostream>
//#include <vector>
//#include <queue>
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
//	int NumOfHW = 0;
//	std::cin >> NumOfHW;
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::less<std::pair<int, int>>> Queue;
//
//	int MaxDeadLine = 0;
//
//	for (int i = 0; i < NumOfHW; i++)
//	{
//		int DeadLine = 0;
//		int Grade = 0;
//		std::cin >> DeadLine >> Grade;
//
//		Queue.push({ Grade, DeadLine });
//
//		MaxDeadLine = std::max(DeadLine, MaxDeadLine);
//	}
//
//	std::vector<int> HomeWorks(MaxDeadLine + 1,  0);
//
//	while (Queue.size() > 0)
//	{
//		std::pair<int, int> CurHomeWork = Queue.top();
//		Queue.pop();
//
//		int CurIndex = CurHomeWork.second;
//		
//		while (CurIndex > 0)
//		{
//			if (HomeWorks[CurIndex] == 0)
//			{
//				HomeWorks[CurIndex] = CurHomeWork.first;
//				break;
//			}
//
//			CurIndex--;
//		}
//	}
//
//	int GradeSum = 0;
//
//	for (int i = 0; i < HomeWorks.size(); i++)
//	{
//		GradeSum += HomeWorks[i];
//	}
//
//	std::cout << GradeSum;
//
//	return 0;
//}