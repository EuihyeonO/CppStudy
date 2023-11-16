//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//int main()
//{
//	int NumOfObstacle = 0;
//	int Height = 0;
//
//	std::cin >> NumOfObstacle >> Height;
//
//	std::vector<int> Stalagmite; //석순
//	Stalagmite.reserve(NumOfObstacle);
//
//	std::vector<int> Stalactite; //종유석
//	Stalactite.reserve(NumOfObstacle);
//
//	for (int i = 0; i < NumOfObstacle; i++)
//	{
//		int Num = 0;
//		std::cin >> Num;
//
//		if (i % 2 == 0)
//		{
//			Stalagmite.push_back(Num);
//		}
//		else
//		{
//			Stalactite.push_back(Num);
//		}
//	}
//
//	//입력 끝.
//
//	sort(Stalagmite.begin(), Stalagmite.end());
//	sort(Stalactite.begin(), Stalactite.end());
//
//	std::pair<int, int> Answer;
//	Answer = { INT_MAX, 0 };
//
//	for (int i = 0; i < Height; i++)
//	{
//		//석순
//
//		int Start = 0;
//		int End = Stalagmite.size() - 1;
//
//		int First_Sg = INT_MAX;
//
//		while (Start <= End)
//		{
//			int Mid = (Start + End) / 2;
//			int Height_Sg = Height - Stalagmite[Mid];
//
//			if (Height_Sg <= i )
//			{
//				First_Sg = std::min(First_Sg, Mid);
//				End = Mid - 1;
//			}
//			else
//			{
//				Start = Mid + 1;
//			}
//		}
//
//		int Crack_Sg = 0;
//		if(First_Sg != INT_MAX)
//		{
//			Crack_Sg = Stalagmite.size() - First_Sg;
//		}
//
//
//		//종유석
//		Start = 0;
//		End = Stalactite.size() - 1;
//
//		int First_Sc = INT_MAX;
//
//		while (Start <= End)
//		{
//			int Mid = (Start + End) / 2;
//			int Height_Sc = Stalactite[Mid];
//
//			if (Height_Sc >= i + 1)
//			{
//				First_Sc = std::min(First_Sc, Mid);
//				End = Mid - 1;
//			}
//			else
//			{
//				Start = Mid + 1;
//			}
//		}
//
//		int Crack_Sc = 0;
//		if (First_Sc != INT_MAX)
//		{
//			Crack_Sc = Stalactite.size() - First_Sc;
//		}
//
//		if (Answer.first == Crack_Sc + Crack_Sg)
//		{
//			Answer.second++;
//		}
//		else if(Answer.first > Crack_Sc + Crack_Sg)
//		{
//			Answer.first = Crack_Sc + Crack_Sg;
//			Answer.second = 1;
//		}
//	}
//
//	std::cout << Answer.first << " " << Answer.second;
//
//	return 0;
//}