//#include <iostream>
//#include <vector>
//
//int GetFactorial(int _Num)
//{
//	int Factorial = 1;
//
//	while (_Num > 0)
//	{
//		Factorial *= _Num;
//		--_Num;
//	}
//
//	return Factorial;
//}
//
//void Permutation(int CurDigit, int MaxDigit, std::vector<int>& _Case, std::vector<bool>& _isVisit, std::vector<std::vector<int>>& _Answer)
//{
//	if (CurDigit == MaxDigit)
//	{
//		_Answer.push_back(_Case);
//		return;
//	}
//
//	for (int i = 0; i < MaxDigit; i++)
//	{
//		if (_isVisit[i] == true)
//		{
//			continue;
//		}
//
//		_isVisit[i] = true;
//		_Case[CurDigit] = i + 1;
//		Permutation(CurDigit + 1, MaxDigit, _Case, _isVisit, _Answer);
//		_isVisit[i] = false;
//	}
//}
//
//int main()
//{
//	int Num = 0;
//	std::cin >> Num;
//
//	std::vector<std::vector<int>> Answer;
//	Answer.reserve(GetFactorial(Num));
//
//	std::vector<bool> isVisit(Num, false);
//	std::vector<int> Case(Num, 0);
//	Permutation(0, Num, Case, isVisit, Answer);
//
//	for (int i = 0; i < Answer.size(); i++)
//	{
//		std::copy(Answer[i].begin(), Answer[i].end(), std::ostream_iterator<int>(std::cout, " "));
//		std::cout << "\n";
//	}
//
//	return 0;
//}