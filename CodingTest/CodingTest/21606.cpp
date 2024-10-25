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
//std::vector<bool> isVisit;
//std::vector<bool> isIn;
//std::vector<std::vector<int>> Link;
//
//int Answer = 0;
//
//int OutDFS(int _CurNode)
//{
//	int LinkInCount = 0;
//
//	isVisit[_CurNode] = true;
//
//	for (int i = 0; i < Link[_CurNode].size(); i++)
//	{
//		int NextNode = Link[_CurNode][i];
//
//		if (isIn[NextNode] == true)
//		{
//			LinkInCount++;
//		}
//		else
//		{
//			if (isVisit[NextNode] == false)
//			{
//				LinkInCount += OutDFS(NextNode);
//			}
//		}
//	}
//
//	return LinkInCount;
//}
//
//int main()
//{
//	Init();
//
//	int NumVertex = 0;
//	std::cin >> NumVertex;
//
//	isVisit.resize(NumVertex);
//	isIn.resize(NumVertex);
//
//	std::string InOutInfo;
//	std::cin >> InOutInfo;
//
//	for (int i = 0; i < InOutInfo.size(); i++)
//	{
//		isIn[i] = InOutInfo[i] - '0';
//	}
//
//	Link.resize(NumVertex);
//
//	for (int i = 0; i < NumVertex - 1; i++)
//	{
//		int Start = 0, End = 0;
//		std::cin >> Start >> End;
//
//		Link[Start - 1].push_back(End - 1);
//		Link[End - 1].push_back(Start - 1);
//	}
//
//	for (int i = 0; i < isIn.size(); i++)
//	{
//		if (isIn[i] == false && isVisit[i] == false)
//		{
//			int OutCount = OutDFS(i);
//			Answer += OutCount * (OutCount - 1);
//		}
//	}
//
//	for (int i = 0; i < isIn.size(); i++)
//	{
//		if (isIn[i] == false)
//		{
//			continue;
//		}
//
//		for (int j = 0; j < Link[i].size(); j++)
//		{
//			int NextNode = Link[i][j];
//
//			if (isIn[NextNode] == true)
//			{
//				Answer++;
//			}
//		}
//	}
//
//	std::cout << Answer;
//
//	return 0;
//}