//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int MaxCost = 0;
//std::vector<int> MaxCosts;
//
//void DFS(std::vector<bool>& _isVisit, std::vector<std::vector<int>>& _Link, std::vector<std::vector<int>>& _Cost, int _CurNode, int _CurCost)
//{
//	_isVisit[_CurNode] = true;
//	
//	int Count = 0;
//
//	for (int i = 0; i < _Link[_CurNode].size(); i++)
//	{
//		int NextNode = _Link[_CurNode][i];
//
//		if (_isVisit[NextNode] == true)
//		{
//			continue;
//		}
//
//		DFS(_isVisit, _Link, _Cost, NextNode, _CurCost + _Cost[_CurNode][NextNode]);
//
//		if (_CurNode == 0)
//		{
//			MaxCosts.push_back(MaxCost);
//			MaxCost = 0;
//		}
//
//		Count++;
//	}
//
//	if (Count == 0)
//	{
//		MaxCost = std::max(MaxCost, _CurCost);
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumNode = 0;
//	std::cin >> NumNode;
//
//	std::vector<std::vector<int>> Link(NumNode);
//	std::vector<std::vector<int>> Costs(NumNode, std::vector<int>(NumNode));
//	for (int i = 0; i < NumNode; i++)
//	{
//		int CurNode = 0;
//		std::cin >> CurNode;
//
//		while (true)
//		{
//			int DestNode = 0;
//			std::cin >> DestNode;
//
//			if (DestNode == -1)
//			{
//				break;
//			}
//
//			int Cost = 0;
//			std::cin >> Cost;
//
//			Link[CurNode - 1].push_back(DestNode - 1);
//			Costs[CurNode - 1][DestNode - 1] = Cost;
//		}
//	}
//
//	std::vector<bool> isVisit(NumNode);
//	
//	DFS(isVisit, Link, Costs, 0, 0);
//
//	std::sort(MaxCosts.begin(), MaxCosts.end());
//
//	if (MaxCosts.size() == 1)
//	{
//		std::cout << MaxCosts[0];
//	}
//	else
//	{
//		std::cout << MaxCosts[MaxCosts.size() - 1] + MaxCosts[MaxCosts.size() - 2];
//	}
//
//	return 0;
//}