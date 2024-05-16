//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
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
//	std::vector<std::pair<int, int>> Answers;
//
//	int WholeSize = 0;
//	int NumLego = 0;
//
//	while(true)
//	{
//		std::cin >> WholeSize >> NumLego;
//
//		if (std::cin.eof() == true)
//		{
//			break;
//		}
//
//		std::vector<int> Legos(NumLego);
//		for (int i = 0; i < NumLego; i++)
//		{
//			std::cin >> Legos[i];
//		}
//		  
//		std::sort(Legos.begin(), Legos.end());
//
//		int Left = 0;
//		int Right = NumLego - 1;
//
//		std::pair<int, int> Answer = { -1, -1 };
//
//		while (Left < Right)
//		{
//			int Sum = Legos[Left] + Legos[Right];
//
//			if (Sum > WholeSize * 10000000)
//			{
//				Right--;
//			}
//			else if (Sum < WholeSize * 10000000)
//			{
//				Left++;
//			}
//			else
//			{
//				Answer = { Legos[Left], Legos[Right] };
//				break;
//			}
//		}
//
//		Answers.push_back(Answer);
//	}
//
//	for(int i = 0; i < Answers.size(); i++)
//	{
//		if (Answers[i].first == -1)
//		{
//			std::cout << "danger" << "\n";
//		}
//		else
//		{
//			std::cout << "yes " << Answers[i].first << " " << Answers[i].second << "\n";
//		}
//	}
//
//	return 0;
//}