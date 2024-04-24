//#include <iostream>
//#include <vector>
//#include <string>
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
//	std::string StartStr;
//	std::cin >> StartStr;
//
//	std::string FlipStr;
//	FlipStr.resize(StartStr.size());
//
//	for (int i = 0; i < StartStr.size(); i++)
//	{
//		FlipStr[i] = StartStr[StartStr.size() - i - 1];
//	}
//
//	std::string TargetStr;
//	std::cin >> TargetStr;
//
//	bool isFlip = false;
//
//	int Left = 0;
//	int Right = TargetStr.size() - 1;
//
//	while (Left <= Right)
//	{
//		if (Right - Left + 1 == StartStr.size())
//		{
//			std::string CurStr = TargetStr.substr(Left, Right - Left + 1);
//
//			if (isFlip == true && CurStr == FlipStr)
//			{
//				std::cout << 1;
//				break;
//			}
//			else if (isFlip == false && CurStr == StartStr)
//			{
//				std::cout << 1;
//				break;
//			}
//			else
//			{
//				std::cout << 0;
//				break;
//			}
//		}
//
//		if (isFlip == false)
//		{
//			if (TargetStr[Right] == 'A')
//			{
//				TargetStr[Right] = 'X';
//				Right--;
//			}
//			else
//			{
//				isFlip = true;
//				TargetStr[Right] = 'X';
//				Right--;
//			}
//		}
//		else
//		{
//			if (TargetStr[Left] == 'A')
//			{
//				TargetStr[Left] = 'X';
//				Left++;
//			}
//			else
//			{
//				isFlip = false;
//				TargetStr[Left] = 'X';
//				Left++;
//			}
//		}
//	}
//
//	return 0;
//}