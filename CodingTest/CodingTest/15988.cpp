//#include <iostream>
//#include <vector>
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
//
//int Solution(std::vector<int>& _DP, int _Target, int _MaxIndex)
//{
//	if (_DP[_Target] != -1)
//	{
//		return _DP[_Target];
//	}
//
//	for (int i = _MaxIndex + 1; i <= _Target; i++)
//	{
//		if (_DP[i] != -1)
//		{
//			continue;
//		}
//
//		for (int j = 1; j <= 3; j++)
//		{
//			_DP[i] += _DP[i - j];
//			_DP[i] %= 1000000009;
//		}
//
//		_DP[i]++;
//	}
//
//	return _DP[_Target];
//}
//
//int main()
//{
//	Init();
//
//	int NumOfTC = 0;
//	std::cin >> NumOfTC;
//	
//	std::vector<int> DP;
//	DP.resize(1000001, -1);
//
//	DP[1] = 1;
//	DP[2] = 2;
//	DP[3] = 4;
//
//	int MaxIndex = 3;
//
//	std::vector<int> Answer(NumOfTC);
//
//	for (int i = 0; i < NumOfTC; i++)
//	{
//		int Target = 0;
//		std::cin >> Target;
//
//		Solution(DP, Target, MaxIndex);
//
//		MaxIndex = std::max(Target, MaxIndex);
//
//		Answer[i] = DP[Target];
//	}
//
//	for (int i = 0; i < NumOfTC; i++)
//	{
//		std::cout << Answer[i] << '\n';
//	}
//
//	return 0;
//}

