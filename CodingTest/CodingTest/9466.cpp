//#include <iostream>
//#include <vector>
//#include <set>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void SetTeam(std::vector<int>& _Select, std::vector<bool>& _isTeam, int _Start, int _CurNode)
//{
//	_isTeam[_CurNode] = true;
//
//	if (_CurNode == _Start)
//	{
//		return;
//	}
//
//	SetTeam(_Select, _isTeam, _Start, _Select[_CurNode]);
//}
//
//int FindCycleStart(std::set<int>& _CurSelect, std::vector<int>& _Select, int _CurNode)
//{
//	int Next = _Select[_CurNode];
//
//	if (_CurSelect.find(Next) != _CurSelect.end())
//	{
//		return _CurNode;
//	}
//
//	_CurSelect.insert(Next);
//	return FindCycleStart(_CurSelect, _Select, Next);
//}
//
//int main()
//{
//	Init();
//
//	int NumTC = 0;
//	std::cin >> NumTC;
//
//	std::vector<int> Answers(NumTC);
//
//	for (int Case = 0; Case < NumTC; Case++)
//	{
//		int NumStudent = 0;
//		std::cin >> NumStudent;
//
//		std::vector<int> Select(NumStudent);
//		for (int i = 0; i < NumStudent; i++)
//		{
//			std::cin >> Select[i];
//			Select[i]--;
//		}
//
//		std::vector<bool> isTeam(NumStudent);
//		
//		for (int i = 0; i < NumStudent; i++)
//		{
//			if (isTeam[i] == false)
//			{
//				std::set<int> CurSelect;
//				int CycleStart = FindCycleStart(CurSelect, Select, i);
//				SetTeam(Select, isTeam, CycleStart, Select[CycleStart]);
//			}
//		}
//
//		int AnswerCount = 0;
//
//		for (int i = 0; i < NumStudent; i++)
//		{
//			if (isTeam[i] == false)
//			{
//				AnswerCount++;
//			}
//		}
//
//		Answers[Case] = AnswerCount;
//	}
//
//	for (int Answer : Answers)
//	{
//		std::cout << Answer << "\n";
//	}
//
//	return 0;
//}