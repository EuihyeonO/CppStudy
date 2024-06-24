//#include <iostream>
//#include <vector>
//#include <set>
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
//	int NumSize = 0;
//	std::cin >> NumSize;
//
//	std::vector<int> Nums(NumSize);
//	for (int i = 0; i < NumSize; i++)
//	{
//		std::cin >> Nums[i];
//	}
//
//	int Count = 0;
//
//	std::sort(Nums.begin(), Nums.end());
//
//	for (int i = 0; i < NumSize; i++)
//	{
//		int Left = 0;
//		int Right = NumSize - 1;
//		int Sum = 0;
//
//		while (Left < Right)
//		{
//			Sum = Nums[Left] + Nums[Right];
//
//			if (Sum > Nums[i])
//			{
//				Right--;
//			}
//			else if (Sum < Nums[i])
//			{
//				Left++;
//			}
//			else
//			{
//				if (Left != i && Right != i)
//				{
//					Count++;
//					break;
//				}
//				else if (Left == i)
//				{
//					Left++;
//				}
//				else if (Right == i)
//				{
//					Right--;
//				}
//			}
//		}
//	}
//
//	std::cout << Count;
//
//	return 0;
//}