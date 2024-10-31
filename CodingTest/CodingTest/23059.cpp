//#include <iostream>
//#include <vector>
//#include <map>
//#include <unordered_map>
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
//	int NumRelation = 0;
//	std::cin >> NumRelation;
//
//	std::unordered_map<std::string, int> InDegree;
//	std::map<int, std::vector<std::string>> Order;
//
//	std::unordered_map<std::string, std::vector<std::string>> NextItems;
//
//	for (int i = 0; i < NumRelation; i++)
//	{
//		std::string Prev = "", Next = "";
//		std::cin >> Prev >> Next;
//
//		InDegree.insert({ Prev, 0 });
//		InDegree[Next]++;
//
//		NextItems[Prev].push_back(Next);
//	}
//
//	std::queue<std::pair<std::string, int>> Queue;
//	
//	for (auto Iter : InDegree)
//	{
//		if (Iter.second == 0)
//		{
//			Queue.push({ Iter.first, 0 });
//			Order[0].push_back(Iter.first);
//		}
//	}
//
//	if (Queue.size() == 0)
//	{
//		std::cout << -1;
//		return 0;
//	}
//
//	int EraseCount = 0;
//
//	while (Queue.size() > 0)
//	{
//		std::string ItemName = Queue.front().first;
//		int ItemOrder = Queue.front().second;
//
//		Queue.pop();
//
//		EraseCount++;
//
//		for (const std::string& NextItem : NextItems[ItemName])
//		{
//			int NextInDegree = --InDegree[NextItem];
//
//			if (NextInDegree == 0)
//			{
//				Queue.push({ NextItem, ItemOrder + 1 });
//				Order[ItemOrder + 1].push_back(NextItem);
//			}
//		}
//	}
//
//	if (EraseCount != InDegree.size())
//	{
//		std::cout << -1;
//		return 0;
//	}
//
//	for (auto Pair : Order)
//	{
//		std::sort(Pair.second.begin(), Pair.second.end());
//
//		for (auto Item : Pair.second)
//		{
//			std::cout << Item << "\n";
//		}
//	}
//
//	return 0;
//}