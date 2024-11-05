//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Rect
//{
//	int Left = 0;
//	int Top = 0;
//	
//	int Right = 0;
//	int Down = 0;
//};
//
//bool AABB(const Rect& _First, const Rect& _Second)
//{
//	return !(_First.Right < _Second.Left || _First.Left > _Second.Right || _First.Top > _Second.Down || _First.Down < _Second.Top);
//}
//
//bool IsInnerRect(const Rect& _First, const Rect& _Second)
//{
//	if (_First.Left < _Second.Left && _First.Right > _Second.Right && _First.Top < _Second.Top && _First.Down > _Second.Down)
//	{
//		return true;
//	}
//
//	if (_Second.Left < _First.Left && _Second.Right > _First.Right && _Second.Top < _First.Top && _Second.Down > _First.Down)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//void DFS(const std::vector<Rect>& _Rects, std::vector<int>& _IsCheck, int _Index, int _Count)
//{
//	_IsCheck[_Index] = _Count;
//
//	for (int i = 0; i < _Rects.size(); i++)
//	{
//		if (i == _Index)
//		{
//			continue;
//		}
//
//		if (_IsCheck[i] != -1)
//		{
//			continue;
//		}
//
//		if (AABB(_Rects[i], _Rects[_Index]) == true && IsInnerRect(_Rects[i], _Rects[_Index]) == false)
//		{
//			DFS(_Rects, _IsCheck, i, _Count);
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumRect = 0;
//	std::cin >> NumRect;
//
//	std::vector<Rect> Rects(NumRect);
//	for (int i = 0; i < NumRect; i++)
//	{
//		std::cin >> Rects[i].Left >> Rects[i].Top >> Rects[i].Right >> Rects[i].Down;
//	}
//
//	int CollisionCount = 0;
//	std::vector<int> CollisionOrder(NumRect, -1);
//
//	while (true)
//	{
//		auto FindIter = std::find(CollisionOrder.begin(), CollisionOrder.end(), -1);
//
//		if (FindIter == CollisionOrder.end())
//		{
//			break;
//		}
//
//		int Index = FindIter - CollisionOrder.begin();
//
//		DFS(Rects, CollisionOrder, Index, CollisionCount);
//		CollisionCount++;
//	}
//
//	int Answer = CollisionCount;
//	
//
//	for (int i = 0; i < NumRect; i++)
//	{
//		if((Rects[i].Left == 0 || Rects[i].Right == 0) && (Rects[i].Top <= 0 && Rects[i].Down >= 0))
//		{
//			Answer--;
//			break;
//		}
//		
//		if ((Rects[i].Top == 0 || Rects[i].Down == 0) && (Rects[i].Left <= 0 && Rects[i].Right >= 0))
//		{
//			Answer--;
//			break;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}