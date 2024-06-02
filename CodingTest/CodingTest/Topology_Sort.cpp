//#include <vector>
//#include <algorithm>
//#include <queue>
//
//int main()
//{
//	//1 2
//	//2 3
//	//3 4
//    //5 6
//    //7 6
//	//8 6 
//	//9 6
//	//9 10
//
//	int NumNode = 10;
//	std::vector<std::vector<int>> Link(10 + 1);
//	std::vector<int> InDegree(10 + 1);
//	Link[1].push_back(2);
//	Link[2].push_back(3);
//	Link[3].push_back(4);
//	Link[5].push_back(6);
//	Link[7].push_back(6);
//	Link[8].push_back(6);
//	Link[9].push_back(6);
//	Link[9].push_back(10);
//
//	InDegree[2] = 1;
//	InDegree[3] = 1;
//	InDegree[4] = 1;
//	InDegree[6] = 4;
//	InDegree[10] = 1;
//
//	std::queue<int> TopologySort;
//	std::vector<int> Sorted;
//
//	for (int i = 1; i < InDegree.size(); i++)
//	{
//		if (InDegree[i] == 0)
//		{
//			TopologySort.push(i);
//			Sorted.push_back(i);
//		}
//	} 
//
//
//	while (TopologySort.size() > 0)
//	{
//		int CurNode = TopologySort.front();
//		TopologySort.pop();
//
//		for (int i = 0; i < Link[CurNode].size(); i++)
//		{
//			int LinkedNode = Link[CurNode][i];
//			InDegree[LinkedNode]--;
//
//			if (InDegree[LinkedNode] <= 0)
//			{
//				TopologySort.push(LinkedNode);
//				Sorted.push_back(LinkedNode);
//			}
//		}
//	}
//
//	return 0;
//}