//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int NumTestCase = 0;
//	std::cin >> NumTestCase;
//
//	std::vector<int> Answers(NumTestCase);
//
//	for (int Case = 0; Case < NumTestCase; Case++)
//	{
//		int NumBook = 0;
//		std::cin >> NumBook;
//
//		std::vector<int> Pages(NumBook);
//		for (int i = 0; i < NumBook; i++)
//		{
//			std::cin >> Pages[i];
//		}
//
//		int Answer = Pages[NumBook - 1];
//
//		int MaxPage = 0;
//		for (int i = 0; i < NumBook - 1; i++)
//		{
//			MaxPage = std::max(MaxPage, Pages[i]);
//		}
//
//		Answer += MaxPage;
//		Answers[Case] = Answer;
//	}
//
//	for (int i = 0; i < NumTestCase; i++)
//	{
//		std::cout << Answers[i] << std::endl;
//	}
//
//	return 0;
//}