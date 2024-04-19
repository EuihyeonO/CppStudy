//#include <iostream>
//#include <vector>
//#include <set>
//#include <string>
//#include <algorithm>
//#include <climits>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int GetCount(const std::vector<bool>& _PushableBts, int _TargetChannel, int _AddValue)
//{
//	int CurChannel = _TargetChannel;
//	int Count = 0;
//
//	while (true)
//	{
//		if (CurChannel > 1000000 || CurChannel < 0)
//		{
//			Count = INT_MAX;
//			break;
//		}
//
//		bool CanNot = false;
//		std::string ChannelStr = std::to_string(CurChannel);
//		for (int i = 0; i < ChannelStr.size(); i++)
//		{
//			int CurNum = ChannelStr[i] - '0';
//
//			if (_PushableBts[CurNum] == false)
//			{
//				CanNot = true;
//				break;
//			}
//		}
//
//		if (CanNot == false)
//		{
//			Count += ChannelStr.size();
//			break;
//		}
//
//		Count++;
//		CurChannel += _AddValue;
//	}
//
//	return Count;
//}
//
//int main()
//{
//	Init();
//
//	int TargetChannel = 0;
//	std::cin >> TargetChannel;
//
//	int NumOfBrokenBt = 0;
//	std::cin >> NumOfBrokenBt;
//
//	std::vector<bool> PushableBts(10, true);
//
//	if (NumOfBrokenBt > 0)
//	{
//		for (int i = 0; i < NumOfBrokenBt; i++)
//		{
//			int Bt = 0;
//			std::cin >> Bt;
//
//			PushableBts[Bt] = false;
//		}
//	}
//
//	int SubCount = 0;
//	int AddCount = 0;
//
//	SubCount = GetCount(PushableBts, TargetChannel, -1);
//	AddCount = GetCount(PushableBts, TargetChannel, 1);
//
//	int OnlyPMCount = abs(TargetChannel - 100);
//	
//	int Answer = 0;
//	Answer = std::min(SubCount, AddCount);
//	Answer = std::min(Answer, OnlyPMCount);
//
//	std::cout << Answer;
//
//	return 0;
//}