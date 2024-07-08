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
//int GetRootParent(std::vector<int>& _Parent, int _Dot)
//{
//	if (_Parent[_Dot] == _Dot)
//	{
//		return _Dot;
//	}
//	_Parent[_Dot] = GetRootParent(_Parent, _Parent[_Dot]);
//	return _Parent[_Dot];
//}
//
//void SetParent(std::vector<int>& _Parent, int _Dot1, int _Dot2)
//{
//	int Dot1Root = GetRootParent(_Parent, _Dot1);
//	int Dot2Root = GetRootParent(_Parent, _Dot2);
//
//	if(_Dot1 <= _Dot2)
//	{
//		_Parent[Dot2Root] = Dot1Root;
//	}
//	else
//	{
//		_Parent[Dot1Root] = Dot2Root;
//	}
//}
//
//int main()
//{
//	Init();
//
//	int DotSize = 0;
//	std::cin >> DotSize;
//
//	int TurnSize = 0;
//	std::cin >> TurnSize;
//
//	std::vector<int> Parents(DotSize);
//	for (int i = 0; i < DotSize; i++)
//	{
//		Parents[i] = i;
//	}
//
//	int CurTurn = 1;
//
//	for (int i = 0; i < TurnSize; i++)
//	{
//		int Start = 0;
//		int End = 0;
//
//		std::cin >> Start >> End;
//
//		int SmallDot = std::min(Start, End);
//		int BigDot = std::max(Start, End);
//
//		if (GetRootParent(Parents, SmallDot) == GetRootParent(Parents, BigDot))
//		{
//			std::cout << CurTurn;
//			return 0;
//		}
//		else
//		{
//			SetParent(Parents, SmallDot, BigDot);
//		}
//
//		CurTurn++;
//	}
//
//	std::cout << 0;
//
//	return 0;
//}