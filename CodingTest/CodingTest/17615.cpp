//#include <iostream>
//#include <vector>
//#include <queue>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int Count(const std::vector<char>& _Balls, char _MoveChar, bool _ToLeft)
//{
//	std::vector<char> Ball;
//
//	Ball.reserve(_Balls.size());
//	for (int i = 0; i < _Balls.size(); i++)
//	{
//		Ball.push_back(_Balls[i]);
//	}
//
//	std::queue<int> TargetIndexs;
//
//	char PrevChar = '\0';
//	int StartIndex = 0;
//	int EndIndex = 0;
//
//	if (_ToLeft == true)
//	{
//		PrevChar = Ball[0];
//		StartIndex = 1;
//		EndIndex = Ball.size();
//
//		if (PrevChar != _MoveChar)
//		{
//			TargetIndexs.push(0);
//		}
//	}
//	else
//	{
//		StartIndex = Ball.size() - 2;
//		PrevChar = Ball[StartIndex + 1];
//		EndIndex = 0;
//
//		if (PrevChar != _MoveChar)
//		{
//			TargetIndexs.push(StartIndex + 1);
//		}
//	}
//
//	int Count = 0;
//
//	if (_ToLeft == true)
//	{
//		for (int i = StartIndex; i < EndIndex; i++)
//		{
//			if (Ball[i] != _MoveChar)
//			{
//				TargetIndexs.push(i);
//			}
//			if (PrevChar != Ball[i] && Ball[i] == _MoveChar)
//			{
//				std::swap(Ball[TargetIndexs.front()], Ball[i]);
//
//				TargetIndexs.pop();
//				TargetIndexs.push(i);
//				Count++;
//			}
//			PrevChar = Ball[i];
//		}
//	}
//	else
//	{
//		for (int i = StartIndex; i >= EndIndex; i--)
//		{
//			if (Ball[i] != _MoveChar)
//			{
//				TargetIndexs.push(i);
//			}
//	
//			if (PrevChar != Ball[i] && Ball[i] == _MoveChar)
//			{
//				std::swap(Ball[TargetIndexs.front()], Ball[i]);
//
//				TargetIndexs.pop();
//				TargetIndexs.push(i);
//	
//				Count++;
//			}
//	
//			PrevChar = Ball[i];
//		}
//	}
//
//	return Count;
//}
//
//int main()
//{
//	Init();
//
//	int NumOfBall = 0;
//	std::cin >> NumOfBall;
//
//	std::vector<char> Balls(NumOfBall, '\0');
//	for (int i = 0; i < NumOfBall; i++)
//	{
//		std::cin >> Balls[i];
//	}
//
//	std::vector<int> Answer;
//	Answer.reserve(4);
//
//	Answer.push_back(Count(Balls, 'B', true));
//	Answer.push_back(Count(Balls, 'B', false));
//	Answer.push_back(Count(Balls, 'R', true));
//	Answer.push_back(Count(Balls, 'R', false));
//
//	int Output = *std::min_element(Answer.begin(), Answer.end());
//	std::cout << Output;
//
//	return 0;
//}