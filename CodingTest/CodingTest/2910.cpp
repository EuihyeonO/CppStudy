//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//
//struct Node
//{
//	int Number = 0;
//	int Count = 0;
//	int Index = 0;
//};
//
//bool compare(Node _Left, Node _Right)
//{
//	if (_Left.Count > _Right.Count)
//	{
//		return true;
//	}
//
//	if (_Left.Count == _Right.Count && _Left.Index < _Right.Index)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	int NumOfMassage = 0;
//	int NumberMax = 0;
//
//	std::cin >> NumOfMassage;
//	std::cin >> NumberMax;
//
//	std::vector<int> Sequence;
//	Sequence.resize(NumOfMassage);
//
//	for (int i = 0; i < NumOfMassage; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//
//	std::vector<Node> Frequency;
//	Frequency.reserve(NumOfMassage);
//
//	for (int i = 0; i < NumOfMassage; i++)
//	{
//		int CurNum = Sequence[i];
//		bool isFind = false;
//
//		for (int j = 0; j < Frequency.size(); j++)
//		{
//			if (Frequency[j].Number == CurNum)
//			{
//				Frequency[j].Count++;
//				isFind = true;
//				break;
//			}
//		}
//
//		if (isFind == false)
//		{
//			int Size = Frequency.size();
//			Frequency.push_back({ CurNum, 1, Size });
//		}
//	}
//
//	sort(Frequency.begin(), Frequency.end(), compare);
//
//	int FrequencyIndex = 0;
//
//	while (FrequencyIndex < Frequency.size())
//	{
//		int PrintNum = Frequency[FrequencyIndex].Number;
//		int PrintCount = Frequency[FrequencyIndex].Count;
//
//		for (int i = 0; i < PrintCount; i++)
//		{
//			std::cout << PrintNum << " ";
//		}
//
//		FrequencyIndex++;
//	}
//
//	return 0;
//}
//
