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
//struct Edge
//{
//	int Start = 0;
//	int End = 0;
//	int Weight = 0;
//};
//
//bool compare(const Edge& _Left, const Edge& _Right)
//{
//	return _Left.Weight < _Right.Weight;
//}
//
//int GetRootParent(std::vector<int>& _Parent, int _Index)
//{
//	if (_Parent[_Index] == _Index)
//	{
//		return _Index;
//	}
//
//	_Parent[_Index] = GetRootParent(_Parent, _Parent[_Index]);
//	return _Parent[_Index];
//}
//
//bool isSameRoot(std::vector<int>& _Parents, int _Left, int _Right)
//{
//	return GetRootParent(_Parents, _Left) == GetRootParent(_Parents, _Right);
//}
//
//void SetParent(std::vector<int>& _Parents, int _LeftIndex, int _RightIndex)
//{
//	int LeftRoot = GetRootParent(_Parents, _LeftIndex);
//	int RightRoot = GetRootParent(_Parents, _RightIndex);
//
//	if (_LeftIndex < _RightIndex)
//	{
//		_Parents[LeftRoot] = RightRoot;
//	}
//	else
//	{
//		_Parents[RightRoot] = LeftRoot;
//
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumNode = 0;
//	int NumEdge = 0;
//	std::cin >> NumNode >> NumEdge;
//
//	std::vector<Edge> Edges(NumEdge);
//	for (int i = 0; i < NumEdge; i++)
//	{
//		int Start = 0;
//		int End = 0;
//		int Weight = 0;
//
//		std::cin >> Start >> End >> Weight;
//
//		Edges[i] = { Start, End, Weight };
//	}
//
//	std::sort(Edges.begin(), Edges.end(), compare);
//	
//	std::vector<int> Parents(NumNode + 1);
//	for (int i = 1; i <= NumNode; i++)
//	{
//		Parents[i] = i;
//	}
//
//	int Weight = 0;
//
//	for (int i = 0; i < NumEdge; i++)
//	{
//		if (isSameRoot(Parents, Edges[i].Start, Edges[i].End) == false)
//		{
//			SetParent(Parents, Edges[i].Start, Edges[i].End);
//			Weight += Edges[i].Weight;
//		}
//	}
//
//	std::cout << Weight;
//
//	return 0;
//}