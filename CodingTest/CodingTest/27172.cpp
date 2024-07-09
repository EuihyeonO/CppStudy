//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
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
//	int PlayerSize = 0;
//	std::cin >> PlayerSize;
//
//	std::vector<int> PlayerNums(PlayerSize);
//	std::vector<bool> isExist(1000001);
//	std::vector<int> Score(1000001);
//	
//	for (int i = 0; i < PlayerSize; i++)
//	{
//		std::cin >> PlayerNums[i];
//		isExist[PlayerNums[i]] = true;
//	}
//
//	for (int i = 0; i < PlayerSize; i++)
//	{
//		int CurNum = PlayerNums[i];
//
//		for (int i = CurNum * 2; i < 1000001; i += CurNum)
//		{
//			if (isExist[i] == true)
//			{
//				Score[CurNum]++;
//				Score[i]--;
//			}
//		}
//	}
//
//	for (int i = 0; i < PlayerSize; i++)
//	{
//		std::cout << Score[PlayerNums[i]] << " ";
//	}
//
//	return 0;
//}