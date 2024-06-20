//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int GetSum(int _X, int _N)
//{
//	int Share = _N / _X;
//
//	return Share * _X * (Share + 1) / 2;
//}
//
//int main()
//{
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Answers(NumCase);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		int N = 0;
//		std::cin >> N;
//
//		int MaxSum = 0;
//		int AnswerX = 0;
//
//		for (int i = 2; i <= N; i++)
//		{
//			int CurSum = GetSum(i, N);
//
//			if (CurSum > MaxSum)
//			{
//				AnswerX = i;
//				MaxSum = CurSum;
//			}
//		}
//
//		Answers[Case] = AnswerX;
//	}
//
//	for (int i = 0; i < NumCase; i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}