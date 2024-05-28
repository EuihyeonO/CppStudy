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
//	std::string Number;
//	std::cin >> Number;
//
//	int NumberCount = 0;
//	int StringIndex = 0;
//	
//	while (StringIndex < Number.size())
//	{
//		NumberCount++;
//		std::string NumberCountStr = std::to_string(NumberCount);
//
//		for (int i = 0; i < NumberCountStr.size(); i++)
//		{
//			if (NumberCountStr[i] == Number[StringIndex])
//			{
//				StringIndex++;
//			}
//
//			if (StringIndex >= Number.size())
//			{
//				break;
//			}
//		}
//	}
//
//	std::cout << NumberCount;
//
//	return 0;
//}