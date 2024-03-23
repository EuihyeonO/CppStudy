//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int FindStartInTrampoline(int _StartIndex, int _TrampolineSize, const std::vector<std::pair<int, int>>& _Stars)
//{
//	int NumOfStar = _Stars.size();
//
//	std::pair<int, int> StartCoord = _Stars[_StartIndex];
//	
//	int RightUp = 1;
//	//오른쪽 위
//	for (int i = _StartIndex + 1; i < NumOfStar; i++)
//	{
//		std::pair<int, int> CurCoord = _Stars[i];
//		
//		if (CurCoord.first > StartCoord.first + _TrampolineSize && CurCoord.second > StartCoord.second + _TrampolineSize)
//		{
//			break;
//		}
//
//		if (CurCoord.first >= StartCoord.first &&
//			CurCoord.second >= StartCoord.second &&
//			CurCoord.first <= StartCoord.first + _TrampolineSize && 
//			CurCoord.second <= StartCoord.second + _TrampolineSize)
//		{
//			RightUp++;
//		}
//	}
//
//	//int RightDown = 1;
//	////오른쪽 아래
//	//for (int i = _StartIndex + 1; i < NumOfStar; i++)
//	//{
//	//	std::pair<int, int> CurCoord = _Stars[i];
//	//
//	//	if (CurCoord.first > StartCoord.first + _TrampolineSize && CurCoord.second < StartCoord.second - _TrampolineSize)
//	//	{
//	//		break;
//	//	}
//	//
//	//	if (CurCoord.first >= StartCoord.first &&
//	//		CurCoord.second <= StartCoord.second &&
//	//		CurCoord.first <= StartCoord.first + _TrampolineSize &&
//	//		CurCoord.second >= StartCoord.second - _TrampolineSize)
//	//	{
//	//		RightDown++;
//	//	}
//	//}
//
//	//int LeftUp = 1;
//	////왼쪽 위
//	//for (int i = _StartIndex + 1; i < NumOfStar; i++)
//	//{
//	//	std::pair<int, int> CurCoord = _Stars[i];
//	//
//	//	if (CurCoord.first < StartCoord.first - _TrampolineSize && CurCoord.second > StartCoord.second + _TrampolineSize)
//	//	{
//	//		break;
//	//	}
//	//
//	//	if (CurCoord.first <= StartCoord.first &&
//	//		CurCoord.second >= StartCoord.second &&
//	//		CurCoord.first >= StartCoord.first - _TrampolineSize &&
//	//		CurCoord.second <= StartCoord.second + _TrampolineSize)
//	//	{
//	//		LeftUp++;
//	//	}
//	//}
//
//	int LeftDown = 1;
//	//왼쪽 아래
//	for (int i = _StartIndex - 1; i >= 0; i--)
//	{
//		std::pair<int, int> CurCoord = _Stars[i];
//
//		if (CurCoord.first < StartCoord.first - _TrampolineSize && CurCoord.second < StartCoord.second - _TrampolineSize)
//		{
//			break;
//		}
//
//		if (CurCoord.first <= StartCoord.first &&
//			CurCoord.second <= StartCoord.second &&
//			CurCoord.first >= StartCoord.first - _TrampolineSize &&
//			CurCoord.second >= StartCoord.second - _TrampolineSize)
//		{
//			LeftDown++;
//		}
//	}
//
//
//	return std::max(RightUp, LeftDown);
//}
//
//int main()
//{
//	Init();
//
//	int Height = 0;
//	int Width = 0;
//	int TrampolineSize = 0;
//	int NumOfStar = 0;
//
//	std::cin >> Height >> Width >> TrampolineSize >> NumOfStar;
//
//	std::vector<std::pair<int, int>> Stars(NumOfStar, {0, 0});
//	for (int i = 0; i < NumOfStar; i++)
//	{
//		std::cin >> Stars[i].first;
//		std::cin >> Stars[i].second;
//	}
//
//	std::sort(Stars.begin(), Stars.end());
//
//	int Answer = 0;
//
//	for (int StartIndex = 0; StartIndex < NumOfStar; StartIndex++)
//	{
//		int CurValue = FindStartInTrampoline(StartIndex, TrampolineSize, Stars);
//		Answer = std::max(Answer, CurValue);
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}