//#include <iostream>
//#include <vector>
//#include <stack>
//#include <string>
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
//	std::string TargetStr;
//	std::cin >> TargetStr;
//	
//	std::string BoomStr;
//	std::cin >> BoomStr;
//
//	std::stack<char> Stack;
//	int BoomIndex = 0;
//
//	char LastBoomChar = BoomStr[BoomStr.size() - 1];
//
//	for (int i = 0; i < TargetStr.size(); i++)
//	{
//		Stack.push(TargetStr[i]);
//
//		if (Stack.top() == LastBoomChar)
//		{
//			std::string TestStr;
//			TestStr.resize(BoomStr.size());
//
//			for (int i = 0; i < BoomStr.size(); i++)
//			{
//				if (Stack.size() <= 0)
//				{
//					break;
//				}
//
//				TestStr[TestStr.size() - 1 - i] = Stack.top();
//				Stack.pop();
//			}
//
//			if (TestStr == BoomStr)
//			{
//				continue;
//			}
//			else
//			{
//				for (int i = 0; i < TestStr.size(); i++)
//				{
//					if (TestStr[i] == '\0')
//					{
//						continue;
//					}
//
//					Stack.push(TestStr[i]);
//				}
//			}
//		}
//	}
//
//	if (Stack.size() == 0)
//	{
//		std::cout << "FRULA";
//	}
//	else
//	{
//		std::string AnswerStr;
//		int Size = Stack.size();
//		AnswerStr.resize(Size);
//
//		for (int i = 0; i < Size; i++)
//		{
//			AnswerStr[Size - 1 - i] = Stack.top();
//			Stack.pop();
//		}
//
//		std::cout << AnswerStr;
//	}
//
//	return 0;
//}