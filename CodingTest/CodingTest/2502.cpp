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
//std::vector<int> Fibonacci;
//
//int Days = 0;
//int LastRiceCakes = 0;
//
//void DoFibonacci()
//{
//	Fibonacci[1] = 1;
//	Fibonacci[2] = 1;
//
//	for (int i = 3; i <= Days; i++)
//	{
//		Fibonacci[i] = Fibonacci[i- 1] + Fibonacci[i- 2];
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> Days >> LastRiceCakes;
//
//	Fibonacci.resize(Days + 1);
//	DoFibonacci();
//
//	for (int SecondRiceCakes = 1; SecondRiceCakes <= 100000; SecondRiceCakes++)
//	{
//		int FirstRiceCakes = 0;
//
//		if ((LastRiceCakes - Fibonacci[Days - 1] * SecondRiceCakes) % Fibonacci[Days - 2] == 0)
//		{
//			FirstRiceCakes = (LastRiceCakes - Fibonacci[Days - 1] * SecondRiceCakes) / Fibonacci[Days - 2];
//			
//			if (FirstRiceCakes <= SecondRiceCakes)
//			{
//				std::cout << FirstRiceCakes << "\n" << SecondRiceCakes;
//				return 0;
//			}
//		}
//	}
//
//	return 0;
//}