//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Command
//{
//	int Type = 0;
//	std::pair<long long, long long> Pair;
//};
//
//std::vector<long long> Nums;
//std::vector<long long> Tree;
//std::vector<Command> Commands;
//
//long long GetSumFromZero(int _Index)
//{
//	long long Sum = 0;
//
//	while (_Index > 0)
//	{
//		Sum += Tree[_Index];
//		_Index &= (_Index - 1);
//	}
//
//	return Sum;
//}
//
//long long GetSegSum(int _Start, int _End)
//{
//	long long A = GetSumFromZero(_End);
//	long long B = GetSumFromZero(_Start - 1);
//	return GetSumFromZero(_End) - GetSumFromZero(_Start - 1);
//}
//
//void Update(int _Index, long long _Value)
//{
//	while (_Index < Nums.size())
//	{
//		Tree[_Index] += _Value;
//		_Index += (_Index & -_Index);
//	}
//}
//
//int main()
//{
//	Init();
//
//	int NumSize = 0;
//	int ChangeCount = 0;
//	int SumCount = 0;
//
//	std::cin >> NumSize >> ChangeCount >> SumCount;
//
//	Nums.resize(NumSize + 1);
//	for (int i = 1; i <= NumSize; i++)
//	{
//		std::cin >> Nums[i];
//	}
//
//	Commands.resize(ChangeCount + SumCount);
//	for (int i = 0; i < Commands.size(); i++)
//	{
//		std::cin >> Commands[i].Type >> Commands[i].Pair.first >> Commands[i].Pair.second;
//	}
//
//	Tree.resize(NumSize + 1);
//
//	for (int i = 1; i <= NumSize; i++)
//	{
//		Update(i, Nums[i]);
//	}
//
//	for (int i = 0; i < Commands.size(); i++)
//	{
//		if (Commands[i].Type == 1)
//		{
//			long long AddSize = Commands[i].Pair.second - Nums[Commands[i].Pair.first];
//			Nums[Commands[i].Pair.first] += AddSize;
//
//			Update(Commands[i].Pair.first, AddSize);
//		}
//		else
//		{
//			long long Answer = GetSegSum(Commands[i].Pair.first, Commands[i].Pair.second);
//			std::cout << Answer << "\n";
//		}
//	}
//
//	return 0;
//}