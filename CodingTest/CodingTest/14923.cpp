//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//struct Node
//{
//	int Y = 0;
//	int X = 0;
//	bool isDestroy = false;
//};
//
//int main()
//{
//	int Height = 0;
//	int Width = 0;
//
//	std::pair<int, int> StartPos;
//	std::pair<int, int> TargetPos;
//
//	std::cin >> Height >> Width;
//	std::cin >> StartPos.first >> StartPos.second;
//	std::cin >> TargetPos.first >> TargetPos.second;
//
//	StartPos.first--;
//	StartPos.second--;
//	TargetPos.first--;
//	TargetPos.second--;
//
//	std::vector<std::vector<int>> Labyrinth(Height, std::vector<int>(Width, 0));
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Labyrinth[i][j];
//		}
//	}
//
//	//맨 앞이 0일 떄, 벽 안뚫고
//	//맨 앞이 1일 때, 벽 뚫고
//	std::vector<std::vector<std::vector<bool>>> isVisit(2, std::vector<std::vector<bool>>(Height, std::vector<bool>(Width, false)));
//	std::vector<std::vector<std::vector<int>>> Answer(2, std::vector<std::vector<int>>(Height, std::vector<int>(Width)));
//
//	std::vector<std::pair<int, int>> EWSN(4);
//	EWSN[0] = { 1, 0 };
//	EWSN[1] = { -1, 0 };
//	EWSN[2] = { 0, 1 };
//	EWSN[3] = { 0, -1 };
//
//	std::queue<Node> BFS;
//	BFS.push({ StartPos.first, StartPos.second, false});
//	
//	isVisit[0][StartPos.first][StartPos.second] = true;
//	isVisit[1][StartPos.first][StartPos.second] = true;
//
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		std::pair<int, int> CurPos = { CurNode.Y, CurNode.X };
//		bool CurIsDestroy = CurNode.isDestroy;
//
//		if (CurPos.first == 0 && CurPos.second == 2)
//		{
//			int a = 0;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			std::pair<int, int> NextPos = { CurPos.first + EWSN[i].first, CurPos.second + EWSN[i].second };
//
//			//배열 범위 초과
//			if (NextPos.first < 0 || NextPos.first >= Height || NextPos.second < 0 || NextPos.second >= Width)
//			{
//				continue;
//			}
//			
//			bool isNextVisit0 = isVisit[0][NextPos.first][NextPos.second];
//			bool isNextVisit1 = isVisit[1][NextPos.first][NextPos.second];
//			
//			//아직 지팡이 안썼고
//			if(CurIsDestroy == false)
//			{
//				//다음지역은 길
//				if (isNextVisit0 == false && Labyrinth[NextPos.first][NextPos.second] == 0)
//				{
//					isVisit[0][NextPos.first][NextPos.second] = true;
//					Answer[0][NextPos.first][NextPos.second] = Answer[0][CurPos.first][CurPos.second] + 1;
//
//					BFS.push({ NextPos.first, NextPos.second, false });
//				}
//
//				//다음지역은 벽
//				if (isNextVisit1 == false && Labyrinth[NextPos.first][NextPos.second] == 1)
//				{
//					isVisit[1][NextPos.first][NextPos.second] = true;
//					Answer[1][NextPos.first][NextPos.second] = Answer[0][CurPos.first][CurPos.second] + 1;
//					
//					BFS.push({ NextPos.first, NextPos.second, true });
//				}
//			}
//			else
//			{
//				//길밖에 못감.
//				if (isNextVisit1 == false && Labyrinth[NextPos.first][NextPos.second] == 0)
//				{
//					isVisit[1][NextPos.first][NextPos.second] = true;
//					Answer[1][NextPos.first][NextPos.second] = Answer[1][CurPos.first][CurPos.second] + 1;
//
//					BFS.push({ NextPos.first, NextPos.second, true });
//				}
//			}
//
//		}
//	}
//
//	int NoDestroy = Answer[0][TargetPos.first][TargetPos.second];
//	int Destroy = Answer[1][TargetPos.first][TargetPos.second];
//	
//	if (NoDestroy == 0 && Destroy == 0)
//	{
//		std::cout << -1;
//	}
//	else if(NoDestroy != 0 && Destroy != 0)
//	{
//		std::cout << std::min(NoDestroy, Destroy);
//	}
//	else
//	{
//		std::cout << std::max(NoDestroy, Destroy);
//	}
//
//	return 0;
//}