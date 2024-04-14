//#include <iostream>
//#include <vector>
//#include <climits>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//#define NUMMAX LONG_MAX / 2
//
//struct Edge
//{
//	int Start = 0;
//	int End = 0;
//	int Cost = 0;
//};
//
//std::vector<long long> Costs;
//std::vector<Edge> Edges;
//
//int NumOfCity = 0;
//int NumOfEdge = 0;
//
//void Bellman_Ford()
//{
//	for(int k = 0; k < NumOfCity; k++)
//	{
//		for (int i = 0; i < NumOfEdge; i++)
//		{
//			if (Costs[Edges[i].Start - 1] == NUMMAX)
//			{
//				continue;
//			}
//
//			if (Costs[Edges[i].End - 1] > Costs[Edges[i].Start - 1] + Edges[i].Cost)
//			{
//				Costs[Edges[i].End - 1] = Costs[Edges[i].Start - 1] + Edges[i].Cost;
//			}
//		}
//	}
//}
//
//bool isCycle()
//{
//	bool isCycle = false;
//
//	for (int i = 0; i < NumOfEdge; i++)
//	{
//		if (Costs[Edges[i].Start - 1] == NUMMAX)
//		{
//			continue;
//		}
//
//		if (Costs[Edges[i].End - 1] > Costs[Edges[i].Start - 1] + Edges[i].Cost)
//		{
//			isCycle = true;
//			break;
//		}
//	}
//
//	return isCycle;
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> NumOfCity >> NumOfEdge;
//
//	Costs.resize(NumOfCity, NUMMAX);
//	Edges.resize(NumOfEdge);
//
//	for (int i = 0; i < NumOfEdge; i++)
//	{
//		std::cin >> Edges[i].Start >> Edges[i].End >> Edges[i].Cost;
//	}
//
//	Costs[0] = 0;
//
//	Bellman_Ford();
//
//	if (isCycle() == true)
//	{
//		std::cout << -1;
//		return 0;
//	}
//
//	for (int i = 1; i < NumOfCity; i++)
//	{
//		if (Costs[i] == NUMMAX)
//		{
//			Costs[i] = -1;
//		}
//
//		std::cout << Costs[i] << "\n";
//	}
//
//	return 0;
//}