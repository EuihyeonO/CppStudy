//#include <iostream>
//#include <vector>
//#include <cmath>
//
//int Recursive(int _Num, std::vector<int>& _Dp)
//{
//	if (_Num == 1)
//	{
//		return 1;
//	}
//	else if (_Num == 2)
//	{
//		return 2;
//	}
//	else if (_Num == 3)
//	{
//		return 3;
//	}
//	
//	if (_Dp[_Num] != -1)
//	{
//		return _Dp[_Num];
//	}
//	else
//	{
//		_Dp[_Num] = Recursive(_Num - 1, _Dp) % 10007 + Recursive(_Num - 2, _Dp) % 10007;
//		return _Dp[_Num];
//	}
//}
//
//int main()
//{
//	int Length = 0;
//	std::cin >> Length;
//
//	std::vector<int> Dp;
//	Dp.resize(Length + 1, -1);
//
//	Dp[1] = 1;
//	Dp[2] = 2;
//	Dp[3] = 3;
//
//	int Answer = Recursive(Length, Dp) % 10007;
//	std::cout << Answer;
//
//	return 0;
//}