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
//struct Node
//{
//	int Cost = 0;
//	int Left = 0;
//	int Right = 0;
//
//	bool operator<(Node& _Node)
//	{
//		return this->Cost < _Node.Cost;
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
//	_Parents[_Index] = GetRootParent(_Parents, _Parents[_Index]);;
//	return _Parents[_Index];
//}
//
//bool isSameRootParent(std::vector<int>& _Parents, int _Left, int _Right)
//{
//	int LeftParent = GetRootParent(_Parents, _Left);
//	int RightParent = GetRootParent(_Parents, _Right);
//
//	return (LeftParent == RightParent);
//}
//
//int main()
//{
//	Init();
//
//	int NumOfPlanet = 0;
//	std::cin >> NumOfPlanet;
//
//	std::vector<Node> Nodes;
//
//	std::vector<std::vector<int>> Costs(NumOfPlanet, std::vector<int>(NumOfPlanet, 0));
//	for (int i = 0; i < NumOfPlanet; i++)
//	{
//		for (int j = 0; j < NumOfPlanet; j++)
//		{
//			std::cin >> Costs[i][j];
//
//			if (i < j)
//			{
//				Node NewNode = { Costs[i][j], i, j };
//				Nodes.push_back(NewNode);
//			}
//		}
//	}
//
//	std::vector<int> Parents(NumOfPlanet);
//	for (int i = 0; i < NumOfPlanet; i++)
//	{
//		Parents[i] = i;
//	}
//
//	std::sort(Nodes.begin(), Nodes.end());
//
//	long long  Answer = 0;
//	for (int i = 0; i < Nodes.size(); i++)
//	{
//		if (isSameRootParent(Parents, Nodes[i].Left, Nodes[i].Right) == false)
//		{
//			Answer += Nodes[i].Cost;
//
//			int LeftParent = GetRootParent(Parents, Nodes[i].Left);
//			int RightParent = GetRootParent(Parents, Nodes[i].Right);
//			Parents[RightParent] = LeftParent;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}