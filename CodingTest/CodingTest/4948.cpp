//#include <iostream>
//#include <vector>
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
//	std::vector<bool> isPrimeNumber(123456 * 2 + 1, true);
//
//	isPrimeNumber[1] = false;
//
// 	for (int i = 2; i <= std::sqrt(123456 * 2); i++)
//	{
//		if (isPrimeNumber[i] == false)
//		{
//			continue;
//		}
//
//		for (int j = i * 2; j <= 123456 * 2; j += i)
//		{
//			isPrimeNumber[j] = false;
//		}
//	}
//
//	std::vector<int> Answers;
//	Answers.reserve(10000);
//
//	while(true)
//	{
//		int CurInput = 0;
//		std::cin >> CurInput;
//
//		if (CurInput == 0)
//		{
//			break;
//		}
//
//		int Start = CurInput;
//		int End = CurInput * 2;
//
//		int Count = 0;
//
//		for (int i = Start + 1; i <= End; i++)
//		{
//			if (isPrimeNumber[i] == true)
//			{
//				Count++;
//			}
//		}
//
//		Answers.push_back(Count);
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}