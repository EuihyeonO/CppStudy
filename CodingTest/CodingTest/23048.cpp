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
//	int Num = 0;
//	std::cin >> Num;
//
//	std::vector<int> Answer(Num);
//
//	Answer[0] = 1;
//	int ColorCount = 1;
//
//	for (int i = 1; i < Num; i++)
//	{
//		if (Answer[i] != 0)
//		{
//			continue;
//		}
//
//		ColorCount++;
//
//		for (int j = i; j < Num; j += (i + 1))
//		{
//			Answer[j] = ColorCount;
//		}
//	}
//
//	std::cout << ColorCount << "\n";
//
//	for (int i = 0; i < Num; i++)
//	{
//		std::cout << Answer[i] << " ";
//	}
//
//	return 0;
//}