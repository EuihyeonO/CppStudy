//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//#include <list>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int main()
//{
//	Init();
//
//	int Width = 0;
//	
//	std::vector<int> dx = { 0, - 1, 0, 1 };
//	std::vector<int> dy = { -1, 0, 1, 0 };
//
//	std::list<int> Answer;
//
//	while (true)
//	{
//		std::cin >> Width;
//		if (Width == 0)
//		{
//			break;
//		}
//
//		std::vector<std::vector<int>> Map(Width, std::vector<int>(Width, 0));
//		for (int i = 0; i < Width; i++)
//		{
//			for (int j = 0; j < Width; j++)
//			{
//				std::cin >> Map[i][j];
//			}
//		}
//		
//		std::vector<std::vector<int>> Cost(Width, std::vector<int>(Width, INT_MAX));
//		std::vector<std::vector<bool>> isVisit(Width, std::vector<bool>(Width, false));
//
//		std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> Dijk;
//		Dijk.push({ Map[0][0], 0 });
//
//		Cost[0][0] = Map[0][0];
//		isVisit[0][0] = true;
//
//		while (Dijk.size() > 0)
//		{
//			std::pair<int, int> CurNode = Dijk.top();
//			Dijk.pop();
//
//			int CurCost = CurNode.first;
//			std::pair<int, int> CurPos = { CurNode.second / Width, CurNode.second % Width };
//
//			for (int i = 0; i < 4; i++)
//			{
//				std::pair<int, int> NextPos = { CurPos.first + dy[i], CurPos.second + dx[i] };
//
//				if (NextPos.first < 0 || NextPos.first >= Width || NextPos.second < 0 || NextPos.second >= Width)
//				{
//					continue;
//				}
//
//				Cost[NextPos.first][NextPos.second] = std::min(Cost[NextPos.first][NextPos.second], CurCost + Map[NextPos.first][NextPos.second]);
//
//				if (isVisit[NextPos.first][NextPos.second] == false)
//				{
//					isVisit[NextPos.first][NextPos.second] = true;
//					Dijk.push({ Cost[NextPos.first][NextPos.second], NextPos.first * Width + NextPos.second });
//				}
//			}
//		}	
//
//		Answer.push_back(Cost[Width - 1][Width - 1]);
//	}
//
//	std::list<int>::iterator StartIter = Answer.begin();
//	std::list<int>::iterator EndIter = Answer.end();
//
//	int Index = 1;
//
//	while (StartIter != EndIter)
//	{
//		int CurAnswer = *StartIter;
//
//		std::cout << "Problem " << Index << ": " << CurAnswer << "\n";
//
//		Index++;
//		StartIter++;
//	}
//
//	return 0;
//}