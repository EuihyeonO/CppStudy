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
//int GetParent(std::vector<int>& _Parent, int _Index)
//{
//	if (_Parent[_Index] != _Index)
//	{
//		_Parent[_Index] = GetParent(_Parent, _Parent[_Index]);
//	}
//
//	return _Parent[_Index];
//}
//
//void Union(std::vector<int>& _Parent, int _Left, int _Right)
//{
//	int LeftParent = GetParent(_Parent, _Left);
//	int RightParent = GetParent(_Parent, _Right);
//
//	if (LeftParent < RightParent)
//	{
//		_Parent[RightParent] = LeftParent;
//	}
//	else
//	{
//		_Parent[LeftParent] = RightParent;
//	}
//}
//
//bool IsCycle(std::vector<int>& _Parent, int _Point1, int _Point2)
//{
//	return GetParent(_Parent, _Point1) == GetParent(_Parent, _Point2);
//}
//
//int main()
//{
//	Init();
//
//	int NumCity = 0, NumEdge = 0, AddCost = 0;
//	std::cin >> NumCity >> NumEdge >> AddCost;
//
//	//ºñ¿ë, X, Y
//	std::vector<std::tuple<int, int, int>> Edge(NumEdge);
//	for (int i = 0; i < NumEdge; i++)
//	{
//		std::cin >> std::get<1>(Edge[i]) >> std::get<2>(Edge[i]) >> std::get<0>(Edge[i]);
//		
//		std::get<1>(Edge[i])--;
//		std::get<2>(Edge[i])--;
//	}
//
//	std::sort(Edge.begin(), Edge.end());
//
//	int SumCost = 0;
//	int EdgeCount = 0;
//	int AddCount = 0;
//
//	std::vector<int> Parent(NumCity);
//	for (int i = 0; i < NumCity; i++)
//	{
//		Parent[i] = i;
//	}
//	
//	for (int i = 0; i < NumEdge; i++)
//	{
//		if (IsCycle(Parent, std::get<1>(Edge[i]), std::get<2>(Edge[i])) == false)
//		{
//			Union(Parent, std::get<1>(Edge[i]), std::get<2>(Edge[i]));
//			SumCost += std::get<0>(Edge[i]);
//			
//			EdgeCount += AddCount;
//			AddCount++;
//		}
//	}
//
//	SumCost += AddCost * EdgeCount;
//
//	std::cout << SumCost;
//
//	return 0;
//}