//#include <iostream>
//#include <vector>
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
//	int Size = 0;
//	std::cin >> Size;
//
//	int Value = 0;
//
//	int Max = 0;
//	int Min = 0;
//
//	for (int i = 0; i < Size; i++)
//	{
//		int Input = 0;
//		std::cin >> Input;
//
//		if (Input == 1)
//		{
//			Value++;
//		}
//		else
//		{
//			Value--;
//		}
//
//		Min = std::min(Min, Value);
//		Max = std::max(Max, Value);
//	}
//
//	std::cout << Max - Min;
//
//	return 0;
//}