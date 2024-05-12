//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int DPFunc(std::vector<std::vector<int>>& _DP, int _CurNum, int _CurLength)
//{
//	if (_DP[_CurNum][_CurLength] != 0)
//	{
//		return _DP[_CurNum][_CurLength] % 1234567;
//	}
//
//	if (_CurNum == 0)
//	{
//		_DP[0][_CurLength] = DPFunc(_DP, 7, _CurLength - 1);
//		_DP[0][_CurLength] %= 1234567;
//
//		return _DP[0][_CurLength];
//	}
//
//	if (_CurNum % 3 != 1)
//	{
//		_DP[_CurNum][_CurLength] += DPFunc(_DP, _CurNum - 1, _CurLength - 1);
//		_DP[_CurNum][_CurLength] %= 1234567;
//	}
//
//	if (_CurNum % 3 != 0)
//	{
//		_DP[_CurNum][_CurLength] += DPFunc(_DP, _CurNum + 1, _CurLength - 1);
//		_DP[_CurNum][_CurLength] %= 1234567;
//	}
//
//	if (_CurNum - 3 >= 1)
//	{
//		_DP[_CurNum][_CurLength] += DPFunc(_DP, _CurNum - 3, _CurLength - 1);
//		_DP[_CurNum][_CurLength] %= 1234567;
//	}
//
//	if (_CurNum + 3 <= 10)
//	{
//		int NextNum = 0;
//
//		if (_CurNum + 3 != 10)
//		{
//			NextNum = _CurNum + 3;
//		}
//
//		_DP[_CurNum][_CurLength] += DPFunc(_DP, NextNum, _CurLength - 1);
//		_DP[_CurNum][_CurLength] %= 1234567;
//	}
//
//	return _DP[_CurNum][_CurLength] % 1234567;
//}
//
//int main()
//{
//	Init();
//
//	std::vector<std::vector<int>> DP(10, std::vector<int>(1001, 0));
//
//	for (int i = 0; i <= 9; i++)
//	{
//		DP[i][1] = 1;
//	}
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Answers(NumCase, 0);
//
//	for (int i = 0; i < NumCase; i++)
//	{
//		int Length = 0;
//		std::cin >> Length;
//
//		int Answer = 0;
//		for (int j = 0; j <= 9; j++)
//		{
//			Answer += DPFunc(DP, j, Length);
//			Answer %= 1234567;
//		}
//
//		Answers[i] = Answer;
//	}
//
//	for (int i = 0; i < NumCase; i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}