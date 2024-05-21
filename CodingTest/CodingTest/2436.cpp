//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <climits>
//#include <cmath>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//long long GetGCD(int _Left, int _Right)
//{
//	int Remain = _Left % _Right;
//
//	while (Remain > 0)
//	{
//		Remain = _Left % _Right;
//		_Left = _Right;
//		_Right = Remain;
//	}
//
//	return _Left;
//}
//
//int main()
//{
//	Init();
//
//	long long GCD = 0;
//	long long LCM = 0;
//
//	std::cin >> GCD >> LCM;
//
//	long long Mul = GCD * LCM;
//	long long MulSqrt = std::sqrt(Mul);
//
//	long long MinSum = LLONG_MAX;
//	std::pair<int, int> Answer;
//
//	for (int i = GCD; i <= MulSqrt; i += GCD)
//	{
//		long long  Cur = i;
//		long long  Other = Mul / Cur;
//
//		int  CurGCD = GetGCD(Cur, Other);
//		long long  CurLCM = Cur * Other / CurGCD;
//
//		if (CurGCD == GCD && CurLCM == LCM)
//		{
//			if (Cur + Other < MinSum)
//			{
//				MinSum = Cur + Other;
//				Answer = { Cur, Other };
//			}
//		}
//	}
//
//	std::cout << Answer.first << " " << Answer.second;
//		
//	return 0;
//}