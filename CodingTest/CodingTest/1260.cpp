//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//#include <queue>
//#include <iterator>
//
//struct Node
//{
//	int Index = 0;
//	std::vector<int> LinkedIndexs;
//};
//
//int main()
//{
//	int NumOfNode = 0;
//	int NumOfLine = 0;
//	int StartIndex = 0;
//
//	std::cin >> NumOfNode >> NumOfLine >> StartIndex;
//
//	std::vector<Node> Nodes(NumOfNode);
//
//	//연결된 간선정보 입력
//	for (int i = 0; i < NumOfLine; i++)
//	{
//		int First = 0;
//		int Second = 0;
//
//		std::cin >> First >> Second;
//
//		Nodes[First - 1].LinkedIndexs.push_back(Second - 1);
//		Nodes[Second - 1].LinkedIndexs.push_back(First- 1);
//	}
//
//	//오름차순 정렬
//	for (int i = 0; i < NumOfNode; i++)
//	{
//		sort(Nodes[i].LinkedIndexs.begin(), Nodes[i].LinkedIndexs.end());
//	}
//
//	std::vector<int> DFSAnswer;
//	std::vector<int> BFSAnswer;
//
//	//DFS
//	{
//		std::vector<bool> isVisit(NumOfNode, false);
//		std::stack<Node> DFS;
//
//		Node StartNode = Nodes[StartIndex - 1];
//		DFS.push(StartNode);
//		
//		isVisit[StartIndex - 1] = true;
//		DFSAnswer.push_back(StartIndex);
//
//		while (DFS.size() > 0)
//		{
//			Node CurNode = DFS.top();
//
//			bool isAnyLink = false;
//
//			for (size_t i = 0; i < CurNode.LinkedIndexs.size(); i++)
//			{
//				int Index = CurNode.LinkedIndexs[i];
//
//				if (isVisit[Index] == false)
//				{
//					isAnyLink = true;
//					isVisit[Index] = true;
//
//					DFSAnswer.push_back(Index + 1);
//					
//					Node NewNode = Nodes[Index];
//					DFS.push(NewNode);
//					break;
//				}
//			}
//
//			if (isAnyLink == false)
//			{
//				DFS.pop();
//				continue;
//			}
//		}
//	}
//
//	//BFS
//	{
//		std::vector<bool> isVisit(NumOfNode, false);
//		std::queue<Node> BFS;
//
//		Node StartNode = Nodes[StartIndex - 1];
//		BFS.push(StartNode);
//
//		isVisit[StartIndex - 1] = true;
//		BFSAnswer.push_back(StartIndex);
//
//
//		while (BFS.size() > 0)
//		{
//			Node CurNode = BFS.front();
//			BFS.pop();
//
//			for (size_t i = 0; i < CurNode.LinkedIndexs.size(); i++)
//			{
//				int Index = CurNode.LinkedIndexs[i];
//
//				if (isVisit[Index] == false)
//				{
//					isVisit[Index] = true;
//					BFSAnswer.push_back(Index + 1);
//
//					Node NewNode = Nodes[Index];
//					BFS.push(NewNode);
//				}
//			}
//		}
//	}
//	
//	std::copy(DFSAnswer.begin(), DFSAnswer.end(), std::ostream_iterator<int>(std::cout, " "));
//	std::cout << "\n";
//	std::copy(BFSAnswer.begin(), BFSAnswer.end(), std::ostream_iterator<int>(std::cout, " "));
//
//	return 0;
//}