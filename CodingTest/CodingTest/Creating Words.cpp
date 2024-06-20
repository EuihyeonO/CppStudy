//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	std::vector<std::pair<std::string, std::string>> Answers(NumCase);
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		std::string FirstStr;
//		std::string SecondStr;
//		
//		std::cin >> FirstStr >> SecondStr;
//
//		std::swap(FirstStr[0], SecondStr[0]);
//
//		Answers[Case].first = FirstStr;
//		Answers[Case].second = SecondStr;
//	}
//
//	for (int i = 0; i < NumCase; i++)
//	{
//		std::cout << Answers[i].first << " " << Answers[i].second << "\n";
//	}
//
//	return 0;
//}