//#include <iostream>
//#include <vector>
//#include <unordered_set>
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
//	int StrSize = 0;
//	int VecSize = 0;
//	std::cin >> StrSize >> VecSize;
//
//	std::vector<std::string> Vec(VecSize, std::string(StrSize, '0'));
//	for (int i = 0; i < StrSize; i++)
//	{
//		for (int j = 0; j < VecSize; j++)
//		{
//			std::cin >> Vec[j][StrSize - 1 - i];
//		}
//	}
//
//	int Count = 0;
//	
//	for(int j = 0; j < StrSize; j++)
//	{
//		for (int i = 0; i < VecSize; i++)
//		{
//			Vec[i].pop_back();
//		}
//
//		std::unordered_set<std::string> Strs;
//
//		for (int i = 0; i < VecSize; i++)
//		{
//			Strs.insert(Vec[i]);
//		}
//
//		if (Strs.size() == VecSize)
//		{
//			Count++;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	std::cout << Count;
//
//	return 0;
//}