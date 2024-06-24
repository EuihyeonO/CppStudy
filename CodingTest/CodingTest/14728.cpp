//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Subject
//{
//	int TimeCost = 0;
//	int Score = 0;
//};
//
//int main()
//{
//	Init();
//
//	int NumSubject = 0;
//	int MaxTime = 0;
//
//	std::cin >> NumSubject >> MaxTime;
//
//	std::vector<Subject> Subjects(NumSubject + 1);
//	for (int i = 1; i <= NumSubject; i++)
//	{
//		std::cin >> Subjects[i].TimeCost >> Subjects[i].Score;
//	}
//
//	std::vector<std::vector<int>> DP(NumSubject + 1, std::vector<int>(MaxTime + 1, 0));
//
//	for (int i = 1; i <= NumSubject; i++)
//	{
//		for (int j = 0; j <= MaxTime; j++)
//		{
//			if (j < Subjects[i].TimeCost)
//			{
//				DP[i][j] = DP[i - 1][j];
//			}
//			else
//			{
//				DP[i][j] = std::max(DP[i - 1][j], DP[i - 1][j - Subjects[i].TimeCost] + Subjects[i].Score);
//			}
//		}
//	}
//
//	std::cout << DP[NumSubject][MaxTime];
//
//	return 0;
//}