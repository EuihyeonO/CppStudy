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
//std::set<int> AnswerSet;
//
//void DFS(std::vector<int>& _Nums, std::vector<bool>& _isVisit, int _StartIndex, int _CurIndex)
//{
//	_isVisit[_CurIndex] = true;
//
//	if (_Nums[_CurIndex] == _StartIndex)
//	{
//		AnswerSet.insert(_StartIndex);
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
//	std::set<int>::iterator StartIter = AnswerSet.begin();
//	std::set<int>::iterator EndIter = AnswerSet.end();
//
//	std::cout << AnswerSet.size() << "\n";
//
//	while (StartIter != EndIter)
//	{
//		std::cout << *StartIter << "\n";
//		StartIter++;
//	}
//
//	return 0;
//}