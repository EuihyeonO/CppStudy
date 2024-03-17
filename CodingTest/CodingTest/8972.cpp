//#include <iostream>
//#include <vector>
//#include <set>
//#include <cmath>
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
//	int Height = 0;
//	int Width = 0;
//	
//	std::cin >> Height >> Width;
//	
//	std::set<std::pair<int, int>> MadArduinoes;
//	std::pair<int, int> MyArduinoes;
//	
//	std::vector<std::vector<char>> Board(Height, std::vector<char>(Width));
//	for (int i = 0; i < Height; i++)
//	{
//		for (int j = 0; j < Width; j++)
//		{
//			std::cin >> Board[i][j];
//			
//			if (Board[i][j] == 'R')
//			{
//				MadArduinoes.insert({ i, j });
//			}
//			else if (Board[i][j] == 'I')
//			{
//				MyArduinoes = { i, j };
//			}
//		}
//	}
//
//	std::string Commands;
//	std::cin >> Commands;
//
//	int CommandSize = Commands.size();
//
//	std::vector<std::pair<int, int>> MoveByCommand = { {1, -1},{1, 0}, {1, 1}, {0, -1}, {0, 0}, {0, 1}, {-1, -1}, {-1, 0}, {-1, 1} };
//
//	bool isBreak = false;
//	int BreakIndex = 0;
//
//	for (int i = 0; i < CommandSize; i++)
//	{
//		int CurCommand = Commands[i] - '0' - 1;
//
//		std::pair<int, int> NextPos = { MyArduinoes.first + MoveByCommand[CurCommand].first, MyArduinoes.second + MoveByCommand[CurCommand].second };
//		if (Board[NextPos.first][NextPos.second] == 'R')
//		{
//			BreakIndex = i;
//			isBreak = true;
//			break;
//		}
//
//		Board[MyArduinoes.first][MyArduinoes.second] = '.';
//		Board[NextPos.first][NextPos.second] = 'I';
//
//		MyArduinoes = NextPos;
//
//		std::set<std::pair<int, int>>::iterator CurIter = MadArduinoes.begin();
//		std::set<std::pair<int, int>>::iterator EndIter	= MadArduinoes.end();
//
//		while (CurIter != EndIter)
//		{
//			Board[CurIter->first][CurIter->second] = '.';
//			CurIter++;
//		}
//
//		CurIter = MadArduinoes.begin();
//
//		//¿Ãµø
//		std::set<std::pair<int, int>> NextMadArduinoes;
//		while (CurIter != EndIter)
//		{
//			std::pair<int, int> CurMadArduinoesPos = *CurIter;
//			std::pair<int, int> NextMadArduinoesPos = { 0, 0 };
//			
//			int YSubtract = MyArduinoes.first - CurMadArduinoesPos.first;
//			int XSubtract = MyArduinoes.second - CurMadArduinoesPos.second;
//
//			if (YSubtract != 0)
//			{
//				NextPos.first = { CurMadArduinoesPos.first + YSubtract / std::abs(YSubtract) };
//			}
//			else
//			{
//				NextPos.first = { CurMadArduinoesPos.first };
//
//			}
//
//			if (XSubtract != 0)
//			{
//				NextPos.second = { CurMadArduinoesPos.second + XSubtract / std::abs(XSubtract) };
//			}
//			else
//			{
//				NextPos.second = { CurMadArduinoesPos.second };
//			}
//
//			if (Board[NextPos.first][NextPos.second] == 'I')
//			{
//				BreakIndex = i;
//				isBreak = true;
//				break;
//			}
//
//			std::pair<std::set<std::pair<int, int>>::iterator, bool> ReturnPair = NextMadArduinoes.insert(NextPos);
//
//			if (ReturnPair.second == false)
//			{
//				Board[ReturnPair.first->first][ReturnPair.first->second] = 'R';
//			}
//
//			CurIter++;
//		}
//
//		CurIter = NextMadArduinoes.begin();
//		EndIter = NextMadArduinoes.end();
//
//		while (CurIter != EndIter)
//		{
//			if (Board[CurIter->first][CurIter->second] == 'R')
//			{
//				Board[CurIter->first][CurIter->second] = '.';
//				CurIter = NextMadArduinoes.erase(CurIter);
//			}
//			else
//			{
//				Board[CurIter->first][CurIter->second] = 'R';
//				CurIter++;
//			}
//		}
//
//		if (isBreak == true)
//		{
//			break;
//		}
//
//		MadArduinoes.clear();
//		MadArduinoes = std::move(NextMadArduinoes);
//	}
//
//	if (isBreak == true)
//	{
//		std::cout << "kraj " << BreakIndex + 1;
//	}
//	else
//	{
//		for (int i = 0; i < Height; i++)
//		{
//			for (int j = 0; j < Width; j++)
//			{
//				std::cout << Board[i][j];
//			}
//
//			std::cout << '\n';
//		}
//	}
//
//	return 0;
//}