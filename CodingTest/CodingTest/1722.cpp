//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <set>
//
//long long GetFactorial(int _Num)
//{
//	long long  Factorial = 1;
//
//	while (_Num > 0)
//	{
//		Factorial *= _Num;
//		_Num -= 1;
//	}
//
//	return Factorial;
//}
//
//int FindSequenceToIndex(long long _Index, int _Digit, std::set<int>& _Numbers)
//{
//	long long Fac = GetFactorial(_Digit - 1);
//
//	for (int i = 0; i < _Numbers.size(); i++)
//	{
//		if (_Index >= i * Fac + 1 && _Index <= (i + 1) * Fac)
//		{
//			return i + 1;
//		}
//	}
//
//	//디버그용
//	return -99;
//}
//
//long long FindIndexToSequence(const std::vector<int>& _Sequence, std::set<int>& _Numbers)
//{
//	long long Index = 1;
//
//	for(int i = 0; i < _Sequence.size(); i++)
//	{
//		int CurNum = _Sequence[i];
//		long long Fac = GetFactorial(_Numbers.size() - 1);
//
//		std::set<int>::iterator FindIter = _Numbers.begin();
//
//		for (int j = 0; j < _Numbers.size(); j++)
//		{
//			if (CurNum == *FindIter)
//			{
//				Index += j * Fac;
//				break;
//			}
//
//			FindIter++;
//		}
//
//		std::set<int>::iterator StartIter = _Numbers.begin();
//		std::set<int>::iterator EndIter = _Numbers.end();
//
//		for (; StartIter != EndIter; StartIter++)
//		{
//			if (*StartIter == CurNum)
//			{
//				_Numbers.erase(StartIter);
//				break;
//			}
//		}
//	}
//
//	return Index;
//}
//
//
//int main()
//{
//	int SequenceSize = 0;
//	std::cin >> SequenceSize;
//
//	std::set<int> Numbers;
//
//	for (int i = 0; i < SequenceSize; i++)
//	{
//		Numbers.insert(i + 1);
//	}
//
//	int Question = 0;
//	std::cin >> Question;
//
//	if (Question == 1)
//	{
//		std::vector<int> Answer(SequenceSize, -1);
//		long long FindIndex = 0;
//
//		std::cin >> FindIndex;
//		int Digit = SequenceSize;
//
//		for (int i = 0; i < SequenceSize; i++)
//		{
//			Answer[i] = FindSequenceToIndex(FindIndex, Digit, Numbers);
//			FindIndex -= GetFactorial(Digit - 1) * (Answer[i] - 1);
//			Digit--;
//
//			int Count = 1;
//			std::set<int>::iterator StartIter = Numbers.begin();
//			std::set<int>::iterator EndIter = Numbers.end();
//
//			for (; StartIter != EndIter; StartIter++)
//			{
//				if (Answer[i] == Count)
//				{
//					Answer[i] = *StartIter;
//					Numbers.erase(StartIter);
//					break;
//				}
//
//				Count++;
//			}
//		}
//
//		std::copy(Answer.begin(), Answer.end(), std::ostream_iterator<int>(std::cout, " "));
//	}
//	else if (Question == 2)
//	{
//		std::vector<int> Input(SequenceSize);
//
//		for (int i = 0; i < SequenceSize; i++)
//		{
//			std::cin >> Input[i];
//		}
//
//		long long Answer = FindIndexToSequence(Input, Numbers);
//
//		std::cout << Answer;
//	}
//
//	return 0;
//}
