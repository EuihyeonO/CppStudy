//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
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
//	int Target = 0;
//	std::cin >> Target;
//
//	std::vector<bool> isPrimeNumber(Target + 1, true);
//
//	std::vector<int> PrimeNumbers;
//	PrimeNumbers.reserve(Target);
//
//	for (int i = 2; i <= std::sqrt(Target); i++)
//	{
//		if (isPrimeNumber[i] == false)
//		{
//			continue;
//		}
//
//		for (int j = i * 2; j <= Target; j += i)
//		{
//			isPrimeNumber[j] = false;
//		}
//	}
//
//	for (int i = 2; i <= Target; i++)
//	{
//		if (isPrimeNumber[i] == true)
//		{
//			PrimeNumbers.push_back(i);
//		}
//	}
//
//	int Left = 0;
//	int Right = 0;
//
//	int Sum = PrimeNumbers[0];
//	int Answer = 0;
//
//	while (Left < PrimeNumbers.size() && Right < PrimeNumbers.size())
//	{
//		if (PrimeNumbers[Left] > Target)
//		{
//			break;
//		}
//
//		if (Sum == Target)
//		{
//			Answer++;
//			
//			Sum -= PrimeNumbers[Left];
//			Left++;
//		}
//		else if (Sum > Target)
//		{
//			Sum -= PrimeNumbers[Left];
//			Left++;
//		}
//		else if (Sum < Target)
//		{
//			Right++;
//			
//			if (Right < PrimeNumbers.size())
//			{
//				Sum += PrimeNumbers[Right];
//			}
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}