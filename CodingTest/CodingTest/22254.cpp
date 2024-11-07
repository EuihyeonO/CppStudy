//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int GetCostSum(std::vector<int>& _TimeCost, int _Mid)
//{
//	std::priority_queue<int, std::vector<int>, std::greater<>> TimeCostPerProcess;
//
//	int MaxTime = 0;
//
//	for (int i = 0; i < _TimeCost.size(); i++)
//	{
//		if (TimeCostPerProcess.size() < _Mid)
//		{
//			TimeCostPerProcess.push(_TimeCost[i]);
//
//			MaxTime = std::max(MaxTime, _TimeCost[i]);
//		}
//		else
//		{
//			int MinTime = TimeCostPerProcess.top();
//			
//			TimeCostPerProcess.pop();
//			TimeCostPerProcess.push(MinTime + _TimeCost[i]);
//			
//			MaxTime = std::max(MaxTime, MinTime + _TimeCost[i]);
//		}
//	}
//
//	return MaxTime;
//}
//
//
//int main()
//{
//	Init();
//
//	int NumGift = 0, RemainingTime = 0;
//	std::cin >> NumGift >> RemainingTime;
//
//	std::vector<int> TimeCost(NumGift);
//	for (int i = 0; i < NumGift; i++)
//	{
//		std::cin >> TimeCost[i];
//	}
//
//	int Left = 1;
//	int Right = 100000;
//	
//	int Answer = Right;
//
//	while (Left <= Right)
//	{
//		int Mid = (Left + Right) / 2;
//		int CurTime = GetCostSum(TimeCost, Mid);
//		
//		if (CurTime > RemainingTime)
//		{
//			Left = Mid + 1;
//		}
//		else
//		{
//			Right = Mid - 1;
//			Answer = std::min(Answer, Mid);
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}