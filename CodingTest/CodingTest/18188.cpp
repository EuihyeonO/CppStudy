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
//struct Node
//{
//	std::pair<int, int> Position;
//	int MoveCount = 0;
//
//	std::vector<char> MovePath;
//};
//
//int main()
//{
//	Init();
//	
//	int Height = 0;
//	int Width = 0;
//	std::cin >> Height >> Width;
//
//	std::pair<int, int> MyPos;
//	std::pair<int, int> TargetPos;
//
//	std::vector<std::vector<char>> Map(Height, std::vector<char>(Width, 0));
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//			if (Map[i][j] == 'D')
//			{
//				MyPos = { i, j };
//			}
//			else if (Map[i][j] == 'Z')
//			{
//				TargetPos = { i, j };
//			}
//		}
//	}
//
//	int MaxMoveCount = 0;
//	std::cin >> MaxMoveCount;
//
//	std::vector<std::pair<char, char>> MoveDir(MaxMoveCount);
//	for (int i = 0; i < MaxMoveCount; i++)
//	{
//		std::cin >> MoveDir[i].first;
//		std::cin >> MoveDir[i].second;
//	}
//
//	std::queue<Node> BFS;
//	BFS.push({ MyPos, 0 });
//
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		std::pair<int, int> CurPos = CurNode.Position;
//		int MoveCount = CurNode.MoveCount;
//
//		BFS.pop();
//
//		if (CurPos.first == TargetPos.first && CurPos.second == TargetPos.second)
//		{
//			const std::vector<char>& Path = CurNode.MovePath;
//			std::cout << "YES\n";
//
//			for (int i = 0; i < Path.size(); i++)
//			{
//				std::cout << Path[i];
//			}
//
//			return 0;
//		}
//
//		if (MoveCount >= MaxMoveCount)
//		{
//			continue;
//		}
//
//		//1번 경로
//		{
//			int MoveChar = MoveDir[MoveCount].first;
//			std::pair<int, int> NextPos = { 0, 0 };
//			
//			if (MoveChar == 'W')
//			{
//				NextPos = { CurPos.first - 1, CurPos.second };
//			}
//			else if (MoveChar == 'S')
//			{
//				NextPos = { CurPos.first + 1, CurPos.second};
//			}
//			if (MoveChar == 'A')
//			{
//				NextPos = { CurPos.first, CurPos.second - 1 };
//			}
//			else if (MoveChar == 'D')
//			{
//				NextPos = { CurPos.first, CurPos.second + 1 };
//			}
//
//			if (NextPos.first >= 0 && NextPos.first < Height && NextPos.second >= 0 && NextPos.second < Width && 
//				Map[NextPos.first][NextPos.second] != '@')
//			{
//				CurNode.MovePath.push_back(MoveChar);
//				CurNode.MoveCount++;
//				CurNode.Position = NextPos;
//
//				BFS.push(CurNode);
//
//				CurNode.MovePath.pop_back();
//				CurNode.MoveCount--;
//			}
//		}
//
//		//2번 경로
//		{
//			int MoveChar = MoveDir[MoveCount].second;
//			std::pair<int, int> NextPos = { 0, 0 };
//
//			if (MoveChar == 'W')
//			{
//				NextPos = { CurPos.first - 1, CurPos.second };
//			}
//			else if (MoveChar == 'S')
//			{
//				NextPos = { CurPos.first + 1, CurPos.second };
//			}
//			if (MoveChar == 'A')
//			{
//				NextPos = { CurPos.first, CurPos.second - 1 };
//			}
//			else if (MoveChar == 'D')
//			{
//				NextPos = { CurPos.first, CurPos.second + 1 };
//			}
//
//			if (NextPos.first >= 0 && NextPos.first < Height && NextPos.second >= 0 && NextPos.second < Width &&
//				Map[NextPos.first][NextPos.second] != '@')
//			{
//				CurNode.MovePath.push_back(MoveChar);
//				CurNode.Position = NextPos;
//				CurNode.MoveCount++;
//
//				BFS.push(CurNode);
//			}
//		}
//	}
//
//	std::cout << "NO";
//
//	return 0;
//}