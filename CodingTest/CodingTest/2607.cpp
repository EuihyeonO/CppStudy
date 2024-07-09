//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <map>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int main()
//{
//	Init();
//
//	int WordSize = 0;
//	std::cin >> WordSize;
//
//	std::string TargetWord;
//	std::cin >> TargetWord;
//
//	std::vector<std::string> Words(WordSize - 1);
//	for (int i = 0; i < WordSize - 1; i++)
//	{
//		std::cin >> Words[i];
//	}
//
//	int TargetWordSize = TargetWord.size();
//
//	std::map<char, int> UsedAlphabet;
//	for (int i = 0; i < TargetWord.size(); i++)
//	{
//		UsedAlphabet[TargetWord[i]]++;
//	}
//
//	int Answer = 0;
//	for (int i = 0; i < WordSize - 1; i++)
//	{
//		int CurWordSize = Words[i].size();
//
//		if (std::abs(CurWordSize - TargetWordSize) > 1)
//		{
//			continue;
//		}
//
//		int DifCount = 0;
//
//		std::map<char, int> CurUseAlphabet;
//		for (int j = 0; j < CurWordSize; j++)
//		{
//			char CurAlphabet = Words[i][j];
//			if (UsedAlphabet.find(CurAlphabet) == UsedAlphabet.end())
//			{
//				DifCount++;
//			}
//
//			CurUseAlphabet[CurAlphabet]++;
//		}
//
//		if (DifCount > 1)
//		{
//			continue;
//		}
//
//		std::map<char, int>::iterator StartIter = CurUseAlphabet.begin();
//		std::map<char, int>::iterator EndIter = CurUseAlphabet.end();
//
//		while (StartIter != EndIter)
//		{
//			int CurKey = StartIter->first;
//
//			if (std::abs(UsedAlphabet[CurKey] - CurUseAlphabet[CurKey]) > 1)
//			{
//				break;
//			}
//
//			StartIter++;
//		}
//
//		if (StartIter == EndIter)
//		{
//			Answer++;
//		}
//	}
//
//	return 0;
//}