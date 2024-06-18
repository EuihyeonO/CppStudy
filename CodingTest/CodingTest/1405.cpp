//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int MoveCount = 0;
//double ProbSum = 0;
//
//std::vector<double> Probs;
//std::vector<std::vector<bool>> isVisit;
//
//std::vector<int> DirX = { 1, -1, 0, 0 };
//std::vector<int> DirY = { 0, 0, 1, -1 };
//
//void DFS(int _X, int _Y, int _CurMoveCount, double _ProbSum)
//{
//	if (_CurMoveCount >= MoveCount)
//	{
//		ProbSum += _ProbSum;
//		return;
//	}
//
//	isVisit[_Y][_X] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int NextX = _X + DirX[i];
//		int NextY = _Y + DirY[i];
//
//		if (Probs[i] == 0)
//		{
//			continue;
//		}
//
//		if (isVisit[NextY][NextX] == false)
//		{
//			DFS(NextX, NextY, _CurMoveCount + 1, _ProbSum * Probs[i]);
//		}
//	}
//
//	isVisit[_Y][_X] = false;
//}
//
//int main()
//{
//	Init();
//	Probs.resize(4);
//
//	std::cin >> MoveCount;
//	
//	for (int i = 0; i < 4; i++)
//	{
//		std::cin >> Probs[i];
//		Probs[i] /= 100.0l;
//	}
//
//	isVisit.resize(30, std::vector<bool>(30, 0));
//	
//	DFS(15, 15, 0, 1.0l);
//
//	printf("%.10lf", ProbSum);
//
//	return 0;
//}