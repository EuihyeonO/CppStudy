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
//	int Days = 0;
//	int Duration = 0;
//	std::cin >> Days >> Duration;
//	
//	std::vector<int> Visit(Days);
//	for (int i = 0; i < Days; i++)
//	{
//		std::cin >> Visit[i];
//	}
//
//	int Sum = 0;
//	for (int i = 0; i < Duration; i++)
//	{
//		Sum += Visit[i];
//	}
//
//	int Max = Sum;
//	int Count = 1;
//
//	for (int i = Duration; i < Days; i++)
//	{
//		Sum -= Visit[i - Duration];
//		Sum += Visit[i];
//
//		if (Max < Sum)
//		{
//			Count = 1;
//			Max = Sum;
//		}
//		else if (Max == Sum)
//		{
//			Count++;
//		}
//	}
//
//	if (Max != 0)
//	{
//		std::cout << Max << "\n";
//		std::cout << Count;
//	}
//	else
//	{
//		std::cout << "SAD";
//	}
//
//	return 0;
//}