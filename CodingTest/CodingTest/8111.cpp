//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
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
//	std::vector<int> Nums;
//	int Remain = 0;
//};
//
//int main()
//{
//	Init();
//
//	int NumOfTestCase = 0;
//	std::cin >> NumOfTestCase;
//
//	std::vector<std::string> Answers;
//
//	for(int i = 0; i < NumOfTestCase; i++)
//	{
//		int Num = 0;
//		std::cin >> Num;
//
//		std::vector<bool> isVisit(Num, false);
//
//		Node StartNode;
//		StartNode.Nums.push_back(1);
//		StartNode.Remain = 1;
//
//		std::queue<Node> BFS;
//		BFS.push(StartNode);
//
//		while (BFS.size() > 0)
//		{
//			Node CurNode = BFS.front();
//			BFS.pop();
//
//			int LastNum = CurNode.Nums[CurNode.Nums.size() - 1];
//
//			int One = LastNum * 10;
//			int Two = LastNum * 10 + 1;
//
//			int Remain_One = (CurNode.Remain * 10) % Num;
//			if (Remain_One != 0)
//			{
//				if (isVisit[Remain_One] == false)
//				{
//					Node NewNode = CurNode;
//					NewNode.Nums.push_back(0);
//					NewNode.Remain = Remain_One;
//
//					isVisit[Remain_One] = true;
//
//					BFS.push(NewNode);
//				}
//			}
//			else
//			{
//				std::string AnswerStr;
//				int NumSize = CurNode.Nums.size();
//				AnswerStr.reserve(NumSize);
//
//				for (int i = 0; i < NumSize; i++)
//				{
//					AnswerStr.push_back(CurNode.Nums[i] + '0');
//				}
//
//				AnswerStr.push_back('0');
//				Answers.push_back(AnswerStr);
//
//				break;
//			}
//
//			int Reamin_Two = (Remain_One + 1) % Num;
//			if (Reamin_Two != 0)
//			{
//				if (isVisit[Reamin_Two] == false)
//				{
//					Node NewNode = CurNode;
//					NewNode.Nums.push_back(1);
//					NewNode.Remain = Reamin_Two;
//
//					isVisit[Reamin_Two] = true;
//
//					BFS.push(NewNode);
//				}
//			}
//			else
//			{
//				std::string AnswerStr;
//				int NumSize = CurNode.Nums.size();
//				AnswerStr.reserve(NumSize);
//
//				for (int i = 0; i < NumSize; i++)
//				{
//					AnswerStr.push_back(CurNode.Nums[i] + '0');
//				}
//
//				AnswerStr.push_back('1');
//				Answers.push_back(AnswerStr);
//
//				break;
//			}
//
//		}
//	}
//	
//	std::copy(Answers.begin(), Answers.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
//	return 0;
//}