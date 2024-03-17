//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
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
//	int NumOfPlant = 0;
//	int NumOfMove = 0;
//	std::cin >> NumOfPlant >> NumOfMove;
//
//	std::string Moves;
//	Moves.resize(NumOfMove);
//	std::cin >> Moves;
//
//	std::pair<int, int> FrogPos;
//	std::set<std::pair<int, int>> Plants;
//
//	for (int i = 0; i < NumOfPlant; i++)
//	{
//		std::pair<int, int> Input;
//
//		std::cin >> Input.first;
//		std::cin >> Input.second;
//
//		Plants.insert(Input);
//
//		if (i == 0)
//		{
//			FrogPos = Input;
//		}
//	}
//	
//	std::set<std::pair<int, int>>::iterator FrogIter = Plants.find(FrogPos);
//
//	//Plants.sort();
//
//	for (int i = 0; i < Moves.size(); i++)
//	{
//		if (Moves[i] == 'A')
//		{
//			std::set<std::pair<int, int>>::iterator FindIter = FrogIter;
//			FindIter++;
//
//			while (FindIter != Plants.end())
//			{
//				std::pair<int, int> CurPos = *FindIter;
//
//				if ((CurPos.first - FrogPos.first) == (CurPos.second - FrogPos.second) && (CurPos.first - FrogPos.first) > 0)
//				{
//					Plants.erase(FrogIter);
//					FrogIter = FindIter;
//					FrogPos = *FindIter;
//					break;
//				}
//
//				FindIter++;
//			}			
//		}
//		else if (Moves[i] == 'C' && FrogIter != Plants.begin())
//		{
//			std::set<std::pair<int, int>>::iterator FindIter = FrogIter;
//
//			FindIter--;
//
//			while (true)
//			{
//				std::pair<int, int> CurPos = *FindIter;
//
//				if ((FrogPos.first - CurPos.first) == (CurPos.second - FrogPos.second) && (FrogPos.first - CurPos.first > 0))
//				{
//					Plants.erase(FrogIter);
//					FrogIter = FindIter;
//					FrogPos = *FindIter;
//					break;
//				}
//
//				if (FindIter == Plants.begin())
//				{
//					break;
//				}
//
//				FindIter--;
//			}
//		}
//		else if (Moves[i] == 'B')
//		{
//			std::set<std::pair<int, int>>::iterator FindIter = FrogIter;
//			FindIter++;
//
//			while (FindIter != Plants.end())
//			{
//				std::pair<int, int> CurPos = *FindIter;
//				
//				if((CurPos.first - FrogPos.first) == (FrogPos.second - CurPos.second) && (CurPos.first - FrogPos.first > 0))
//				{
//					Plants.erase(FrogIter);
//					FrogIter = FindIter;
//					FrogPos = *FindIter;
//					break;
//				}
//
//				FindIter++;
//			}
//		}
//		else if (Moves[i] == 'D' && FrogIter != Plants.begin())
//		{
//			std::set<std::pair<int, int>>::iterator FindIter = FrogIter;
//			FindIter--;
//
//			while (true)
//			{
//				std::pair<int, int> CurPos = *FindIter;
//
//				if ((FrogPos.first - CurPos.first) == (FrogPos.second - CurPos.second) &&(FrogPos.first - CurPos.first > 0))
//				{
//					Plants.erase(FrogIter);
//					FrogIter = FindIter;
//					FrogPos = *FindIter;
//					break;
//				}
//				
//				if (FindIter == Plants.begin())
//				{
//					break;
//				}
//
//				FindIter--;
//			}
//		}
//	}
//
//	std::cout << FrogPos.first << " " << FrogPos.second;
//
//	return 0;
//}