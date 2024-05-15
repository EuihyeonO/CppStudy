//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//#include <climits>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//std::vector<char> Signs;
//std::vector<char> isVisit;
//std::string MinStr = "9999999999";
//std::string MaxStr = "0000000000";
//
//void DFS(long long _CurNum, int _CurIndex, int _CurDepth, int _MaxDepth)
//{
//	if (_CurNum < 0)
//	{
//		int a = 0;
//	}
//
//	if (_CurDepth == _MaxDepth)
//	{
//		std::string CurStr = std::to_string(_CurNum);
//
//		if (CurStr.size() < _MaxDepth)
//		{
//			CurStr.insert(CurStr.begin(), '0');
//		}
//
//		bool isAnswer = true;
//
//		for (int i = 0; i < Signs.size(); i++)
//		{
//			if (Signs[i] == '<')
//			{
//				if (CurStr[i] >= CurStr[i + 1])
//				{
//					isAnswer = false;
//					break;
//				}
//			}
//			else if (Signs[i] == '>')
//			{
//				if (CurStr[i] <= CurStr[i + 1])
//				{
//					isAnswer = false;
//					break;
//				}
//			}
//		}
//
//		if (isAnswer == true)
//		{
//			if (CurStr > MaxStr)
//			{
//				MaxStr = CurStr;
//			}
//
//			if (CurStr < MinStr)
//			{
//				MinStr = CurStr;
//			}
//		}
//
//		return;
//	}
//
//	isVisit[_CurIndex] = true;
//
//	for (int i = 0; i < isVisit.size(); i++)
//	{
//		if (isVisit[i] == true)
//		{
//			continue;
//		}
//
//		long long NextNum = _CurNum * 10 + i;
//		DFS(NextNum, i, _CurDepth + 1, _MaxDepth);
//	}
//
//	isVisit[_CurIndex] = false;
//}
//
//int main()
//{
//	Init();
//
//	int NumSign = 0;
//	std::cin >> NumSign;
//
//	Signs.resize(NumSign);
//
//	for (int i = 0; i < NumSign; i++)
//	{
//		std::cin >> Signs[i];
//	}
//
//	isVisit.resize(10, false);
//
//	for (int i = 0; i <= 9; i++)
//	{
//		DFS(i, i, 1, NumSign + 1);
//	}
//
//	std::cout << MaxStr << "\n" << MinStr;
//
//	return 0;
//}