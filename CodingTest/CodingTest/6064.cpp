//#include <iostream>
//#include <vector>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//int GetGCD(int _A, int _B)
//{
//	int Remain = 0;
//
//	while (_B > 0)
//	{
//		Remain = _A % _B;
//		_A = _B;
//		_B = Remain;
//	}
//
//	return _A;
//}
//
//int GetLCM(int _A, int _B)
//{
//	int LCM = _A * _B / GetGCD(_A, _B);
//
//	return LCM;
//}
//
//int main()
//{
//	Init();
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<int> Answer(NumCase);
//
//	for (int i = 0; i < NumCase; i++)
//	{
//		int M = 0;
//		int N = 0;
//		int X = 0;
//		int Y = 0;
//
//		std::cin >> M >> N >> X >> Y;
//
//		int MaxYears = GetLCM(M, N);
//
//		int CurYears = X;
//
//		while (CurYears <= MaxYears)
//		{
//			int RemainX = CurYears % M;
//			int RemainY = CurYears % N;
//
//			if (RemainX == 0)
//			{
//				RemainX = M;
//			}
//
//			if (RemainY == 0)
//			{
//				RemainY = N;
//			}
//
//			if (RemainX == X && RemainY == Y)
//			{
//				break;
//			}
//
//			CurYears += M;
//		}
//
//		if (CurYears <= MaxYears)
//		{
//			Answer[i] = CurYears;
//		}
//		else
//		{
//			Answer[i] = -1;
//		}
//	}
//
//	for (int i = 0; i < Answer.size(); i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}