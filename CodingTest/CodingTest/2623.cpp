//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <set>
//#include <iterator>
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
//	int NumSize = 0;
//	int CaseSize = 0;
//	std::cin >> NumSize >> CaseSize;
//
//	std::vector<std::set<int>> Graph(NumSize + 1);
//
//	for (int i = 0; i < CaseSize; i++)
//	{
//		int InputSize = 0;
//		std::cin >> InputSize;
//
//		std::vector<int> Inputs(InputSize);
//		for (int j = 0; j < InputSize; j++)
//		{
//			std::cin >> Inputs[j];
//		}
//
//		for (int j = 1; j < InputSize; j++)
//		{
//			Graph[Inputs[j]].insert(Inputs[j - 1]);
//		}
//	}
//
//	std::queue<int> TopologySort;
//	for (int i = 1; i < Graph.size(); i++)
//	{
//		if (Graph[i].size() == 0)
//		{
//			TopologySort.push(i);
//		}
//	}
//
//	std::vector<int> InDegreeCount(NumSize + 1);
//	std::vector<int> Answer;
//	Answer.reserve(NumSize);
//
//	while (TopologySort.size() > 0)
//	{
//		int CurNum = TopologySort.front();
//		Answer.push_back(CurNum);
//
//		TopologySort.pop();
//
//		for (int i = 1; i < Graph.size(); i++)
//		{
//			if (i == CurNum)
//			{
//				continue;
//			}
//
//			if (Graph[i].find(CurNum) != Graph[i].end())
//			{
//				InDegreeCount[i]++;
//
//				if (InDegreeCount[i] == Graph[i].size())
//				{
//					TopologySort.push(i);
//				}
//			}
//		}
//	}
//
//	if (Answer.size() == NumSize)
//	{
//		std::copy(Answer.begin(), Answer.end(), std::ostream_iterator<int>(std::cout, "\n"));
//	}
//	else
//	{
//		std::cout << '0';
//	}
//
//	return 0;
//}