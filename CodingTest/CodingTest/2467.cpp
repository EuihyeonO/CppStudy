//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
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
//	int NumLiquid = 0;
//	std::cin >> NumLiquid;
//
//	std::vector<int> PosLiquids;
//	std::vector<int> NegLiquids;
//
//	PosLiquids.reserve(NumLiquid);
//	NegLiquids.reserve(NumLiquid);
//	
//	for (int i = 0; i < NumLiquid; i++)
//	{
//		int Input = 0;
//		std::cin >> Input;
//		
//		if (Input < 0)
//		{
//			NegLiquids.push_back(Input);
//		}
//		else
//		{
//			PosLiquids.push_back(Input);
//		}
//	}
//
//	int NegIndex = NegLiquids.size() - 1;
//	int PosIndex = 0;
//	
//	int MinSum = 2000000001;
//	std::pair<int, int> MinPair = { 0, 0 };
//
//	while (PosIndex < PosLiquids.size() && NegIndex >= 0)
//	{
//		int Sum = NegLiquids[NegIndex] + PosLiquids[PosIndex];
//
//		if (MinSum > std::abs(Sum))
//		{
//			MinSum = std::abs(Sum);
//			MinPair = { NegLiquids[NegIndex] ,PosLiquids[PosIndex] };
//		}
//
//		if (Sum < 0)
//		{
//			PosIndex++;
//		}
//		else if(Sum > 0)
//		{
//			NegIndex--;
//		}
//		else
//		{
//			break;
//		}
//	}
//	
//	if (PosLiquids.size() > 1)
//	{
//		if (MinSum > std::abs(PosLiquids[0] + PosLiquids[1]))
//		{
//			MinPair = { PosLiquids[0], PosLiquids[1] };
//		}
//	}
//
//	if (NegLiquids.size() > 1)
//	{
//		if (MinSum > std::abs(NegLiquids[NegLiquids.size() - 2] + NegLiquids[NegLiquids.size() - 1]))
//		{
//			MinPair = { NegLiquids[NegLiquids.size() - 2], NegLiquids[NegLiquids.size() - 1] };
//		}
//	}
//
//	std::cout << MinPair.first << " " << MinPair.second;
//
//	return 0;
//}