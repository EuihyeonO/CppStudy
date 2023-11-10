//#include <vector>
//#include <iostream>
//#include <queue>
//#include <set>
//#include <algorithm>
//
//struct Node
//{
//	int X;
//	int Y;
//};
//
//int BFS(std::vector<std::vector<int>>& _Paper, std::vector<std::vector<bool>>& _isTest, int _IndexX, int _IndexY)
//{
//	int MaxY = _Paper.size();
//	int MaxX = _Paper[0].size();
//
//	std::queue<Node> BFSQueue;
//	
//	Node NewNode;
//	NewNode.X = _IndexX;
//	NewNode.Y = _IndexY;
//	BFSQueue.push(NewNode);
//
//	_isTest[_IndexY][_IndexX] = true;
//
//	int Area = 1;
//
//	while (BFSQueue.size() > 0)
//	{
//		Node CurNode = BFSQueue.front();
//		BFSQueue.pop();
//
//		//우측
//		if (CurNode.X < MaxX - 1 && _Paper[CurNode.Y][CurNode.X + 1] == 0 && _isTest[CurNode.Y][CurNode.X + 1] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X + 1;
//			NewNode.Y = CurNode.Y;
//
//			BFSQueue.push(NewNode);
//
//			_isTest[CurNode.Y][CurNode.X + 1] = true;
//			Area++;
//		}
//
//		//좌측
//		if (CurNode.X >= 1 && _Paper[CurNode.Y][CurNode.X - 1] == 0 && _isTest[CurNode.Y][CurNode.X - 1] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X - 1;
//			NewNode.Y = CurNode.Y;
//
//			BFSQueue.push(NewNode);
//
//			_isTest[CurNode.Y][CurNode.X - 1] = true;
//			Area++;
//		}
//
//		//아래
//		if (CurNode.Y < MaxY - 1 && _Paper[CurNode.Y + 1][CurNode.X ] == 0 && _isTest[CurNode.Y + 1][CurNode.X] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X;
//			NewNode.Y = CurNode.Y + 1;
//
//			BFSQueue.push(NewNode);
//
//			_isTest[CurNode.Y + 1][CurNode.X] = true;
//			Area++;
//		}
//
//		//위
//		if (CurNode.Y >= 1 && _Paper[CurNode.Y - 1][CurNode.X] == 0 && _isTest[CurNode.Y - 1][CurNode.X] == false)
//		{
//			Node NewNode;
//			NewNode.X = CurNode.X;
//			NewNode.Y = CurNode.Y - 1;
//
//			BFSQueue.push(NewNode);
//
//			_isTest[CurNode.Y - 1][CurNode.X] = true;
//			Area++;
//		}
//	}
//	
//	return Area;
//}
//
//int main()
//{
//	int MaxX = 0;
//	int MaxY = 0;
//	int NumOfBox = 0;
//
//	std::cin >> MaxY;
//	std::cin >> MaxX;
//	std::cin >> NumOfBox;
//
//	std::vector<std::vector<int>> BoxCoords;
//	BoxCoords.resize(NumOfBox);
//
//	for (int i = 0; i < NumOfBox; i++)
//	{
//		BoxCoords[i].resize(4);
//	}
//
//	for (int i = 0; i < NumOfBox; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			std::cin >> BoxCoords[i][j];
//		}
//	}
//	//여기까지 입력
//
//	
//	std::vector<std::vector<int>> Paper;
//	Paper.resize(MaxY);
//
//	for (int i = 0; i < MaxY; i++)
//	{
//		Paper[i].resize(MaxX);
//	}
//
//	//상자가 있는 영역을 1로 표시
//	for (int i = 0; i < NumOfBox; i++)
//	{
//		int StartX = BoxCoords[i][0];
//		int StartY = BoxCoords[i][1];
//		int EndX = BoxCoords[i][2];
//		int EndY = BoxCoords[i][3];
//
//		for (int i = StartY; i < EndY; i++)
//		{
//			for (int j = StartX; j < EndX; j++)
//			{
//				Paper[i][j] = 1;
//			}
//		}
//	}
//
//	//검사했는 지를 확인하는 벡터
//	std::vector<std::vector<bool>> isTest;
//	isTest.resize(MaxY);
//
//	for (int i = 0; i < MaxY; i++)
//	{
//		isTest[i].resize(MaxX, false);
//	}
//
//	int AreaCount = 0;
//	std::vector<int> Areas;
//
//	for (int i = 0; i < MaxY; i++)
//	{
//		for (int j = 0; j < MaxX; j++)
//		{
//			if (Paper[i][j] == 0 && isTest[i][j] == false)
//			{
//				Areas.push_back(BFS(Paper, isTest, j, i));
//				AreaCount++;
//			}
//		}
//	}
//
//	std::cout << AreaCount << std::endl;
//
//	sort(Areas.begin(), Areas.end());
//
//	for (int i = 0; i < Areas.size(); i++)
//	{
//		std::cout << Areas[i] << " ";
//	}
//
//	return  0;
//}