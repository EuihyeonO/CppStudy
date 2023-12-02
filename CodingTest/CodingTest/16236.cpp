//#include <iostream>
//#include <vector>
//#include <climits>
//#include <queue>
//#include <map>
//
//struct Node
//{
//	int Distance = 0;
//	std::pair<int, int> PosYX;
//};
//
//int main()
//{
//	int Width = 0;
//	std::cin >> Width;
//
//	std::vector<std::vector<int>> Space(Width, std::vector<int>(Width, 0));
//	
//	std::pair<int, int> SharkPos;
//	int SharkSize = 2;
//	int EdibleFishes = 0;
//	int AllFishes = 0;
//
//	for (int i = 0; i < Width; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Space[i][j];
//			
//			if (Space[i][j] == 9)
//			{
//				SharkPos.first = i;
//				SharkPos.second = j;
//			}
//			else if (Space[i][j] == 1)
//			{
//				EdibleFishes++;
//				AllFishes++;
//			}
//			else if(Space[i][j] != 0)
//			{
//				AllFishes++;
//			}
//		}
//	}
//
//	if (EdibleFishes == 0)
//	{
//		std::cout << 0;
//		return 0;
//	}
//
//	int Second = 0;
//	int EatCount = 0;
//
//	//AllFishes > 0 는 왜 안됨????? 이해가 안됨 답은 잘 나오는데?
//	while(true)
//	{
//		std::queue<Node> BFS;
//		Node StartNode;
//		StartNode.Distance = 0;
//		StartNode.PosYX = SharkPos;
//		BFS.push(StartNode);
//
//		std::vector<std::vector<bool>> isVisit(Width, std::vector<bool>(Width, false));
//		isVisit[StartNode.PosYX.first][StartNode.PosYX.second] = true;
//
//		std::vector<std::pair<int, int>> WESN(4, { 0, 0 });
//		WESN[0] = { 0, 1 };
//		WESN[1] = { -1, 0 };
//		WESN[2] = { 1, 0 };
//		WESN[3] = { 0, -1 };
//
//		std::map<int, std::vector<std::pair<int, int>>> EdibleFishMap;
//
//		while (BFS.size() > 0)
//		{
//			Node CurNode = BFS.front();
//			BFS.pop();
//
//
//			if (Space[CurNode.PosYX.first][CurNode.PosYX.second] != 0 &&
//				Space[CurNode.PosYX.first][CurNode.PosYX.second] < SharkSize)
//			{
//				EdibleFishMap[CurNode.Distance].push_back(CurNode.PosYX);
//			}
//
//			for (int i = 0; i < 4; i++)
//			{
//				std::pair<int, int> NextPos = { CurNode.PosYX.first + WESN[i].first, CurNode.PosYX.second + WESN[i].second };
//
//				//배열범위초과
//				if (NextPos.first < 0 || NextPos.first >= Width || NextPos.second < 0 || NextPos.second >= Width)
//				{
//					continue;
//				}
//				//이미 방문한 적 있는 노드
//				if (isVisit[NextPos.first][NextPos.second] == true)
//				{
//					continue;
//				}
//
//				if (Space[NextPos.first][NextPos.second] > SharkSize)
//				{
//					continue;
//				}
//
//				Node NewNode;
//				NewNode.Distance = CurNode.Distance + 1;
//				NewNode.PosYX = NextPos;
//
//				isVisit[NextPos.first][NextPos.second] = true;
//
//				BFS.push(NewNode);
//			}
//		}
//
//		if (EdibleFishMap.size() <= 0)
//		{
//			break;
//		}
//
//		//거리만큼 걸린 시간에 더함.
//		std::vector<std::pair<int, int>> Fishes = EdibleFishMap.begin()->second;
//		std::pair<int, int> EatenFishPos;
//
//		if (Fishes.size() <= 0)
//		{
//			break;
//		}
//
//		EatenFishPos = Fishes[0];
//
//		for (int i = 1; i < Fishes.size(); i++)
//		{
//			if (EatenFishPos.first > Fishes[i].first)
//			{
//				EatenFishPos = Fishes[i];
//			}
//			else if (EatenFishPos.first == Fishes[i].first && EatenFishPos.second > Fishes[i].second)
//			{
//				EatenFishPos = Fishes[i];
//			}
//		}
//
//		Space[EatenFishPos.first][EatenFishPos.second] = 9;
//		Space[SharkPos.first][SharkPos.second] = 0;
//
//		SharkPos = EatenFishPos;
//		EatCount++;
//
//		Second += EdibleFishMap.begin()->first;
//
//		if (EatCount >= SharkSize)
//		{
//			SharkSize++;
//			EatCount = 0;
//		}
//	}
//
//	std::cout << Second;
//
//	return 0;
//}