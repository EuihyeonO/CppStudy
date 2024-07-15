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
//struct ABSGreater
//{
//	bool operator()(int _Left, int _Right)
//	{
//		if (abs(_Left) == abs(_Right))
//		{
//			return _Left > _Right;
//		}
//
//		return abs(_Left) > abs(_Right);
//	}
//};
//
//int main()
//{
//	Init();
//
//	std::priority_queue<int, std::vector<int>, ABSGreater> PQ;
//
//	int InputSize = 0;
//	std::cin >> InputSize;
//
//	std::vector<int> Answers;
//	Answers.reserve(InputSize);
//
//	for (int i = 0; i < InputSize; i++)
//	{
//		int CurInput = 0;
//		std::cin >> CurInput;
//
//		if (CurInput != 0)
//		{
//			PQ.push(CurInput);
//		}
//		else
//		{
//			if (PQ.size() <= 0)
//			{
//				Answers.push_back(0);
//			}
//			else
//			{
//				Answers.push_back(PQ.top());
//				PQ.pop();
//			}
//		}
//	}
//
//	for (int Answer : Answers)
//	{
//		std::cout << Answer << "\n";
//	}
//
//	return 0;
//}