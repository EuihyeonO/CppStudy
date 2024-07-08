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
//		for (int i = 1; i <= std::sqrt(CurNum); i++)
//		{
//			if (CurNum % i == 0)
//			{
//				if (isExist[i] == true)
//				{
//					Score[i]++;
//					Score[CurNum]--;
//				}
//
//				if (i != (CurNum / i) && isExist[CurNum / i] == true)
//				{
//					Score[CurNum / i]++;
//					Score[CurNum]--;
//				}
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