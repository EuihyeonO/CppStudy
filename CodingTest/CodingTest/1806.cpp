//#include <iostream>
//#include <vector>
//#include <set>
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
//	int SequenceSize = 0;
//	int TargetSum = 0;
//
//	std::cin >> SequenceSize >> TargetSum;
//	
//	std::vector<int> Sequence(SequenceSize);
//
//	for (int i = 0; i < SequenceSize; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//
//	std::set<int> Lengths;
//
//	int Start = 0;
//	int End = 0;
//	int Sum = Sequence[0];
//	
//	while (true)
//	{
//		if (Sum < TargetSum)
//		{
//			End++;
//
//			if (End >= SequenceSize)
//			{
//				break;
//			}
//
//			Sum += Sequence[End];
//		}
//		else if (Sum >= TargetSum)
//		{
//			int CurLength = End - Start + 1;
//			Lengths.insert(CurLength);
//
//			if (Start >= SequenceSize)
//			{
//				break;
//			}
//
//			Sum -= Sequence[Start];
//			Start++;
//		}
//	}
//	
//	int Answer = Lengths.size() > 0 ? *Lengths.begin() : 0;
//
//	std::cout << Answer;
//	return 0;
//}