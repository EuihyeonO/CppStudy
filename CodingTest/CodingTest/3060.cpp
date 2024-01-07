//#include <iostream>
//#include <vector>
//#include <iterator>
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
//	int CaseNum = 0;
//	std::cin >> CaseNum;
//
//	std::vector<int> Answers;
//	Answers.reserve(CaseNum);
//
//	for(int Case = 0; Case < CaseNum; Case++)
//	{
//		int FeedAmount = 0;
//		std::vector<long long> FeedPerPig(6, 0);
//
//		std::cin >> FeedAmount;
//		for (int i = 0; i < 6; i++)
//		{
//			std::cin >> FeedPerPig[i];
//		}
//
//		std::vector<long long> NextFeedPerPig(6, 0);
//		long long TotalFeed = 0;
//		int Day = 1;
//
//		while (true)
//		{
//			for (int i = 0; i < 6; i++)
//			{
//				TotalFeed += FeedPerPig[i];
//			}
//
//			if (TotalFeed > FeedAmount)
//			{
//				break;
//			}
//
//			TotalFeed = 0;
//
//			
//			for (int i = 0; i < 6; i++)
//			{
//				int Left = i - 1;
//				int Right = i + 1;
//				int Faced = i + 3;
//				
//				if (Left < 0)
//				{
//					Left = 5;
//				}
//				else if (Right >= 6)
//				{
//					Right = 0;
//				}
//
//				if (Faced >= 6)
//				{
//					Faced -= 6;
//				}
//
//				NextFeedPerPig[i] = FeedPerPig[i] + FeedPerPig[Left] + FeedPerPig[Right] + FeedPerPig[Faced];
//			}
// 
//			FeedPerPig = NextFeedPerPig;
//
//			Day++;
//		}
//
//		Answers.push_back(Day);
//	}
//
//	std::copy(Answers.begin(), Answers.end(), std::ostream_iterator<int>(std::cout, "\n"));
//
//	return 0;
//}