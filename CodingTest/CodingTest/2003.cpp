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
//	int Start = 0;
//	int End = 0;
//	int Sum = Sequence[0];
//	int Count = 0;
//
//	while (true)
//	{
//		if (Sum < TargetSum)
//		{
//			End++;
//
//			if(End >= SequenceSize)
//			{
//				break;
//			}
//			
//			Sum += Sequence[End];
//		}
//		else if (Sum > TargetSum)
//		{
//			if(Start >= SequenceSize)
//			{
//				break;
//			}
//
//			Sum -= Sequence[Start];
//			Start++;
//		}
//		else if (Sum == TargetSum)
//		{
//			Count++;
//			End++;
//
//			if (End >= SequenceSize)
//			{
//				break;
//			}
//
//			Sum += Sequence[End];
//		}
//	}
//
//	std::cout << Count;
//
//	return 0;
//}