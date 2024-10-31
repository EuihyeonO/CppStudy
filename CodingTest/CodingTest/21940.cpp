//#include <iostream>
//#include <vector>
//#include <queue>
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
//	int NumCity = 0, NumRoad = 0;
//	std::cin >> NumCity >> NumRoad;
//
//	std::vector<std::vector<int>> MinCost(NumCity, std::vector<int>(NumCity, INT_MAX / 2));
//	for (int i = 0; i < NumCity; i++)
//	{
//		MinCost[i][i] = 0;
//	}
//
//	std::vector<std::vector<int>> Link(NumCity);
//	for (int i = 0; i < NumRoad; i++)
//	{
//		int Start = 0, End = 0, Cost = 0;
//		std::cin >> Start >> End >> Cost;
//
//		Link[Start - 1].push_back(End - 1);
//
//		MinCost[Start - 1][End - 1] = Cost;
//	}
//
//	int NumFriend = 0;
//	std::cin >> NumFriend;
//
//	std::vector<int> LivedCity(NumFriend);
//	for (int i = 0; i < NumFriend; i++)
//	{
//		std::cin >> LivedCity[i];
//		--LivedCity[i];
//	}
//
//	for (int i = 0; i < NumCity; i++)
//	{
//		for (int j = 0; j < NumCity; j++)
//		{
//			for (int k = 0; k < NumCity; k++)
//			{
//				MinCost[j][k] = std::min(MinCost[j][k], MinCost[j][i] + MinCost[i][k]);
//			}
//		}
//	}
//	
//	int MinMaxCost = INT_MAX;
//	std::vector<int> AnswerCities;
//	AnswerCities.reserve(NumCity);
//
//	for (int i = 0; i < NumCity; i++)
//	{
//		int MaxCost = 0;
//
//		for (int j = 0; j < LivedCity.size(); j++)
//		{
//			int StartCity = LivedCity[j];
//			MaxCost = std::max(MaxCost, MinCost[StartCity][i] + MinCost[i][StartCity]);
//		}
//
//		if (MinMaxCost > MaxCost)
//		{
//			AnswerCities.clear();
//			AnswerCities.push_back(i);
//
//			MinMaxCost = MaxCost;
//		}
//		else if (MinMaxCost == MaxCost)
//		{
//			AnswerCities.push_back(i);
//		}
//	}
//
//	for (int Answer : AnswerCities)
//	{
//		std::cout << Answer + 1 << " ";
//	}
//
//	return 0;
//}