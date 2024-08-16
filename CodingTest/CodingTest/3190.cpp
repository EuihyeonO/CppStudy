//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//#define EMPTY 0
//#define BODY 1
//#define APPLE 2
//
//struct Command
//{
//	int Second = 0;
//	char Dir = 0;
//};
//
//std::pair<int, int> LeftRotate(std::pair<int, int> _Dir)
//{
//	if (_Dir.first == 0 && _Dir.second == 1)
//	{
//		return { -1, 0 };
//	}
//	else if (_Dir.first == -1 && _Dir.second == 0)
//	{
//		return { 0, -1 };
//	}
//	else if (_Dir.first == 0 && _Dir.second == -1)
//	{
//		return { 1, 0 };
//	}
//	else if (_Dir.first == 1 && _Dir.second == 0)
//	{
//		return { 0, 1 };
//	}
//
//	return { -9999, -9999 };
//}
//
//std::pair<int, int> RightRotate(std::pair<int, int> _Dir)
//{
//	if (_Dir.first == 0 && _Dir.second == 1)
//	{
//		return { 1, 0 };
//	}
//	else if (_Dir.first == 1 && _Dir.second == 0)
//	{
//		return { 0, -1 };
//	}
//	else if (_Dir.first == 0 && _Dir.second == -1)
//	{
//		return { -1, 0 };
//	}
//	else if (_Dir.first == -1 && _Dir.second == 0)
//	{
//		return { 0, 1 };
//	}
//
//	return { -9999, -9999 };
//}
//
//int main()
//{
//	Init();
//
//	int BoardSize = 0;
//	std::cin >> BoardSize;
//
//	int NumApple = 0;
//	std::cin >> NumApple;
//
//	std::vector<std::vector<int>> Board(BoardSize, std::vector<int>(BoardSize, EMPTY));
//
//	for (int i = 0; i < NumApple; i++)
//	{
//		int InputY = 0;
//		int InputX = 0;
//		std::cin >> InputY >> InputX;
//
//		Board[InputY - 1][InputX - 1] = APPLE;
//	}
//
//	int NumCommand = 0;
//	std::cin >> NumCommand;
//
//	std::vector<Command> Commands(NumCommand);
//
//	for (int i = 0; i < NumCommand; i++)
//	{
//		int Second = 0;
//		char Dir = 0;
//		
//		std::cin >> Second >> Dir;
//
//		Commands[i] = { Second, Dir };
//	}
//
//	std::queue<std::pair<int, int>> BodyQueue;
//
//	std::pair<int, int> CurPos = { 0, 0 };
//	std::pair<int, int> Dir = { 0, 1 };
//
//	int CurSecound = 0;
//
//	BodyQueue.push(CurPos);
//	Board[0][0] = BODY;
//
//	for (int i = 0; i < NumCommand; i++)
//	{
//		Command CurCommand = Commands[i];
//
//		for (int j = CurSecound; j < CurCommand.Second; j++)
//		{
//			int NextY = CurPos.first + Dir.first;
//			int NextX = CurPos.second + Dir.second;
//
//			if (NextX < 0 || NextY < 0 || NextX >= BoardSize || NextY >= BoardSize)
//			{
//				std::cout << CurSecound + 1;
//				return 0;
//			}
//
//			if (Board[NextY][NextX] == BODY)
//			{
//				std::cout << CurSecound + 1;
//				return 0;
//			}
//			else if (Board[NextY][NextX] == APPLE)
//			{
//				BodyQueue.push({ NextY, NextX });
//				Board[NextY][NextX] = BODY;
//
//				CurPos = { NextY, NextX };
//			}
//			else if (Board[NextY][NextX] == EMPTY)
//			{
//				BodyQueue.push({ NextY, NextX });
//				Board[NextY][NextX] = BODY;
//
//				std::pair<int, int> TailPos = BodyQueue.front();
//				BodyQueue.pop();
//
//				Board[TailPos.first][TailPos.second] = EMPTY;
//
//				CurPos = { NextY, NextX };
//			}
//
//			CurSecound++;
//		}
//
//		if (CurCommand.Dir == 'L')
//		{
//			Dir = LeftRotate(Dir);
//		}
//		else if (CurCommand.Dir == 'D')
//		{
//			Dir = RightRotate(Dir);
//		}
//	}
//
//	while (true)
//	{
//		int NextY = CurPos.first + Dir.first;
//		int NextX = CurPos.second + Dir.second;
//
//		if (NextX < 0 || NextY < 0 || NextX >= BoardSize || NextY >= BoardSize)
//		{
//			std::cout << CurSecound + 1;
//			return 0;
//		}
//
//		if (Board[NextY][NextX] == BODY)
//		{
//			std::cout << CurSecound + 1;
//			return 0;
//		}
//		else if (Board[NextY][NextX] == APPLE)
//		{
//			BodyQueue.push({ NextY, NextX });
//			Board[NextY][NextX] = BODY;
//
//			CurPos = { NextY, NextX };
//		}
//		else if (Board[NextY][NextX] == EMPTY)
//		{
//			BodyQueue.push({ NextY, NextX });
//			Board[NextY][NextX] = BODY;
//
//			std::pair<int, int> TailPos = BodyQueue.front();
//			BodyQueue.pop();
//
//			Board[TailPos.first][TailPos.second] = EMPTY;
//
//			CurPos = { NextY, NextX };
//		}
//
//		CurSecound++;
//	}
//
//	return 0;
//}