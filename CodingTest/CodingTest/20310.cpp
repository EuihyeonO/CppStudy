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
//	std::string InputStr;
//	std::cin >> InputStr;
//
//	int ZeroCount = 0;
//	int OneCount = 0;
//
//	for (int i = 0; i < InputStr.size(); i++)
//	{
//		if (InputStr[i] == '0')
//		{
//			ZeroCount++;
//		}
//		else
//		{
//			OneCount++;
//		}
//	}
//
//	ZeroCount /= 2;
//	OneCount /= 2;
//
//	std::string Answer;
//	Answer.reserve(ZeroCount + OneCount);
//
//	for (int i = 0; i < InputStr.size(); i++)
//	{
//		if (OneCount > 0)
//		{
//			if (InputStr[i] == '1')
//			{
//				OneCount--;
//				InputStr[i] = '2';
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	for (int i = InputStr.size() - 1; i >= 0; i--)
//	{
//		if (ZeroCount > 0)
//		{
//			if (InputStr[i] == '0')
//			{
//				ZeroCount--;
//				InputStr[i] = '2';
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	for (int i = 0; i < InputStr.size(); i++)
//	{
//		if (InputStr[i] != '2')
//		{
//			Answer.push_back(InputStr[i]);
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}