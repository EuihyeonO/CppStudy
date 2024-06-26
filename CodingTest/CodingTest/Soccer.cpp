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
//int main()
//{
//	Init();
//
//	int NumCase = 0;
//	std::cin >> NumCase;
//
//	for (int Case = 0; Case < NumCase; Case++)
//	{
//		std::pair<int, int> BeforeScore = { 0, 0 };
//		std::pair<int, int> AfterScore = { 0, 0 };
//
//		std::cin >> BeforeScore.first >> BeforeScore.second;
//		std::cin >> AfterScore.first >> AfterScore.second;
//
//		if ((BeforeScore.first < BeforeScore.second) == (AfterScore.first < AfterScore.second))
//		{
//			std::cout << "YES" << "\n";
//		}
//		else
//		{
//			std::cout << "NO" << "\n";
//		}
//
//	}
//
//	return 0;
//}