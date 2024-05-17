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
//	int MapSize = 0;
//	int Days = 0;
//	std::cin >> MapSize >> Days;
//
//	std::vector<std::vector<int>> Map(MapSize, std::vector<int>(MapSize, 1));
//	std::vector<int> GrowthInfo(2 * MapSize);
//
//	for (int i = 0; i < Days; i++)
//	{
//		int Index = 0;
//
//		for (int i = 0; i <= 2; i++)
//		{
//			int Count = 0;
//			std::cin >> Count;
//
//			GrowthInfo[Index] += i;
//			GrowthInfo[Index + Count] -= i;
//
//			Index += Count;
//		}
//	}
//
//	int Count = 0;
//	int Sum = 0;
//
//	for (int i = MapSize - 1; i > 0; i--)
//	{
//		Sum += GrowthInfo[Count];
//		Map[i][0] += Sum;
//		Count++;
//	}
//
//	for (int i = 0; i < MapSize; i++)
//	{
//		Sum += GrowthInfo[Count];
//		Map[0][i] += Sum;
//		Count++;
//	}
//
//	for (int i = 0; i < MapSize; i++)
//	{
//		for (int j = 0; j < MapSize; j++)
//		{
//			if (i >= 1 && j >= 1)
//			{
//				std::cout << Map[0][j] << " ";
//			}
//			else
//			{
//				std::cout << Map[i][j] << " ";
//			}
//		}
//
//		std::cout << "\n";
//	}
//
//	return 0;
//}