//#include <iostream>
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
//	int NumOfCase = 0;
//	std::cin >> NumOfCase;
//
//	for (int i = 0; i < NumOfCase; i++)
//	{
//		std::string InputStr;
//		std::cin >> InputStr;
//
//		int SameCount = 0;
//		std::cin >> SameCount;
//
//		int Left = -1;
//		int Right = -1;
//
//		int Count = 0;
//
//		int MinLength = INT_MAX;
//		int MaxLength = INT_MIN;
//
//		for (int j = 0; j < 26; j++)
//		{
//			char CurChar = j + 'a';
//
//			for (int k = 0; k < InputStr.size(); k++)
//			{
//				if (InputStr[k] == CurChar)
//				{
//					if (Left == -1)
//					{
//						Left = k;
//					}
//
//					Right = k;
//					Count++;
//				}
//
//				if (Count == SameCount)
//				{
//					MinLength = std::min(MinLength, Right - Left + 1);
//					MaxLength = std::max(MaxLength, Right - Left + 1);
//					
//					while (Left <= Right)
//					{
//						Left++;
//
//						if (InputStr[Left] == CurChar)
//						{
//							break;
//						}
//					}
//
//					Count--;
//				}
//
//			}
//
//		}
//
//	}
//		
//
//	return 0;
//}