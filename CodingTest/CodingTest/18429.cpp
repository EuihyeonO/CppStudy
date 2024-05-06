//#include <iostream>
//#include <vector>
//
//void init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<int> Kits;
//std::vector<bool> isUse;
//int Case = 0;
//
//void DFS(int _CurIndex, int _CurMuscle, int _MuscleDec, int _Depth)
//{
//	isUse[_CurIndex] = true;
//
//	_CurMuscle -= _MuscleDec;
//	_CurMuscle += Kits[_CurIndex];
//
//	if (_CurMuscle < 500)
//	{
//		isUse[_CurIndex] = false;
//		return;
//	}
//
//	if (_Depth == Kits.size())
//	{
//		Case++;
//		isUse[_CurIndex] = false;
//		return;
//	}
//
//	for (int i = 0; i < Kits.size(); i++)
//	{
//		if (isUse[i] == false)
//		{
//			DFS(i, _CurMuscle, _MuscleDec, _Depth + 1);
//		}
//	}
//
//	isUse[_CurIndex] = false;
//}
//
//int main()
//{
//	init();
//
//	int NumOfKit = 0;
//	int MuscleDec = 0;
//	std::cin >> NumOfKit >> MuscleDec;
//
//	Kits.resize(NumOfKit);
//
//	for (int i = 0; i < NumOfKit; i++)
//	{
//		std::cin >> Kits[i];
//	}
//
//	isUse.resize(NumOfKit, false);
//
//	for (int i = 0; i < NumOfKit; i++)
//	{
//		DFS(i, 500, MuscleDec, 1);
//	}
//
//	std::cout << Case;
//
//	return 0;
//}