//#include <iostream>
//#include <vector>
//#include <stack>
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
//	int NumOfTower = 0;
//	std::cin >> NumOfTower;
//
//	std::vector<int> TowerArray(NumOfTower, 0);
//	std::vector<int> Answer(NumOfTower, 0);
//
//	for (int i = 0; i < NumOfTower; i++)
//	{
//		std::cin >> TowerArray[i];
//	}
//
//	std::stack<std::pair<int, int>> MonotonicStack;
//
//	for (int i = 0; i < TowerArray.size(); i++)
//	{
//		int CurNum = TowerArray[i];
//
//		while (MonotonicStack.size() > 0)
//		{
//			if (MonotonicStack.top().first > CurNum)
//			{
//				break;
//			}
//
//			MonotonicStack.pop();
//		}
//
//		if (MonotonicStack.size() == 0)
//		{
//			Answer[i] = 0;
//		}
//		else
//		{
//			Answer[i] = MonotonicStack.top().second + 1;
//		}
//
//		MonotonicStack.push({ CurNum, i});
//	}
//
//	for (int i = 0; i < NumOfTower; i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}
