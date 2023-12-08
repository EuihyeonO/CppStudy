//#include <iostream>
//#include <vector>
//#include <iterator>
//#include <queue>
//
//int main()
//{
//	int Height = 0;
//	int Width = 0;
//	
//	std::cin >> Height >> Width;
//	
//	std::vector<std::vector<int>> Map;
//	Map.reserve(Height);
//
//	std::vector<std::vector<int>> Distance;
//	Distance.reserve(Height);
//
//	std::vector<std::vector<bool>> isVisit;
//	isVisit.reserve(Height);
//
//	for (int i = 0; i < Height; i++)
//	{
//		Map.emplace_back(Width, 0);
//		Distance.emplace_back(Width, -1);
//		isVisit.emplace_back(Width, false);
//	}
//	
//	std::pair<int, int> StartPos;
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Map[i][j];
//
//			if (Map[i][j] == 2)
//			{
//				StartPos.first = i;
//				StartPos.second = j;
//			}
//		}
//	}
//
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push(StartPos);
//
//	isVisit[StartPos.first][StartPos.second] = true;
//	Distance[StartPos.first][StartPos.second] = 0;
//
//	std::vector<std::pair<int, int>> EWSN(4);
//	EWSN[0] = { 1, 0 };
//	EWSN[1] = { -1, 0 };
//	EWSN[2] = { 0, 1 };
//	EWSN[3] = { 0, -1 };
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurPos = BFS.front();
//		BFS.pop();
//
//		int CurDistance = Distance[CurPos.first][CurPos.second];
//
//		for (int i = 0; i < 4; i++)
//		{
//			std::pair<int, int> NextPos;
//
//			NextPos.first = CurPos.first + EWSN[i].first;
//			NextPos.second = CurPos.second + EWSN[i].second;
//
//			if (NextPos.first < 0 || NextPos.first >= Height || NextPos.second < 0 || NextPos.second >= Width)
//			{
//				continue;
//			}
//
//			if (isVisit[NextPos.first][NextPos.second] == true)
//			{
//				continue;
//			}
//
//			if (Map[NextPos.first][NextPos.second] == 0)
//			{
//				continue;
//			}
//
//			isVisit[NextPos.first][NextPos.second] = true;
//			Distance[NextPos.first][NextPos.second] = CurDistance + 1;
//
//			BFS.push(NextPos);
//		}
//	}
//
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			if (Map[i][j] == 0)
//			{
//				Distance[i][j] = 0;
//			}
//		}
//	}
//
//	for (int i = 0; i < Height; i++)
//	{
//		std::copy(Distance[i].begin(), Distance[i].end(), std::ostream_iterator<int>(std::cout, " "));
//		std::cout << "\n";
//	}
//
//	return 0;
//}