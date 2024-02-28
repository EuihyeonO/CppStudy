//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <algorithm>
//#include <set>
//
//void Init()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//}
//
//struct Node
//{
//	std::string Sequence = "";
//	int Count = 0;
//	int PrevIndex = 0;
//};
//
//std::string FlipStr(const std::string& _String, int _index, int _FlipCount)
//{
//	std::string CurString = _String;
//
//	std::stack<char> FlipStack;
//	for (int i = 0; i < _FlipCount; i++)
//	{
//		FlipStack.push(CurString[_index + i]);
//	}
//
//	for (int i = 0; i < _FlipCount; i++)
//	{
//		CurString[_index + i] = FlipStack.top();
//		FlipStack.pop();
//	}
//
//	return CurString;
//}
//
//int main()
//{
//	Init();
//
//	int SequenceSize = 0;
//	int FlipCount = 0;
//
//	std::cin >> SequenceSize >> FlipCount;
//
//	std::string Sequence;
//	Sequence.resize(SequenceSize);
//
//	for (int i = 0; i < SequenceSize; i++)
//	{
//		std::cin >> Sequence[i];
//	}
//
//	std::string SortedSequence = Sequence;
//	std::sort(SortedSequence.begin(), SortedSequence.end());
//
//	int MaxIndex = SequenceSize - FlipCount;
//
//	std::queue<Node> BFS;
//	BFS.push({ SortedSequence, 0, -1 });
//
//	std::set<std::string> Test;
//
//	while (BFS.size() > 0)
//	{
//		Node CurNode = BFS.front();
//		BFS.pop();
//
//		if (CurNode.Sequence == Sequence)
//		{
//			std::cout << CurNode.Count;
//			return 0;
//		}
//
//		for (int i = 0; i <= MaxIndex; i++)
//		{
//			if (i != CurNode.PrevIndex)
//			{
//				std::string CurSequence = FlipStr(CurNode.Sequence, i, FlipCount);
//
//				int PrevSize = Test.size();
//				Test.insert(CurSequence);
//				int CurSize = Test.size();
//
//				if (PrevSize != CurSize)
//				{
//					BFS.push({ CurSequence, CurNode.Count + 1, i });
//				}
//			}
//		}
//	}
//
//	std::cout << -1;
//
//	return 0;
//}