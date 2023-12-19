//#include <iostream>
//#include <vector>
//#include <set>
//#include <chrono>
//#include <climits>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void Combination(int _Digit, int _Index, std::vector<int>& _Case, std::vector<int>& _Sequence, std::vector<std::vector<int>>& _Synergy, int& _SynergySum)
//{
//	if (_Digit == 2)
//	{
//		int First = _Case[0];
//		int Second = _Case[1];
//
//		_SynergySum += _Synergy[First][Second] + _Synergy[Second][First];
//
//		return;
//	}
//
//	for (size_t i = _Index; i < _Sequence.size(); i++)
//	{
//		_Case[_Digit] = _Sequence[i];
//		Combination(_Digit + 1, i + 1, _Case, _Sequence, _Synergy, _SynergySum);
//	}
//}
//
//void Combination(int _Digit, int _Index, std::vector<int>& _Case, std::vector<int>& _Sequence, std::vector<std::vector<int>>& _Synergy, std::vector<std::pair<std::vector<int>, std::vector<int>>>& _Teams, std::set<int>& _Answer)
//{
//	if (_Digit == static_cast<int>(_Case.size()))
//	{
//		std::vector<int> _Remain;
//		
//		for (size_t i = 0; i < _Sequence.size(); i++)
//		{
//			if (std::find(_Case.begin(), _Case.end(), i) == _Case.end())
//			{
//				_Remain.push_back(i);
//			}
//		}
//
//		int SumStart = 0;
//		int SumLink = 0;
//
//		std::vector<int> Temp(2);
//
//		Combination(0, 0, Temp, _Case, _Synergy, SumStart);
//		Combination(0, 0, Temp, _Remain, _Synergy, SumLink);
//
//		_Answer.insert(abs(SumStart - SumLink));
//		return;
//	}
//
//	for (size_t i = _Index; i < _Sequence.size(); i++)
//	{
//		_Case[_Digit] = _Sequence[i];
//		Combination(_Digit + 1, i + 1, _Case, _Sequence, _Synergy, _Teams, _Answer);
//	}
//}
//
//int main()
//{
//	Init();
//
//	int HeadCount = 0;
//	std::cin >> HeadCount;
//	
//	std::vector<std::vector<int>> Synergy(HeadCount, std::vector<int>(HeadCount));
//	
//	for (int i = 0; i < HeadCount; i++)
//	{
//		for (int j = 0; j < HeadCount; j++)
//		{
//			std::cin >> Synergy[i][j];
//		}
//	}
//
//	int HalfHead = HeadCount / 2;
//
//	std::vector<int> Case(HalfHead);
//	std::vector<int> Sequence(HeadCount);
//
//	for (int i = 0; i < HeadCount; i++)
//	{
//		Sequence[i] = i;
//	}
//
//	//ÀüÃ¼ ÆÀÀ» ¹ÝÀ¸·Î ³ª´®.
//	std::vector<std::pair<std::vector<int>, std::vector<int>>> Teams;
//	std::set<int> Answer;
//	Combination(0, 0, Case, Sequence, Synergy, Teams, Answer);
//
//	std::cout << *Answer.begin();
//
//	return 0;
//}