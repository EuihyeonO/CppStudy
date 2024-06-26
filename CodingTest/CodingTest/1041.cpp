//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
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
//	//AB AC AD AE BC BD BF CE CF DE DF EF
//	//ABC ABD ACE ADE BCF BDF CEF DEF
//
//	int Size = 0;
//	std::cin >> Size;
//
//	std::vector<long long> Dice(6, 0);
//	for (int i = 0; i < 6; i++)
//	{
//		std::cin >> Dice[i];
//	}
//
//	if (Size == 1)
//	{
//		long long Answer = 0;
//
//		for (int i = 0; i < 6; i++)
//		{
//			Answer += Dice[i];
//		}
//
//		Answer -= *std::max_element(Dice.begin(), Dice.end());
//
//		std::cout << Answer;
//
//		return 0;
//	}
//
//	long long OneSum = *std::min_element(Dice.begin(), Dice.end());
//
//	long long TwoSum = LLONG_MAX;
//	TwoSum = std::min(TwoSum, Dice[0] + Dice[1]);
//	TwoSum = std::min(TwoSum, Dice[0] + Dice[2]);
//	TwoSum = std::min(TwoSum, Dice[0] + Dice[3]);
//	TwoSum = std::min(TwoSum, Dice[0] + Dice[4]);
//	TwoSum = std::min(TwoSum, Dice[1] + Dice[2]);
//	TwoSum = std::min(TwoSum, Dice[1] + Dice[3]);
//	TwoSum = std::min(TwoSum, Dice[1] + Dice[5]);
//	TwoSum = std::min(TwoSum, Dice[2] + Dice[4]);
//	TwoSum = std::min(TwoSum, Dice[2] + Dice[5]);
//	TwoSum = std::min(TwoSum, Dice[3] + Dice[4]);
//	TwoSum = std::min(TwoSum, Dice[3] + Dice[5]);
//	TwoSum = std::min(TwoSum, Dice[4] + Dice[5]);
//
//	//ABC ABD ACE ADE BCF BDF CEF DEF
//	long long ThreeSum = LLONG_MAX;
//	ThreeSum = std::min(ThreeSum, Dice[0] + Dice[1] + Dice[2]);
//	ThreeSum = std::min(ThreeSum, Dice[0] + Dice[1] + Dice[3]);
//	ThreeSum = std::min(ThreeSum, Dice[0] + Dice[2] + Dice[4]);
//	ThreeSum = std::min(ThreeSum, Dice[0] + Dice[3] + Dice[4]);
//	ThreeSum = std::min(ThreeSum, Dice[1] + Dice[2] + Dice[5]);
//	ThreeSum = std::min(ThreeSum, Dice[1] + Dice[3] + Dice[5]);
//	ThreeSum = std::min(ThreeSum, Dice[2] + Dice[4] + Dice[5]);
//	ThreeSum = std::min(ThreeSum, Dice[3] + Dice[4] + Dice[5]);
//
//	long long Answer = 0;
//	
//	Answer += ThreeSum * 4;
//	Answer += TwoSum * 4;
//
//	Answer += TwoSum * (Size - 2) * 8;
//	Answer += OneSum * (Size - 2) * 4;
//
//	Answer += OneSum * (Size - 2) * (Size - 2) * 5;
//	
//	std::cout << Answer;
//
//	return 0;
//}