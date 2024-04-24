//#include <iostream>
//#include <vector>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::set<std::set<int>> Sets;
//
//void DFS(std::vector<int>& _Nums, std::vector<bool>& _isVisit, int _StartIndex, int _CurIndex)
//{
//	_isVisit[_CurIndex] = true;
//
//	if (_Nums[_CurIndex] == _StartIndex)
//	{
//		std::set<int> CurSet;
//		for (int i = 0; i < _Nums.size(); i++)
//		{
//			if (_isVisit[i] == true)
//			{
//				CurSet.insert(i);
//			}
//		}
//
//		Sets.insert(CurSet);
//		
//		_isVisit[_CurIndex] = false;
//		return;
//	}
//
//	int NextIndex = _Nums[_CurIndex];
//
//	if (_isVisit[NextIndex] != true)
//	{
//		DFS(_Nums, _isVisit, _StartIndex, NextIndex);
//	}
//
//	_isVisit[_CurIndex] = false;
//}
//
//int main()
//{
//	Init();
//
//	int NumSize = 0;
//	std::cin >> NumSize;
//
//	std::vector<int> Nums(NumSize + 1, 0);
//	for (int i = 1; i <= NumSize; i++)
//	{
//		std::cin >> Nums[i];
//	}
//
//	std::vector<bool> isVisit(NumSize + 1, false);
//
//	for (int i = 1; i <= NumSize; i++)
//	{
//		DFS(Nums, isVisit, i, i);
//	}
//
//	std::set<int> Merge;
//
//	std::set<std::set<int>>::iterator StartIter = Sets.begin();
//	std::set<std::set<int>>::iterator EndIter = Sets.end();
//
//	while (StartIter != EndIter)
//	{
//		const std::set<int>& CurSet = *StartIter;
//
//		std::set<int>::iterator CurStartIter = CurSet.begin();
//		std::set<int>::iterator CurEndIter = CurSet.end();
//
//		while (CurStartIter != CurEndIter)
//		{
//			Merge.insert(*CurStartIter);
//			CurStartIter++;
//		}
//
//		StartIter++;
//	}
//
//	std::set<int>::iterator MergeStartIter = Merge.begin();
//	std::set<int>::iterator MergeEndIter = Merge.end();
//
//	std::cout << Merge.size() << "\n";
//
//	while (MergeStartIter != MergeEndIter)
//	{
//		std::cout << *MergeStartIter << "\n";
//		MergeStartIter++;
//	}
//
//	return 0;
//}