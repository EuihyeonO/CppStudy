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
//std::vector<int> Nums;
//
//void FindPrimeNumber()
//{
//	for (int i = 2; i * i <= 1299709; i++)
//	{
//		if (Nums[i] == 0)
//		{
//			for (int j = i * i; j <= 1299709; j += i)
//			{
//				Nums[j] = -1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	Nums.resize(1299710, 0);
//	Nums[0] = -1;
//	Nums[1] = -1;
//
//	FindPrimeNumber();
//	
//	int NumOfTestcase = 0;
//	std::cin >> NumOfTestcase;
//
//	std::vector<int> Answers(NumOfTestcase);
//
//	for(int Case = 0; Case < NumOfTestcase; Case++)
//	{
//		int K = 0;
//		std::cin >> K;
//
//		if (Nums[K] == 0)
//		{
//			Answers.push_back(0);
//			continue;
//		}
//
//		int PrevPrimeNumberIndex = 0;
//		int NextPrimeNumberIndex = 0;
//		
//		for (int i = K - 1; i >= 0; i--)
//		{
//			if (Nums[i] == 0)
//			{
//				PrevPrimeNumberIndex = i;
//				break;
//			}
//		}
//
//		for (int i = K + 1; i <= 1299709; i++)
//		{
//			if (Nums[i] == 0)
//			{
//				NextPrimeNumberIndex = i;
//				break;
//			}
//		}
//
//		Answers[Case] = (NextPrimeNumberIndex - PrevPrimeNumberIndex);
//	}
//
//	for (int i = 0; i < NumOfTestcase; i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}