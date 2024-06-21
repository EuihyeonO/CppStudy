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
//int main()
//{
//	Init();
//
//	std::string Str1;
//	std::string Str2;
//
//	std::cin >> Str1 >> Str2;
//
//	if (Str1.size() < Str2.size())
//	{
//		std::swap(Str1, Str2);
//	}
//
//	std::vector<std::vector<int>> Count(Str1.size(), std::vector<int>(Str2.size(), 0));
//
//	int MaxCount = 0;
//
//	for (int i = 0; i < Str1.size(); i++)
//	{
//		for (int j = 0; j < Str2.size(); j++)
//		{
//			if (Str2[j] == Str1[i])
//			{
//				if (i == 0 || j == 0)
//				{
//					Count[i][j] = 1;
//				}
//				else
//				{
//					Count[i][j] = Count[i - 1][j - 1] + 1;
//				}
//
//				MaxCount = std::max(MaxCount, Count[i][j]);
//			}
//		}
//	}
//
//	std::cout << MaxCount;
//
//	return 0;
//}