//#include <iostream>
//#include <vector>
//#include <cmath>
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
//	int StringSize = 0;
//	std::cin >> StringSize;
//
//	std::string InputStr(StringSize, '\0');
//	std::cin >> InputStr;
//
//	long long Answer = 0;
//
//	for (long long i = 0; i < InputStr.size(); i++)
//	{
//		long long CharNum = InputStr[i] - 'a' + 1;
//		long long PowResult = 1;
//		
//		for (long long j = 0; j < i; j++)
//		{
//			PowResult *= 31;
//			PowResult %= 1234567891;
//		}
//
//		Answer += PowResult * CharNum;
//		Answer %= 1234567891;
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}