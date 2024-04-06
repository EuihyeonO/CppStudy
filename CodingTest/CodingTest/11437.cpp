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
//std::vector<int> Depth;
//std::vector<std::vector<int>> Ancestor;
//std::vector<std::vector<int>> Links;
//
//int NumOfNode = 0;
//int MaxExponent = 0;
//
//void Tree(int _CurNode, int _Parent)
//{
//	Depth[_CurNode] = Depth[_Parent] + 1;
//	Ancestor[_CurNode][0] = _Parent;
//
//	for (int i = 1; i <= MaxExponent; i++)
//	{
//		//i - 1 번째 조상
//		int IndexAncestor = Ancestor[_CurNode][i - 1];
//		Ancestor[_CurNode][i] = Ancestor[IndexAncestor][i - 1];
//	}
//
//	int LinkSize = Links[_CurNode].size();
//
//	for (int i = 0; i < LinkSize; i++)
//	{
//		int NextNode = Links[_CurNode][i];
//		if (NextNode != _Parent)
//		{
//			Tree(NextNode, _CurNode);
//		}
//	}
//}
//
//int main()
//{
//	Init();
//
//	std::cin >> NumOfNode;
//	MaxExponent = (int)floor(log2(NumOfNode));
//
//	Links.resize(NumOfNode + 1);
//
//	for (int i = 1; i < NumOfNode; i++)
//	{
//		int Start = 0;
//		int End = 0;
//
//		std::cin >> Start >> End;
//
//		Links[Start].push_back(End);
//		Links[End].push_back(Start);
//	}
//
//	Depth.resize(NumOfNode + 1);
//	Ancestor.resize(NumOfNode + 1, std::vector<int>(MaxExponent + 1, 0));
//
//	Depth[0] = -1;
//
//	Tree(1, 0);
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<int> Answers(NumOfTestCase);
//
//	for (int i = 0; i < NumOfTestCase; i++)
//	{
//		int First = 0;
//		int Second = 0;
//		std::cin >> First >> Second;
//
//		if (Depth[First] != Depth[Second])
//		{
//			//더 깊이가 깊은 곳을 First로 맞춰주기.
//			if (Depth[First] < Depth[Second])
//			{
//				std::swap(First, Second);
//			}
//
//			for (int j = MaxExponent; j >= 0; j--)
//			{
//				if (Depth[Second] <= Depth[Ancestor[First][j]])
//				{
//					First = Ancestor[First][j];
//				}
//			}
//		}
//
//		int LCA = 0;
//
//		if (First == Second)
//		{
//			LCA = First;
//		}
//		else
//		{
//			for (int j = MaxExponent; j >= 0; j--)
//			{
//				if (Ancestor[First][j] != Ancestor[Second][j])
//				{
//					First = Ancestor[First][j];
//					Second = Ancestor[Second][j];
//				}
//
//				LCA = Ancestor[First][j];
//			}
//		}
//
//		Answers[i] = LCA;
//	}
//
//	for (int i = 0; i < Answers.size(); i++)
//	{
//		std::cout << Answers[i] << "\n";
//	}
//
//	return 0;
//}