//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
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
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<std::vector<std::string>> Answers(NumCase);
//
//	for(int Case = 0; Case < NumCase; Case++)
//	{
//		int NumSize = 0;
//		std::cin >> NumSize;
//
//		std::vector<int> Nums(NumSize);
//		for (int i = 0; i < NumSize; i++)
//		{
//			std::cin >> Nums[i];
//		}
//
//		Answers[Case].reserve(NumSize / 2 + 1);
//
//		std::priority_queue<int> LeftNums;
//		std::priority_queue<int, std::vector<int>, std::greater<>> RightNums;
//
//		for (int i = 0; i < NumSize; i++)
//		{
//			if (LeftNums.size() == 0)
//			{
//				LeftNums.push(Nums[i]);
//			}
//			else
//			{
//				if (LeftNums.top() >= Nums[i])
//				{
//					LeftNums.push(Nums[i]);
//				}
//				else if (LeftNums.top() < Nums[i])
//				{
//					RightNums.push(Nums[i]);
//				}
//			}
//
//			if (i % 2 != 0)
//			{
//				if (LeftNums.size() > RightNums.size())
//				{
//					RightNums.push(LeftNums.top());
//					LeftNums.pop();
//				}
//				else if (LeftNums.size() < RightNums.size())
//				{
//					LeftNums.push(RightNums.top());
//					RightNums.pop();
//				}
//			}
//			else
//			{
//				if (LeftNums.size() < RightNums.size())
//				{
//					Answers[Case].push_back(std::to_string(RightNums.top()));
//				}
//				else
//				{
//					Answers[Case].push_back(std::to_string(LeftNums.top()));
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i].size() << "\n";
//
//		for (int j = 0; j < Answers[i].size(); j++)
//		{
//			std::cout << Answers[i][j];
//
//			if ((j + 1) % 10 == 0 || j == Answers[i].size() - 1)
//			{
//				std::cout << "\n";
//			}
//			else
//			{
//				std::cout << " ";
//			}
//		}
//	}
//
//	return 0;
//}