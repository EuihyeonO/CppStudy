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
//int main()
//{
//	Init();
//
//	int M = 0;
//	int N = 0;
//	
//	std::cin >> M >> N;
//
//	int Min = M - N + 1;
//	Min -= (Min % 5);
//	Min += 5;
//
//	int M5Count = 0;
//
//	while (Min <= M)
//	{
//		int CopyMin = Min;
//		
//		while (CopyMin % 5 == 0 && CopyMin > 0)
//		{
//			M5Count++;
//			CopyMin /= 5;
//		}
//
//		Min += 5;
//	}
//
//	N -= (N % 5);
//
//	int N5Count = 0;
//
//	while (N > 0)
//	{
//		int CopyN = N;
//
//		while (CopyN % 5 == 0 && CopyN > 0)
//		{
//			N5Count++;
//			CopyN /= 5;
//		}
//
//		N -= 5;
//	}
//
//	std::cout << M5Count - N5Count;
//
//	return 0;
//}