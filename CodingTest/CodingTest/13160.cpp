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
//	int NumLine = 0;
//	std::cin >> NumLine;
//
//	std::vector<std::pair<int, int>> Lines(NumLine);
//	std::vector<std::pair<int, int>> Position(NumLine * 2);
//
//	for (int i = 0; i < NumLine * 2; i +=2)
//	{
//		int Start = 0, End = 0;
//		std::cin >> Start >> End;
//
//		Lines[i / 2] = { Start, End };
//
//		Position[i] = { Start, 0 };
//		Position[i + 1] = { End, 1 };
//	}
//
//	std::sort(Position.begin(), Position.end());
//
//	int Answer = 0;
//	int AnswerPosition = 0;
//
//	int StartCount = 0;
//
//	for (int i = 0; i < Position.size(); i++)
//	{
//		if (Position[i].second == 0)
//		{
//			StartCount++;
//
//			if (StartCount > Answer)
//			{
//				AnswerPosition = Position[i].first;
//				Answer = StartCount;
//			}
//		}
//		else
//		{
//			StartCount--;
//		}
//	}
//
//	std::cout << Answer << "\n";
//
//	for (int i = 0; i < Lines.size(); i++)
//	{
//		if (Lines[i].first <= AnswerPosition && Lines[i].second >= AnswerPosition)
//		{
//			std::cout << i + 1 << " ";
// 		}
//	}
//
//	return 0;
//}