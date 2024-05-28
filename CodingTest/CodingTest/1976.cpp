//#include <iostream>
//#include <vector>
//#include <climits>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//std::vector<bool> isVisit;
//
//bool BFS(int _Start, int _End, const std::vector<std::vector<int>>& _Link)
//{
//	std::fill(isVisit.begin(), isVisit.end(), false);
//
//	std::queue<int> Queue;
//	Queue.push(_Start);
//
//	while (Queue.size() > 0)
//	{
//		int CurIndex = Queue.front();
//
//		if (CurIndex == _End)
//		{
//			break;
//		}
//
//		Queue.pop();
//
//		for (int i = 0; i < _Link[CurIndex].size(); i++)
//		{
//			int NextIndex = _Link[CurIndex][i];
//
//			if (isVisit[NextIndex] == true)
//			{
//				continue;
//			}
//
//			isVisit[NextIndex] = true;
//			Queue.push(NextIndex);
//		}
//	}
//
//	return Queue.size() > 0;
//}
//
//int main()
//{
//	Init();
//
//	int NumCity = 0;
//	int NumPlan = 0;
//	std::cin >> NumCity >> NumPlan;
//
//	std::vector<std::vector<int>> Link(NumCity);
//	isVisit.resize(NumCity);
//
//	for (int i = 0; i < NumCity; i++)
//	{
//		for (int j = 0; j < NumCity; j++)
//		{
//			int Index = 0;
//			std::cin >> Index;
//
//			if (Index == 1)
//			{
//				Link[i].push_back(j);
//			}
//		}
//	}
//
//	std::vector<int> Plan(NumPlan);
//	for (int i = 0; i < NumPlan; i++)
//	{
//		std::cin >> Plan[i];
//		Plan[i]--;
//	}
//
//	bool ableTravel = true;
//
//	for (int i = 1; i < NumPlan; i++)
//	{
//		if (BFS(Plan[i - 1], Plan[i], Link) == false)
//		{
//			ableTravel = false;
//			break;
//		}
//	}
//
//	if (ableTravel == true)
//	{
//		std::cout << "YES";
//	}
//	else
//	{
//		std::cout << "NO";
//	}
//
//	return 0;
//}