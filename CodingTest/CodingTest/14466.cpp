//#include <iostream>
//#include <vector>
//#include <set>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Road
//{
//	std::pair<int, int> Start;
//	std::pair<int, int> End;
//};
//
//struct compare
//{
//	bool operator()(const Road& _Left, const Road& _Right) const
//	{
//		if (_Left.Start == _Right.Start)
//		{
//			return _Left.End < _Right.End;
//		}
//
//		return _Left.Start < _Right.Start;
//	}
//};
//
//std::vector<int> DirX = { 0, 1, 0, -1 };
//std::vector<int> DirY = { 1, 0, -1, 0 };
//
//bool BFS(int _StartCow, int _DestCow, std::vector<std::vector<bool>>& _isVisit, std::vector<std::pair<int, int>>& _CowPos, std::set<Road, compare>& _Roads)
//{
//	for (int i = 0; i < _isVisit.size(); i++)
//	{
//		std::fill(_isVisit[i].begin(), _isVisit[i].end(), false);
//	}
//
//	std::pair<int, int> StartPos = _CowPos[_StartCow];
//	std::pair<int, int> DestPos = _CowPos[_DestCow];
//
//	std::queue<std::pair<int, int>> BFS;
//	BFS.push(StartPos);
//	_isVisit[StartPos.first][StartPos.second] = true;
//
//	while(BFS.size() > 0)
//	{
//		std::pair<int, int> CurPos = BFS.front();
//		BFS.pop();
//
//		if (CurPos == DestPos)
//		{
//			return true;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			std::pair<int, int> NextPos = { CurPos.first + DirY[i], CurPos.second + DirX[i] };
//
//			if (NextPos.first < 0 || NextPos.second < 0 || NextPos.first >= _isVisit.size() || NextPos.second >= _isVisit.size())
//			{
//				continue;
//			}
//
//			if (_isVisit[NextPos.first][NextPos.second] == true)
//			{
//				continue;
//			}
//
//			if (_Roads.find({ CurPos, NextPos }) != _Roads.end())
//			{
//				continue;
//			}
//
//			_isVisit[NextPos.first][NextPos.second] = true;
//			BFS.push(NextPos);
//		}
//	}
//
//	return false;
//}
//
//int main()
//{
//	Init();
//
//	int Size = 0;
//	int NumCow = 0;
//	int NumRoad = 0;
//	std::cin >> Size >> NumCow >> NumRoad;
//
//	std::set<Road, compare> Roads;
//
//	for (int i = 0; i < NumRoad; i++)
//	{
//		int StartY = 0;
//		int StartX = 0;
//		int EndY = 0;
//		int EndX = 0;
//		
//		std::cin >> StartY >> StartX >> EndY >> EndX;
//
//		Roads.insert({ {StartY - 1, StartX -1 }, { EndY - 1, EndX - 1} });
//		Roads.insert({ {EndY - 1, EndX -1}, { StartY - 1, StartX - 1 } });
//	}
//
//	std::vector<std::pair<int, int>> Cows(NumCow);
//	for (int i = 0; i < NumCow; i++)
//	{
//		int Y = 0;
//		int X = 0;
//		std::cin >> Y >> X;
//
//		Cows[i] = { Y - 1, X - 1 };
//	}
//
//	std::vector<std::vector<bool>> isAble(NumCow, std::vector<bool>(NumCow, false));
//	std::vector<std::vector<bool>> isVisit(Size, std::vector<bool>(Size, false));
//
//	for (int i = 0; i < NumCow; i++)
//	{
//		for (int j = i + 1; j < NumCow; j++)
//		{
//			isAble[i][j] = BFS(i, j, isVisit, Cows, Roads);
//		}
//	}
//
//	int Count = 0;
//
//	for (int i = 0; i < NumCow; i++)
//	{
//		for (int j = 0; j < NumCow; j++)
//		{
//			if (isAble[i][j] == true)
//			{
//				Count++;
//			}
//		}
//	}
//
//	std::cout << NumCow - Count;
//
//	return 0;
//}