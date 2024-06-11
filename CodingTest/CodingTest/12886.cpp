//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<std::vector<bool>> isVisit(1501, std::vector<bool>(1501, false));
//
//void InsertQueue(int _Left, int _Right, std::queue<std::pair<int, int>>& _Queue)
//{
//	if (_Left > _Right)
//	{
//		std::swap(_Left, _Right);
//	}
//
//	_Right -= _Left;
//	_Left *= 2;
//
//	if (isVisit[_Left][_Right] == false)
//	{
//		isVisit[_Left][_Right] = true;
//		_Queue.push({ _Left, _Right });
//	}
//}
//
//int main()
//{
//	Init();
//
//	int A = 0;
//	int B = 0;
//	int C = 0;
//
//	std::cin >> A >> B >> C;
//
//	int SumStone = A + B + C;
//
//	if (SumStone % 3 != 0)
//	{
//		std::cout << 0;
//		return 0;
//	}
//
//	std::queue<std::pair<int, int>> BFS;
//
//	if (A > B)
//	{
//		std::swap(A, B);
//	}
//
//	BFS.push({A, B});
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, int> CurStone = BFS.front();
//		BFS.pop();
//
//		int A = CurStone.first;
//		int B = CurStone.second;
//		int C = SumStone - A - B;
//
//		if (A == B && B == C)
//		{
//			std::cout << 1;
//			return 0;
//		}
//
//		if (A != B)
//		{
//			InsertQueue(A, B, BFS);
//		}
//
//		if (B != C)
//		{
//			InsertQueue(B, C, BFS);
//		}
//
//		if (A != C)
//		{
//			InsertQueue(A, C, BFS);
//		}
//	}
//
//	std::cout << 0;
//
//	return 0;
//}