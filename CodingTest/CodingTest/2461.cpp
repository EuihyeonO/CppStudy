//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//	int NumGroup = 0;
//	int NumStudent = 0;
//	std::cin >> NumGroup >> NumStudent;
//
//	std::vector<std::vector<int>> Abilities(NumGroup, std::vector<int>(NumStudent));
//
//	for (int i = 0; i < NumGroup; i++)
//	{
//		for (int j = 0; j < NumStudent; j++)
//		{
//			std::cin >> Abilities[i][j];
//		}
//	}
//
//	auto comp = [](const std::pair<int, int>& _Left, const std::pair<int, int>& _Right)
//		{
//			return _Left.first > _Right.first;
//		};
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(comp)> MinHeap(comp);
//	int MaxNum = -999999999;
//
//	for (int i = 0; i < NumGroup; i++)
//	{
//		std::sort(Abilities[i].begin(), Abilities[i].end());
//		
//		MinHeap.push({ Abilities[i][0], i });
//		MaxNum = std::max(MaxNum, Abilities[i][0]);
//	}
//
//	std::vector<int> pos(NumGroup, 0);
//	int Answer = 999999999;
//
//	while (true)
//	{
//		std::pair<int, int> MinPair = MinHeap.top();
//		MinHeap.pop();
//
//		Answer = std::min(Answer, MaxNum - MinPair.first);
//
//		pos[MinPair.second]++;
//
//		if (pos[MinPair.second] == NumStudent)
//		{
//			break; 
//		}
//
//		MinHeap.push({ Abilities[MinPair.second][pos[MinPair.second]], MinPair.second });
//		MaxNum = std::max(MaxNum, Abilities[MinPair.second][pos[MinPair.second]]);
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}