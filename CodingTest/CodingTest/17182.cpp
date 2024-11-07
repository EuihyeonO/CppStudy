//#include <iostream>
//#include <climits>
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
//int DFS(const std::vector<std::vector<int>>& _Cost, std::vector<bool>& _IsVisit, int _CurIndex, int _Depth, int _CostSum)
//{
//	static int Answer = INT_MAX;
//
//	if (_Depth == _Cost.size())
//	{
//		Answer = std::min(Answer, _CostSum);
//		return Answer;
//	}
//
//	_IsVisit[_CurIndex] = true;
//
//	for (int i = 0; i < _Cost.size(); i++)
//	{
//		if (i == _CurIndex)
//		{
//			continue;
//		}
//
//		if (_IsVisit[i] == true)
//		{
//			continue;
//		}
//
//		DFS(_Cost, _IsVisit, i, _Depth + 1, _CostSum + _Cost[_CurIndex][i]);
//	}
//
//	_IsVisit[_CurIndex] = false;
//	return Answer;
//}
//
//int main()
//{
//	Init();
//
//	int NumPlanet = 0, StartPlanet = 0;
//	std::cin >> NumPlanet >> StartPlanet;
//
//	std::vector<std::vector<int>> Costs(NumPlanet, std::vector<int>(NumPlanet));
//	for (int i = 0; i < NumPlanet; i++)
//	{
//		for (int j = 0; j < NumPlanet; j++)
//		{
//			std::cin >> Costs[i][j];
//		}
//	}
//
//	for (int i = 0; i < NumPlanet; i++)
//	{
//		for (int j = 0; j < NumPlanet; j++)
//		{
//			for (int k = 0; k < NumPlanet; k++)
//			{
//				Costs[j][k] = std::min(Costs[j][k], Costs[j][i] + Costs[i][k]);
//			}
//		}
//	}
//	std::vector<bool> IsVisit(NumPlanet, false);
//	std::cout << DFS(Costs, IsVisit, StartPlanet, 1, 0);
//
//	return 0;
//}