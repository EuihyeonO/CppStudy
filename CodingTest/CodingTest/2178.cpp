//#include <iostream>
//#include <vector>
//#include <queue>
//#include <set>
//
//struct Node
//{
//	int X = 0;
//	int Y = 0;
//	int Count = 0;
//};
//
//int main()
//{
//	int Horizon = 0;
//	int Vertical = 0;
//
//	std::cin >> Vertical;
//	std::cin >> Horizon;
//
//	std::vector<std::vector<int>> Maze;
//	Maze.resize(Vertical);
//
//	for (int i = 0; i < Vertical; i++)
//	{
//		Maze[i].resize(Horizon);
//	}
//
//	//입력
//	for (int i = 0; i < Vertical; i++)
//	{
//		std::string Num;
//
//		std::cin >> Num;
//
//		for (int j = 0; j < Horizon; j++)
//		{
//			Maze[i][j] = Num[j] - '0';
//		}
//	}
//
//	//방문검사 벡터
//	std::vector<std::vector<bool>> isVisit;
//	isVisit.resize(Vertical);
//
//	for (int i = 0; i < Vertical; i++)
//	{
//		isVisit[i].resize(Horizon, false);
//	}
//
//	//이동거리의 집합
//	std::set<int> Counts;
//
//	//너비우선탐색용 큐
//	std::queue<Node> BFS;
//	Node NewNode;
//	NewNode.X = 0;
//	NewNode.Y = 0;
//	NewNode.Count = 1;
//
//	isVisit[0][0] = true;
//
//	BFS.push(NewNode);
//
//	//너비우선탐색 실행
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		if (CurNode.X == Horizon - 1 && CurNode.Y == Vertical - 1)
//		{
//			Counts.insert(CurNode.Count);
//			continue;
//		}
//
//		//우측
//		if (CurNode.X < Horizon - 1 && Maze[CurNode.Y][CurNode.X + 1] == 1 && isVisit[CurNode.Y][CurNode.X + 1] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X + 1;
//			NewNode.Y = CurNode.Y;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y][CurNode.X + 1] = true;
//			BFS.push(NewNode);
//		}
//
//		//좌측
//		if (CurNode.X >= 1 && Maze[CurNode.Y][CurNode.X - 1] == 1 && isVisit[CurNode.Y][CurNode.X - 1] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X - 1;
//			NewNode.Y = CurNode.Y;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y][CurNode.X - 1] = true;
//			BFS.push(NewNode);
//		}
//
//		//위쪽
//		if (CurNode.Y >= 1 && Maze[CurNode.Y - 1][CurNode.X] == 1 && isVisit[CurNode.Y - 1][CurNode.X] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X;
//			NewNode.Y = CurNode.Y - 1;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y - 1][CurNode.X] = true;
//			BFS.push(NewNode);
//		}
//
//		//아래쪽
//		if (CurNode.Y < Vertical - 1 && Maze[CurNode.Y + 1][CurNode.X] == 1 && isVisit[CurNode.Y + 1][CurNode.X] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X;
//			NewNode.Y = CurNode.Y + 1;
//			NewNode.Count = CurNode.Count + 1;
//
//			isVisit[CurNode.Y + 1][CurNode.X] = true;
//			BFS.push(NewNode);
//		}
//	}
//
//	if(Counts.size() > 0)
//	{
//		std::cout << *Counts.begin() << std::endl;
//	}
//
//	return 0; 
//}