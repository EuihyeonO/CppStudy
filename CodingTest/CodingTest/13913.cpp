//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//#include <algorithm>
//#include <string>
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
//	int Start = 0;
//	int Target = 0;
//	
//	std::cin >> Start >> Target;
//
//	if (Target < Start)
//	{
//		std::cout << Start - Target << "\n";
//
//		for (int i = Start; i >= Target; i--)
//		{
//			std::cout << i << " ";
//		}
//
//		return 0;
//	}
//
//	std::vector<int> DP(100001, INT_MAX / 2);
//	std::queue<std::pair<int, std::string>> BFS;
//
//	DP[Start] = 0;
//	BFS.push({ Start, std::to_string(Start) + "X" });
//
//	std::string AnswerPath = "";
//	int Answer = INT_MAX;
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, std::string> CurPair = BFS.front();
//		int CurPos = CurPair.first;
//
//		BFS.pop();
//
//		if (CurPos == Target)
//		{
//			Answer = std::min(Answer, DP[Target]);
//			AnswerPath = CurPair.second;
//			break;
//		}
//		
//		if (CurPos - 1 >= 0 && DP[CurPos - 1] == DP[CurPos] + 1)
//		{
//			std::string Path = CurPair.second;
//
//			Path += std::to_string(CurPos - 1);
//			Path += "X";
//
//			DP[CurPos - 1] = DP[CurPos] + 1;
//			BFS.push({ CurPos - 1, Path });
//		}
//
//		if (CurPos + 1 <= 100000 && DP[CurPos + 1] > DP[CurPos] + 1)
//		{
//			std::string Path = CurPair.second;
//
//			Path += std::to_string(CurPos + 1);
//			Path += "X";
//
//			DP[CurPos + 1] = DP[CurPos] + 1;
//			BFS.push({ CurPos + 1, Path });
//		}
//
//		if (CurPos * 2 <= 100000 && DP[CurPos * 2] > DP[CurPos] + 1)
//		{
//			std::string Path = CurPair.second;
//
//			Path += std::to_string(CurPos * 2);
//			Path += "X";
//
//			DP[CurPos * 2] = DP[CurPos] + 1;
//			BFS.push({ CurPos * 2, Path });
//		}
//	}
//
//	std::cout << DP[Target] << "\n";
//
//	for (int i = 0; i < AnswerPath.size(); i++)
//	{
//		if (AnswerPath[i] == 'X')
//		{
//			std::cout << " ";
//		}
//		else
//		{
//			std::cout << AnswerPath[i];
//		}
//	}
//	
//	return 0;
//}