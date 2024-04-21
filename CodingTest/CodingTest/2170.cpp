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
//int main()
//{
//	Init();
//
//	int NumOfLines = 0;
//	std::cin >> NumOfLines;
//
//	std::vector<std::pair<int, int>> Lines;
//	Lines.resize(NumOfLines);
//
//	for (int i = 0; i < NumOfLines; i++)
//	{
//		std::cin >> Lines[i].first;
//		std::cin >> Lines[i].second;
//	}
//	
//	std::sort(Lines.begin(), Lines.end());
//
//	int Answer = 0;
//
//	std::pair<int, int> MergeLine = Lines[0];
//	std::pair<int, int> CurLine = { 0, 0 };
//
//	for (int i = 1; i < NumOfLines; i++)
//	{
//		CurLine = Lines[i];
//
//		if (CurLine.first <= MergeLine.second)
//		{
//			MergeLine.second = std::max(CurLine.second, MergeLine.second);
//		}
//		else
//		{
//			Answer += MergeLine.second - MergeLine.first;
//			MergeLine = CurLine;
//		}
//	}
//	
//	Answer += MergeLine.second - MergeLine.first;
//
//	std::cout << Answer;
//
//	return 0;
//}