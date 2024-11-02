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
//	int NumDeveloper = 0;
//	std::cin >> NumDeveloper;
//
//	std::vector<int> Stats(NumDeveloper);
//	for (int i = 0; i < NumDeveloper; i++)
//	{
//		std::cin >> Stats[i];
//	}
//
//	int Left = 0;
//	int Right = NumDeveloper - 1;
//	
//	int Answer = 0;
//
//	while (Left <= Right)
//	{
//		int Dist = Right - Left - 1;
//		Answer = std::max(Answer, Dist * std::min(Stats[Left], Stats[Right]));
//
//		if (Stats[Left] < Stats[Right])
//		{
//			Left++;
//		}
//		else
//		{
//			Right--;
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}