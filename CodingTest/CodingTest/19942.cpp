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
//struct Info
//{
//	int Protein = 0;
//	int Lipid = 0;
//	int Carbo = 0;
//	int Vitamin = 0;
//	int Cost = 0;
//};
//
//int Answer = 100000000;
//std::vector<int> FoodList;
//
//void DFS(const std::vector<Info>& _AllInfo, std::vector<bool>& _isVisit, int _CurIndex, Info _TargetInfo, Info _SumInfo)
//{
//	_isVisit[_CurIndex] = true;
//
//	if (_TargetInfo.Protein <= _SumInfo.Protein && _TargetInfo.Lipid <= _SumInfo.Lipid && _TargetInfo.Carbo <= _SumInfo.Carbo && _TargetInfo.Vitamin <= _SumInfo.Vitamin)
//	{
//		if (Answer > _SumInfo.Cost)
//		{
//			Answer = _SumInfo.Cost;
//
//			FoodList.clear();
//
//			for (int i = 0; i < _isVisit.size(); i++)
//			{
//				if (_isVisit[i] == true)
//				{
//					FoodList.push_back(i);
//				}
//			}
//		}
//
//		_isVisit[_CurIndex] = false;
//
//		return;
//	}
//
//	for (int i = _CurIndex + 1; i < _AllInfo.size(); i++)
//	{
//		Info NextInfo;
//
//		NextInfo.Protein = _AllInfo[i].Protein + _SumInfo.Protein;
//		NextInfo.Lipid = _AllInfo[i].Lipid + _SumInfo.Lipid;
//		NextInfo.Carbo = _AllInfo[i].Carbo + _SumInfo.Carbo;
//		NextInfo.Cost = _AllInfo[i].Cost + _SumInfo.Cost;
//		NextInfo.Vitamin = _AllInfo[i].Vitamin + _SumInfo.Vitamin;
//
//		DFS(_AllInfo, _isVisit, i, _TargetInfo, NextInfo);
//	}
//
//	_isVisit[_CurIndex] = false;
//}
//
//int main()
//{
//	Init();
//
//	int NumInfo = 0;
//	std::cin >> NumInfo;
//
//	Info TargetInfo;
//	std::cin >> TargetInfo.Protein >> TargetInfo.Lipid >> TargetInfo.Carbo >> TargetInfo.Vitamin;
//
//	std::vector<Info> AllInfo(NumInfo);
//	std::vector<bool> isVisit(NumInfo);
//
//	for (int i = 0; i < NumInfo; i++)
//	{
//		std::cin >> AllInfo[i].Protein >> AllInfo[i].Lipid >> AllInfo[i].Carbo >> AllInfo[i].Vitamin >> AllInfo[i].Cost;
//	}
//
//	for (int i = 0; i < NumInfo; i++)
//	{
//		DFS(AllInfo, isVisit, i, TargetInfo, AllInfo[i]);
//	}
//
//	if (FoodList.size() == 0)
//	{
//		std::cout << -1;
//	}
//	else
//	{
//		std::cout << Answer << "\n";
//
//		for (int i = 0; i < FoodList.size(); i++)
//		{
//			std::cout << FoodList[i] + 1 << " ";
//		}
//	}
//
//	return 0;
//}