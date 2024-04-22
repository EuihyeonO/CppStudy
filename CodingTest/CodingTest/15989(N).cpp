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
//int GetCase(const int& _Left, const int& _Right)
//{
//	if (_Left == _Right)
//	{
//		return _Left * _Left - _Left;
//	}
//	else
//	{
//		return _Left * _Right;
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<int> DP(10001);
//	DP[1] = 1;
//	DP[2] = 2;
//	DP[3] = 3;
//	DP[4] = 4;
//	DP[5] = 5;
//
//	for (int i = 4; i <= 10000; i++)
//	{
//		DP[i] = DP[i - 2] + DP[i - 1];
//	}
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//
//	}
//
//	return 0;
//}