//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int DoCommand(int _Num, char _Command)
//{
//	if (_Command == 'D')
//	{
//		_Num *= 2;
//
//		if (_Num >= 10000)
//		{
//			_Num %= 10000;
//		}
//	}
//	else if (_Command == 'S')
//	{
//		--_Num;
//
//		if (_Num < 0)
//		{
//			_Num = 9999;
//		}
//	}
//	else if (_Command == 'L')
//	{
//		_Num = (_Num % 1000) * 10 + (_Num / 1000);
//	}
//	else if (_Command == 'R')
//	{
//		_Num = (_Num / 10) + (_Num % 10) * 1000;
//	}
//
//	return _Num;
//}
//
//
//std::string BFS(int _CurNum, int _Target)
//{
//	std::vector<bool> isVisit(10001, false);
//
//	std::queue<std::pair<int, std::string>> BFS;
//	BFS.push({ _CurNum, "" });
//
//	while (BFS.size() > 0)
//	{
//		std::pair<int, std::string> CurData = BFS.front();
//		BFS.pop();
//
//		if (CurData.first == _Target)
//		{
//			return CurData.second;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			if (i == 0)
//			{
//				int Num = DoCommand(CurData.first, 'D');
//
//				if (isVisit[Num] == false)
//				{
//					BFS.push({ Num, CurData.second + 'D' });
//					isVisit[Num] = true;
//				}
//			}
//			else if (i == 1)
//			{
//				int Num = DoCommand(CurData.first, 'S');
//
//				if (isVisit[Num] == false)
//				{
//					BFS.push({ Num, CurData.second + 'S' });
//					isVisit[Num] = true;
//				}
//			}
//			else if (i == 2)
//			{
//				int Num = DoCommand(CurData.first, 'L');
//
//				if (isVisit[Num] == false)
//				{
//					BFS.push({ Num, CurData.second + 'L' });
//					isVisit[Num] = true;
//				}
//			}
//			else if (i == 3)
//			{
//				int Num = DoCommand(CurData.first, 'R');
//
//				if (isVisit[Num] == false)
//				{
//					BFS.push({ Num, CurData.second + 'R' });
//					isVisit[Num] = true;
//				}
//			}
//		}
//	}
//
//	return "Not Found";
//}
//
//int main()
//{
//	Init();
//
//	int NumTC = 0;
//	std::cin >> NumTC;
//
//	std::vector<std::string> Answers(NumTC);
//
//	for (int Case = 0; Case < NumTC; Case++)
//	{
//		int Number = 0;
//		int Target = 0;
//
//		std::cin >> Number >> Target;
//
//		std::string Answer = BFS(Number, Target);
//
//		Answers[Case] = Answer;
//		Answer.clear();
//	}
//
//	for (std::string Answer : Answers)
//	{
//		std::cout << Answer << "\n";
//	}
//
//	return 0;
//}