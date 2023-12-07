//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//
//struct Node
//{
//	int Index = 0;
//	std::vector<int> LinkedNode;
//};
//
//int main()
//{
//	int NumOfNode = 0;
//	int NumOfLine = 0;
//	int StartNodeIndex = 0;
//
//	std::cin >> NumOfNode >> NumOfLine >> StartNodeIndex;
//
//	std::vector<Node> Nodes(NumOfNode);
//	std::vector<bool> isVisit(NumOfNode);
//
//	for (int i = 0; i < NumOfLine; i++)
//	{
//		int First = 0;
//		int Second = 0;
//
//		std::cin >> First >> Second;
//		First--;
//		Second--;
//
//		Nodes[First].LinkedNode.push_back(Second);
//		Nodes[Second].LinkedNode.push_back(First);
//	}
//
//	for (int i = 0; i < NumOfNode; i++)
//	{
//		sort(Nodes[i].LinkedNode.begin(), Nodes[i].LinkedNode.end());
//	}
//
//	std::queue<Node> BFS;
//	Node StartNode = Nodes[StartNodeIndex - 1];
//	BFS.push(StartNode);
//
//	isVisit[StartNodeIndex - 1] = true;
//
//	std::vector<int> Answer(NumOfNode, 0);
//	Answer[StartNodeIndex - 1] = 1;
//
//	int DestCount = 1; 
//
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		for (int i = 0; i < CurNode.LinkedNode.size(); i++)
//		{
//			int Index = CurNode.LinkedNode[i];
//
//			if (isVisit[Index] == false)
//			{
//				isVisit[Index] = true;
//				Node NewNode = Nodes[Index];
//				BFS.push(NewNode);
//
//				Answer[Index] = ++DestCount;
//			}
//		}
//	}
//
//	std::copy(Answer.begin(), Answer.end(), std::ostream_iterator<int>(std::cout, "\n"));
//
//	return 0;
//}