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
//	int NumPort = 0;
//	std::cin >> NumPort;
//
//	std::vector<int> Link(NumPort);
//	for (int i = 0; i < NumPort; i++)
//	{
//		std::cin >> Link[i];
//	}
//	
//	std::vector<int> LIS;
//	LIS.reserve(NumPort);
//
//	for (int i = 0; i < Link.size(); i++)
//	{
//		auto Iter = std::upper_bound(LIS.begin(), LIS.end(), Link[i]);
//
//		if (Iter == LIS.end())
//		{
//			LIS.push_back(Link[i]);
//		}
//		else
//		{
//			*Iter = Link[i];
//		}
//	}
//
//	std::cout << LIS.size();
//	return 0;
//}