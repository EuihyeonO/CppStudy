//#include <iostream>
//#include <vector>
//#include <map>
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
//	int NumBooks = 0;
//	int NumSelling = 0;
//
//	std::cin >> NumBooks >> NumSelling;
//
//	std::map<int, std::vector<int>> Books;
//
//	for (int i = 0; i < NumBooks; i++)
//	{
//		int Price = 0;
//		int Genre = 0;
//
//		std::cin >> Price >> Genre;
//
//		Books[Genre].push_back(Price);
//	}
//
//	for (std::pair<const int, std::vector<int>>& _Pair : Books)
//	{
//		std::vector<int>& Vector = _Pair.second;
//		std::sort(Vector.begin(), Vector.end(), std::greater<int>());
//
//		for (int i = 1; i < Vector.size(); i++)
//		{
//			Vector[i] = Vector[i] + Vector[i - 1] + i * 2;
//		}
//	}
//
//	std::vector<std::vector<int>> DP(11, std::vector<int>(NumSelling + 1));
//
//	for (std::pair<const int, std::vector<int>>& _Pair : Books)
//	{
//		for (int i = 1; i <= NumSelling; i++)
//		{
//			for (int j = 0; j < std::min(i, (int)_Pair.second.size()); j++)
//			{
//				for (int k = 0; k < _Pair.first; k++)
//				{
//					if (i >= j + 1)
//					{
//						DP[_Pair.first][i] = std::max({DP[_Pair.first][i], DP[k][i - (j + 1)] + _Pair.second[j]});
//					}
//					else
//					{
//						DP[_Pair.first][i] = std::max({ DP[_Pair.first][i], _Pair.second[j] });
//					}
//				}
//			}
//		}
//	}
//
//	int Answer = 0;
//
//	for (int i = 0; i <= 10; i++)
//	{
//		Answer = std::max(Answer, DP[i][NumSelling]);
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}