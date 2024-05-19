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
//	int NumOfMan = 0;
//	std::cin >> NumOfMan;
//
//	std::vector<int> Honors(NumOfMan, 0);
//	for (int i = 0; i < NumOfMan; i++)
//	{
//		std::cin >> Honors[i];
//	}
//
//	std::sort(Honors.begin(), Honors.end());
//
//	long long HackerCount = Honors[0] - 1;
//	Honors[0] = 1;
//
//	for (int i = 1; i < NumOfMan; i++)
//	{
//		int CurHonor = Honors[i - 1] + 1;
//		
//		if (Honors[i] > CurHonor)
//		{
//			int Gap = Honors[i] - CurHonor;
//			HackerCount += Gap;
//			Honors[i] = CurHonor;
//		}
//	}
//
//	std::cout << HackerCount;
//
//	return 0;
//}