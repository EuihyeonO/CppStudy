//#include <iostream>
//#include <vector>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int NumVertex = 0;
//int StartIndex = 0;
//
//std::vector<bool> isVisit;
//std::vector<bool> isCycle;
//std::vector<std::vector<int>> Link;
//
//void MakeCycle(std::vector<int>& _PrevVertex, int _StartIndex)
//{
//	isCycle[_StartIndex] = true;
//	StartIndex = _StartIndex;
//
//	int CurIndex = _PrevVertex[_StartIndex];
//
//	while (CurIndex != _StartIndex)
//	{
//		isCycle[CurIndex] = true;
//		CurIndex = _PrevVertex[CurIndex];
//	}
//}
//
//void FindCycle(int _Vertex)
//{
//	static bool isFind = false;
//	static std::vector<int> PrevVertex(NumVertex);
//
//	isVisit[_Vertex] = true;
//
//	for (int i = 0; i < Link[_Vertex].size(); i++)
//	{
//		if (isFind == true)
//		{
//			return;
//		}
//
//		int NextVertex = Link[_Vertex][i];
//
//		if (isVisit[NextVertex] == true)
//		{
//			if (PrevVertex[_Vertex] != NextVertex)
//			{
//				PrevVertex[NextVertex] = _Vertex;
//				isFind = true;
//
//				MakeCycle(PrevVertex, _Vertex);
//
//				return;
//			}
//
//			continue;
//		}
//
//		PrevVertex[NextVertex] = _Vertex;
//		FindCycle(NextVertex);
//	}
//
//	isVisit[_Vertex] = false;
//}
//
//int main()
//{
//	Init();
//	
//	std::cin >> NumVertex;
//
//	isVisit.resize(NumVertex);
//	isCycle.resize(NumVertex);
//	Link.resize(NumVertex);
//
//	for (int i = 0; i < NumVertex; i++)
//	{
//		int Start = 0, End = 0;
//		std::cin >> Start >> End;
//
//		Link[Start - 1].push_back(End - 1);
//		Link[End - 1].push_back(Start - 1);
//	}
//
//	FindCycle(0);
//
//	std::vector<int> MinDistToCycle(NumVertex);
//	std::fill(isVisit.begin(), isVisit.end(), false);
//
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push({ StartIndex, 0 });
//	isVisit[StartIndex] = true;
//
//	while (BFS.size() > 0)
//	{
//		auto [CurIndex, Dist] = BFS.front();
//		BFS.pop();
//		
//		for (int i = 0; i < Link[CurIndex].size(); i++)
//		{
//			int NextNode = Link[CurIndex][i];
//
//			if (isVisit[NextNode] == true)
//			{
//				continue;
//			}
//
//			int NextDist = Dist;
//			isVisit[NextNode] = true;
//			
//			if (isCycle[NextNode] == false)
//			{
//				NextDist++;
//				MinDistToCycle[NextNode] = NextDist;
//			}
//
//			BFS.push({ NextNode, NextDist });
//		}
//	}
//
//	for (int Answer : MinDistToCycle)
//	{
//		std::cout << Answer << " ";
//	}
//
//	return 0;
//}