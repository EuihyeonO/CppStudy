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
//bool isFind = false;
//std::vector<bool> isVisit;
//
//void DFS(std::vector<std::vector<int>>& _RelationShip, int _CurIndex, int _Depth)
//{
//	if (_Depth == 4)
//	{
//		isFind = true;
//		return;
//	}
//
//	isVisit[_CurIndex] = true;
//
//	for (int i = 0; i < _RelationShip[_CurIndex].size(); i++)
//	{
//		int NextIndex = _RelationShip[_CurIndex][i];
//
//		if (isVisit[NextIndex] == false)
//		{
//			DFS(_RelationShip, NextIndex, _Depth + 1);
//
//			if (isFind == true)
//			{
//				return;
//			}
//		}
//	}
//
//	isVisit[_CurIndex] = false;
//}
//
//int main()
//{
//	Init();
//
//	int NumOfMan = 0;
//	std::cin >> NumOfMan;
//
//	int NumOfRelationShip = 0;
//	std::cin >> NumOfRelationShip;
//
//	std::vector<std::vector<int>> RelationShip(NumOfMan);
//	for (int i = 0; i < NumOfRelationShip; i++)
//	{
//		int First = 0;
//		int Second = 0;
//		std::cin >> First >> Second;
//
//		RelationShip[First].push_back(Second);
//		RelationShip[Second].push_back(First);
//	}
//
//	isVisit.resize(NumOfMan, false);
//
//	for (int i = 0; i < NumOfMan; i++)
//	{
//		DFS(RelationShip, i, 0);
//
//		if (isFind == true)
//		{
//			break;
//		}
//	}
//
//	int Answer = isFind ? 1 : 0;
//	std::cout << Answer;
//
//	return 0;
//}