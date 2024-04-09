//#include <iostream>
//#include <vector>
//#include <list>
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
//	std::vector<int> Nums(10001, -1);
//	Nums[1] = 0;
//
//	for (int i = 2; i * i <= 10000; i++)
//	{
//		if (Nums[i] != -1)
//		{
//			continue;
//		}
//
//		for (int j = i + i; j <= 10000; j += i)
//		{
//			Nums[j] = 0;
//		}
//	}
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<std::pair<int, int>> Answers(NumOfTestCase);
//
//	for (int Case = 0; Case < NumOfTestCase; Case++)
//	{
//		int TargetNumber = 0;
//		std::cin >> TargetNumber;
//
//		int Half = TargetNumber / 2;
//		
//		for (int i = 0; i < Half; i++)
//		{
//			if (Nums[Half - i] == -1 && Nums[Half + i] == -1)
//			{
//				Answers[Case] = { Half - i, Half + i };
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		std::cout << Answers[i].first << " " << Answers[i].second << "\n";
//	}
//
//	return 0;
//}