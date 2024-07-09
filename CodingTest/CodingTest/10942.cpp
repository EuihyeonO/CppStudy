//#include <iostream>
//#include <vector>
//#include <set>
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
//	int QuestionSize = 0;
//	std::cin >> QuestionSize;
//
//	std::vector<std::pair<int, int>> Questions(QuestionSize);
//	for (int i = 0; i < QuestionSize; i++)
//	{
//		std::cin >> Questions[i].first >> Questions[i].second;
//	}
//
//	std::vector<int> Answer(QuestionSize);
//	std::vector<std::vector<bool>> DP(NumSize, std::vector<bool>(NumSize, false));
//
//	for (int i = 0; i < QuestionSize; i++)
//	{
//		int Start = Questions[i].first - 1;
//		int End = Questions[i].second - 1;
//
//		if (DP[Start][End] == true)
//		{
//			Answer[i] = 1;
//			continue;
//		}
//
//		bool isPalindrome = true;
//
//		while (Start <= End)
//		{
//			if (Nums[Start] != Nums[End])
//			{
//				isPalindrome = false;
//				break;
//			}
//
//			Start++;
//			End--;
//		}
//
//		Answer[i] = static_cast<int>(isPalindrome);
//
//		Start = Questions[i].first - 1;
//		End = Questions[i].second - 1;
//
//		while (Start <= End)
//		{
//			DP[Start][End] = true;
//
//			Start++;
//			End--;
//		}
//	}
//
//	for (int i = 0; i < QuestionSize; i++)
//	{
//		std::cout << Answer[i] << "\n";
//	}
//
//	return 0;
//}