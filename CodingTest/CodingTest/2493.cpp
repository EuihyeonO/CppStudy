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
//	int NumOfTower = 0;
//	std::cin >> NumOfTower;
//
//	std::vector<int> TowerArray(NumOfTower, 0);
//
//	for (int i = 0; i < NumOfTower; i++)
//	{
//		int CurTower = 0;
//		std::cin >> CurTower;
//
//		TowerArray[i] = CurTower;
//	}
//
//	std::stack<std::pair<int, int>> TowerStack;
//	for (int i = 0; i < NumOfTower; i++)
//	{
//		if (TowerStack.size() == 0)
//		{
//			TowerStack.push({ TowerArray[i], i });
//			TowerArray[i] = 0;
//
//			continue;
//		}
//
//		while (TowerStack.size() > 0)
//		{
//			if (TowerStack.top().first >= TowerArray[i])
//			{
//				int CopyTower = TowerArray[i];
//				TowerArray[i] = TowerStack.top().second + 1;
//
//				TowerStack.push({ CopyTower, i });
//				break;
//			}
//			else
//			{
//				TowerStack.pop();
//			}
//		}
//
//		if (TowerStack.size() == 0)
//		{
//			TowerStack.push({ TowerArray[i], i });
//			TowerArray[i] = 0;
//		}
//	}
//
//	for (int i = 0; i < TowerArray.size(); i++)
//	{
//		std::cout << TowerArray[i] << "\n";
//	}
//
//	return 0;
//}