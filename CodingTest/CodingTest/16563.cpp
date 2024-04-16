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
//	int NumSize = 0;
//	std::cin >> NumSize;
//
//	std::vector<int> Nums(NumSize);
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Nums[i];
//	}
//
//	int MaxSize = std::sqrt(5000000);
//
//	std::vector<int> AllNumbers(MaxSize + 1, 0);
//	AllNumbers[1] = -1;
//
//	for (int i = 2; i <= MaxSize; i++)
//	{
//		if (AllNumbers[i] == -1)
//		{
//			continue;
//		}
//
//		for (int j = i * 2; j <= MaxSize; j += i)
//		{
//			AllNumbers[j] = -1;
//		}
//	}
//
//	std::vector<int> PrimeNumbers;
//	PrimeNumbers.reserve(MaxSize);
//
//	for (int i = 1; i <= MaxSize; i++)
//	{
//		if (AllNumbers[i] == 0)
//		{
//			PrimeNumbers.push_back(i);
//		}
//	}
//
//	std::vector<int> Answers;
//	Answers.reserve(NumSize);
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		int TargetNumber = Nums[i];
//
//		for (int j = 0; j < PrimeNumbers.size(); j++)
//		{
//			if (TargetNumber % PrimeNumbers[j] == 0)
//			{
//				TargetNumber /= PrimeNumbers[j];
//				Answers.push_back(PrimeNumbers[j]);
//				j--;
//			}
//
//			if (TargetNumber <= 1)
//			{
//				break;
//			}
//		}
//
//		if (TargetNumber > 1)
//		{
//			Answers.push_back(TargetNumber);
//		}
//
//		for (int j = 0; j < Answers.size(); j++)
//		{
//			std::cout << Answers[j] << " ";
//		}
//
//		std::cout << "\n";
//
//		Answers.clear();
//	}
//
//	return 0;
//}