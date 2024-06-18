//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#include <cmath>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//void PrintAll(std::priority_queue<int, std::vector<int>, std::greater<int>>& _Numbers)
//{
//	while (_Numbers.size() > 0)
//	{
//		std::cout << _Numbers.top() << std::endl;
//		_Numbers.pop();
//	}
//}
//
//bool isPrimeNumber(int _Num)
//{
//	int NumSqrt = std::sqrt(_Num);
//
//	for (int i = 2; i <= NumSqrt; i++)
//	{
//		if (_Num % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	Init();
//
//	int Digit = 0;
//	std::cin >> Digit;
//
//	std::priority_queue<int, std::vector<int>, std::greater<int>> Numbers;
//	for (int i = 2; i <= 9; i++)
//	{
//		if (isPrimeNumber(i) == true)
//		{
//			Numbers.push(i);
//		}
//	}
//
//	if (Digit == 1)
//	{
//		PrintAll(Numbers);
//		return 0;
//	}
//
//	int Threshold = static_cast<int>(std::pow(10, Digit - 1));
//
//	while (true)
//	{
//		int CurNum = Numbers.top();
//		if (CurNum >= Threshold)
//		{
//			break;
//		}
//
//		Numbers.pop();
//
//		CurNum *= 10;
//		int NextNum = 0;
//
//		for (int i = 0; i <= 9; i++)
//		{
//			if (i % 2 == 0)
//			{
//				continue;
//			}
//
//			NextNum = CurNum + i;
//
//			if (isPrimeNumber(NextNum) == true)
//			{
//				Numbers.push(NextNum);
//			}
//		}
//	}
//
//	PrintAll(Numbers);
//
//	return 0;
//}