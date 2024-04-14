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
//
//	bool operator<(const Edge& _Right)
//	{
//		return Weight < _Right.Weight;
//	}
//};
//
//int GetRootParent(std::vector<int>& _Parents, int _Index)
//{
//	if (_Parents[_Index] == _Index)
//	{
//		return _Index;
//	}
//
//	_Parents[_Index] = GetRootParent(_Parents, _Parents[_Index]);
//	return _Parents[_Index];
//}
//
//void SetParents(std::vector<int>& _Parents, int _Node1, int _Node2)
//{
//	int Node1Parent = GetRootParent(_Parents, _Parents[_Node1]);
//	int Node2Parent = GetRootParent(_Parents, _Parents[_Node2]);
//
//	if (_Node1 < _Node2)
//	{
//		_Parents[_Node2] = _Node1;
//	}
//	else
//	{
//		_Parents[_Node1] = _Node2;
//	}
//}
//
//bool isCycle(std::vector<int>& _Parents, int _Node1, int _Node2)
//{
//	int Node1Parent = GetRootParent(_Parents, _Parents[_Node1]);
//	int Node2Parent = GetRootParent(_Parents, _Parents[_Node2]);
//
//	return (Node1Parent == Node2Parent);
//}
//
//int main()
//{
//	Init();
//
//	int NumOfNode = 5;
//	int NumOfEdge = 6;
//
//	std::vector<int> NodeParent(NumOfNode + 1);
//	for (int i = 1; i <= NumOfNode; i++)
//	{
//		NodeParent[i] = i;
//	}
//
//	std::vector<Edge> Edges(NumOfEdge);
//
//	Edges[0] = { 1, 2, 3 };
//	Edges[1] = { 1, 3, 4 };
//	Edges[2] = { 2, 5, 5 };
//	Edges[3] = { 3, 5, 2 };
//	Edges[4] = { 3, 4, 1 };
//	Edges[5] = { 4, 5, 1 };
//
//	std::sort(Edges.begin(), Edges.end());
//
//	int WeightSum = 0;
//
//	for (int i = 0; i < 6; i++)
//	{
//		if (isCycle(NodeParent, Edges[i].Start, Edges[i].End) == false)
//		{
//			SetParents(NodeParent, Edges[i].Start, Edges[i].End);
//			WeightSum += Edges[i].Weight;
//		}
//	}
//
//	return 0;
//}