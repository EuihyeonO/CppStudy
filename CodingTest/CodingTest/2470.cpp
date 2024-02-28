//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <climits>
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
//	int Num = 0;
//
//	std::cin >> Num;
//
//	std::vector<int> Values;
//	Values.resize(Num);
//	
//	for (int i = 0; i < Num; i++)
//	{
//		std::cin >> Values[i];
//	}
//
//	std::sort(Values.begin(), Values.end());
//
//	int Left = 0;
//	int Right = Values.size() - 1;
//
//	int BestValue = abs(Values[Left] + Values[Right]);
//	int BestLeft = Left;
//	int BestRight = Right;
//
//	while (Left < Right)
//	{
//		if (Left >= Right - 1)
//		{
//			break;
//		}
//
//		int NextValue1 = Values[Left + 1] + Values[Right];
//		int NextValue2 = Values[Left] + Values[Right - 1];
//
//		NextValue1 = abs(NextValue1);
//		NextValue2 = abs(NextValue2);
//
//		int BetterValue = 0;
//
//		if (NextValue1 < NextValue2)
//		{
//			BetterValue = NextValue1;
//			Left++;
//		}
//		else
//		{
//			BetterValue = NextValue2;
//			Right--;
//		}
//
//		if (BestValue > BetterValue)
//		{
//			BestValue = BetterValue;
//			BestLeft = Left;
//			BestRight = Right;
//		}
//	}
//
//	std::cout << Values[BestLeft] << " " << Values[BestRight];
//
//	return 0;
//}